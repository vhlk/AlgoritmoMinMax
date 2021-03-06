import haxe.ds.Vector;

class Test {
	static function main() {
		var mArray = new Vector(4);
		mArray[0] = [new User(true),new User(false)];
		mArray[1] = [new User(true)];
		mArray[2] = [];
		mArray[3] = [];

		var nextPlay = minimaxDecision(mArray);
		trace(nextPlay);
	}

	static function minimaxDecision(state:Vector<Array<User>>) {
		return maxValue(state).column;
	}

	static function maxValue(state:Vector<Array<User>>):NextMove {
		var utility = terminalTest(state);
		if (utility != -1) {
			return new NextMove(-1, utility);
		}

		var res = new NextMove(-2, Math.NEGATIVE_INFINITY);
		for (i in 0 ... state.length) {
			var column = state[i].copy();
			// trace('column: ${[for (elem in column) elem.user]}');

			if (column.length < 3) {
				column.push(new User(false));
				var nextState = state.copy();
				nextState[i] = column;
				var minV = minValue(nextState);
				// trace('column: ${i+1}, value: ${minV}');
                if (minV > res.value)
                    res = new NextMove(i, minV);
			}
		}
		// trace("****");

		return res;
	}

	static function minValue(state:Vector<Array<User>>):Float {
		var utility = terminalTest(state);
		if (utility != -1)
			return utility;

		var res = Math.POSITIVE_INFINITY;
		for (i in 0 ... state.length) {
			var column = state[i].copy();

			if (column.length < 3) {
				column.push(new User(true));
				var nextState = state.copy();
				nextState[i] = column;
				var maxV = maxValue(nextState).value;
				res = Math.min(res, maxV);
			}
		}

		return res;
	}

	static function terminalTest(state:Vector<Array<User>>):Float {
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
				for (j in 0...column.length) {
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
}

class NextMove {
	public var column:Int; // colunas 1 a 4
	public var value:Float;

	public function new(column:Int, value:Float) {
		this.column = column;
		this.value = value;
	}
}

class User {
	public var user:Bool;

	public function new(isUser = false) {
		this.user = isUser;
	}
}
