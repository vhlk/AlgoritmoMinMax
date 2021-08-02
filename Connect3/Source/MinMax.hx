import haxe.crypto.BaseCode;
import haxe.ds.Vector;

class MinMax {	
    public static function minimaxDecision(state:Vector<Array<User>>, depth:Int = 2):Int {
		return maxValue(state, depth, 0).column;
	}

	private static function maxValue(state:Vector<Array<User>>, targetDepth:Int, currDepth:Int):NextMove {
		var utility = terminalTest(state);
		if (utility != -1) {
			return new NextMove(-1, utility);
		}

		if (targetDepth != -1 && currDepth == targetDepth)
			return new NextMove(-3, heuristic(state));

		var res = new NextMove(-2, Math.NEGATIVE_INFINITY);
		for (i in 0 ... state.length) {
			var column = state[i].copy();
			// trace('column: ${[for (elem in column) elem.user]}');

			if (column.length < 3) {
				column.push(new User(false));
				var nextState = state.copy();
				nextState[i] = column;
				var minV = minValue(nextState, targetDepth, currDepth+1);
				// trace('column: ${i+1}, value: ${minV}');
                if (minV > res.value)
                    res = new NextMove(i, minV);
			}
		}
		// trace("****");

		return res;
	}

	private static function minValue(state:Vector<Array<User>>, targetDepth:Int, currDepth:Int):Float {
		var utility = terminalTest(state);
		if (utility != -1)
			return utility;

		if (targetDepth != -1 && currDepth == targetDepth)
			return heuristic(state);

		var res = Math.POSITIVE_INFINITY;
		for (i in 0 ... state.length) {
			var column = state[i].copy();

			if (column.length < 3) {
				column.push(new User(true));
				var nextState = state.copy();
				nextState[i] = column;
				res = Math.min(res, maxValue(nextState, targetDepth, currDepth+1).value);
			}
		}

		return res;
	}

	public static function terminalTest(state:Vector<Array<User>>):Float {
		for (i in 0 ... state.length) {
			var column = state[i].copy();

			// ver caso tenha completado o jogo na vertical
			if (column.length == 3) {
				var userMoves = column.filter(user -> user.user == true);
				if (userMoves.length == 3)
					return Math.NEGATIVE_INFINITY;

				var iaMoves = column.length - userMoves.length;
				if (iaMoves == 3)
					return Math.POSITIVE_INFINITY;
			}

			// ver caso tenha completado na horizontal
			if (i <= 1) {
				for (j in 0 ... column.length) {
					var elemUser = state[i][j].user;
					if (state[i + 1].length > j && state[i + 1][j].user == elemUser) {
						if (state[i + 2].length > j && state[i + 2][j].user == elemUser) {
							elemUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;
						}
					}
				}
			}
		}

		// ver caso tenha completado na diagonal
		if (state[1].length > 1) {
			var midUser = state[1][1].user;
			if (state[0].length > 0 && state[0][0].user == midUser && state[2].length == 3 && state[2][2].user == midUser)
				midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;

			if (state[0].length == 3 && state[0][2].user == midUser && state[2].length > 0 && state[2][0].user == midUser)
				midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;
		} else if (state[2].length > 1) {
			var midUser = state[2][1].user;
			if (state[1].length > 0 && state[1][0].user == midUser && state[3].length == 3 && state[3][2].user == midUser)
				midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;

			if (state[1].length == 3 && state[1][2].user == midUser && state[3].length > 0 && state[3][0].user == midUser)
				midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;
		}

		return -1;
	}

	private static function heuristic(state:Vector<Array<User>>): Float {
		// var isTerminal = terminalTest(state);
		// if (isTerminal != -1) return isTerminal;

		var board = [for (column in state) [for (user in column) user.user ? 1 : 0]];
		for (i in 0 ... board.length) {
			for (j in board[i].length ... 3) board[i].push(-1);
		}

		var aiPoints = 0;

		for (i in 0 ... board.length) {
			var column = board[i].copy();

			// vertical
			var userMoves = column.filter(user -> user == 1);
			var aiMoves = column.filter(user -> user == 0);
			if (userMoves.length == 0 && aiMoves.length > 0) aiPoints++;
			if (userMoves.length > 0 && aiMoves.length == 0) aiPoints--;
			
			// horizontal
			if (i <= 1) {
				for (j in 0 ... column.length) {
					var elems = [board[i][j], board[i][j+1], board[i][j+2]];
					var userMoves = elems.filter(user -> user == 1);
					var aiMoves = elems.filter(user -> user == 0);
					if (userMoves.length == 0 && aiMoves.length > 0) aiPoints++;
					if (userMoves.length > 0 && aiMoves.length == 0) aiPoints--;
				}
			}
		}

		// diagonal
		var diagPrincipal1 = [board[0][2], board[1][1], board[2][0]];
		var diagPrincipal2 = [board[1][2], board[2][1], board[3][0]];
		var diagSecundaria1 = [board[2][2], board[1][1], board[0][0]];
		var diagSecundaria2 = [board[3][2], board[2][1], board[1][0]];

		var allDiags = [diagPrincipal1, diagPrincipal2, diagSecundaria1, diagSecundaria2];
		for (diag in allDiags) {
			var userMoves = diag.filter(user -> user == 1);
			var aiMoves = diag.filter(user -> user == 0);
			if (userMoves.length == 0 && aiMoves.length > 0) aiPoints++;
			if (userMoves.length > 0 && aiMoves.length == 0) aiPoints--;
		}
		
		return aiPoints;
	}
}

class NextMove {
    public var column:Int; // colunas 1 a 4
    public var value:Float;

    public function new(column:Int, value:Float) {
        this.column = column;
        this.value = value;
    }
}