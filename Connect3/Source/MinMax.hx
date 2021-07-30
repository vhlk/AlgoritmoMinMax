import haxe.ds.Vector;

class MinMax {
    function minimaxDecision(state:Vector<Array<User>>) {
        return maxValue(state).column;
    }

    function maxValue(state:Vector<Array<User>>): NextMove {
        var utility = terminalTest(state);
        if (utility != -1)
            return new NextMove(-1, utility);

        var res = new NextMove(0, Math.NEGATIVE_INFINITY);
        for (i in 0...state.length) {
            var column = state[i];

            if (column.length < 3) {
                column.push(new User(false));
                var nextState = state.copy();
                nextState[i] = column;
                var minV = minValue(nextState);
                if (minV > res.value)
                    res = new NextMove(i, minV);
            }
        }

        return res;
    }

    function minValue(state:Vector<Array<User>>): Float {
        var utility = terminalTest(state);
        if (utility != -1)
            return utility;

        var res = Math.POSITIVE_INFINITY;
        for (i in 0...state.length) {
            var column = state[i];

            if (column.length < 3) {
                column.push(new User(true));
                var nextState = state.copy();
                nextState[i] = column;
                res = Math.min(res, maxValue(nextState).value);
            }
        }

        return res;
    }

    function terminalTest(state:Vector<Array<User>>): Float {
        for (i in 0...state.length) {
            var column = state[i];

            // ver caso tenha completado o jogo na vertical
            if (column.length == 3) {
                var userMoves = column.filter(user -> user.user == true);
                if (userMoves.length == 3) return Math.NEGATIVE_INFINITY;

                var iaMoves = column.length - userMoves.length;
                if (iaMoves == 3) return Math.POSITIVE_INFINITY;
            }

            // ver caso tenha completado na horizontal
            if (i <= 1) { 
                for (j in 0...column.length) {
                    var elemUser = state[i][j].user;
                    if (state[i+1].length > j && state[i+1][j].user == elemUser) {
                        if (state[i+2].length > j && state[i+2][j].user == elemUser) {
                            elemUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;
                        }
                    }
                }
            }
        }
        
        // ver caso tenha completado na diagonal
        if (state[1].length > 1) {
            var midUser = state[1][1].user;
            if (state[0].length > 0 && state[0][0].user==midUser && state[2].length == 3 && state[2][2].user==midUser)
                midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;

            if (state[0].length == 3 && state[0][2].user==midUser && state[2].length > 0 && state[2][0].user==midUser)
                midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;
        }
        else if (state[2].length > 1) {
            var midUser = state[2][2].user;
            if (state[1].length > 0 && state[1][0].user==midUser && state[3].length == 3 && state[3][2].user==midUser)
                midUser ? return Math.NEGATIVE_INFINITY : return Math.POSITIVE_INFINITY;

            if (state[1].length == 3 && state[1][2].user==midUser && state[3].length > 0 && state[3][0].user==midUser)
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