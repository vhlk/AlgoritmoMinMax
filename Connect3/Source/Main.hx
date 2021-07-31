package;

import sys.thread.Thread;
import motion.Actuate;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import haxe.ui.Toolkit;
import haxe.ui.components.Button;
import haxe.ds.Vector;
import haxe.ui.styles.Style;

class Main extends Sprite
{

	public function new()
	{
		super();

		var allMoves:Vector<Array<User>> = new Vector(4);
		for (i in 0 ... allMoves.length) allMoves[i] = [];

		var wireframeData = Assets.getBitmapData("assets/wireframe.png");
		var wireframe = new Bitmap(wireframeData);
		addChild(wireframe);
		wireframe.smoothing = true;
		wireframe.width = stage.stageWidth;
        wireframe.height = stage.stageHeight-50;
		wireframe.y = 50;

		Toolkit.init();

		for (i in 1 ... 5) {
			var btn = new Button();
			btn.text = "Soltar aqui";
			addChild(btn);
			btn.x = calculateBtnPos(i, btn);
			btn.y = 20;
			btn.styleString = "
			background: #79bbff;
			border: 3px solid #337bc4;
			border-radius:10px;
			padding:8px 10px;
			font-size: 14px;
			color: #212121;";
			btn.onClick = function(e) {
				var index = i-1;
				if (allMoves[index].length > 2) return;

				putDisc(index, allMoves);			

				// little delay so user can see his move
				// trace('coluna == ${i}');
				// trace('allMoves: ${[for (i in 0 ... allMoves.length) [for (user in allMoves[i]) user.user]]}');
				var decision = MinMax.minimaxDecision(allMoves);
				if (decision == -1)
					drawIfTerminal(allMoves);
				else if (decision == -2) {
					for (i in 0 ... allMoves.length) {
						var positions = allMoves[i];
						if (positions.length < 3) {
							putIADisc(i, allMoves);
							break;
						}
					}
				} else {
					putIADisc(decision, allMoves);
				}				
				trace('decision: ${decision}');
			}
		}
	}

	function drawIfTerminal(allMoves:Vector<Array<User>>) {
		var terminalTest = MinMax.terminalTest(allMoves);
		if (terminalTest != -1) {
			var wireframeData = Assets.getBitmapData("assets/winMsg.png");
			if (terminalTest == Math.POSITIVE_INFINITY) {
				wireframeData = Assets.getBitmapData("assets/loseMsg.png");
			}
			var wireframe = new Bitmap(wireframeData);
			addChild(wireframe);
			wireframe.smoothing = true;
			wireframe.width = stage.stageWidth;
			wireframe.height = stage.stageHeight;
		}
	}

	function putIADisc(index:Int, allMoves:Vector<Array<User>>) {
		Thread.create(() -> {
			Sys.sleep(1);				
			putDisc(index, allMoves, false);
			drawIfTerminal(allMoves);
		});
	}

	function putDisc(index:Int, allMoves:Vector<Array<User>>, userDisc:Bool=true) {
		var discData = Assets.getBitmapData("assets/black_disc.png");
		var disc = new Bitmap(discData);

		if (!userDisc) {
			discData = Assets.getBitmapData("assets/red_disc.png");
			disc = new Bitmap(discData);
		}

		addChild(disc);
		disc.smoothing = true;
		disc.width = stage.stageWidth/4 - 20;
		disc.height = stage.stageWidth/4 - 20;
		disc.x = calculateDiscX(index+1, disc);
		Actuate.tween(disc, 3, {y: calculateDiscY(3-allMoves[index].length, disc)});
		allMoves[index].push(new User(userDisc));
	}

	function calculateDiscX(column: Int, disc:Bitmap) {
		if (column == 4) return stage.stageWidth/4*column - stage.stageWidth/8 - disc.width/2;

		// desenho n ficou bem feito rs
		return stage.stageWidth/4*column - stage.stageWidth/8 - disc.width/2 + 15;
	}

	function calculateDiscY(line: Int, disc:Bitmap) {
		return (stage.stageHeight-50)/3*line - (stage.stageHeight-50)/6 + 50 - disc.height/2;
	}

	function calculateBtnPos(column:Int, btn:Button) {
		if (column == 4) return stage.stageWidth/4*column - stage.stageWidth/8 - btn.width/2;

		// desenho n ficou bem feito rs
		return stage.stageWidth/4*column - stage.stageWidth/8 - btn.width/2 + 15;	
	}
}
