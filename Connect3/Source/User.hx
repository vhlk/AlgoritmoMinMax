class User {
    public var user:Bool;

    public function new(isUser = false) {
        this.user = isUser;
    }

    public function toString(): String {
        if (this.user) {
            return "User";
        }
        else 
            return "AI";
    }
}