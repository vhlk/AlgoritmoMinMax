package;

import motion.Actuate;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.Assets;
import haxe.ui.Toolkit;
import haxe.ui.components.Button;
import haxe.ds.Vector;

class Main extends Sprite
{

	public function new()
	{
		super();

		var columnsIndex = new Vector<Int>(4);
		for (i in 0 ... 4) {
			columnsIndex[i] = 3;
		}

		var allMoves:Array<Array<Moves>> = [];
		for (i in 0 ... 4) allMoves.push([]);

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
			btn.onClick = function(e) {
				if (columnsIndex[i-1] < 1) return;

				var redDiscData = Assets.getBitmapData("assets/black_disc.png");
				var redDisc = new Bitmap(redDiscData);
				addChild(redDisc);
				redDisc.smoothing = true;
				redDisc.width = stage.stageWidth/4 - 20;
				redDisc.height = stage.stageWidth/4 - 20;
				redDisc.x = calculateDiscX(i, redDisc);
				Actuate.tween(redDisc, 3, {y: calculateDiscY(columnsIndex[i-1], redDisc)});
				columnsIndex[i-1]--;
			}
		}
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
