    bool isValid(string s) {
        if(s[0]!=')' && s[0]!=']' && s[0]!='}'){
            std::stack<int>stack;
            for(int i=0; i<s.length(); i++){
                if(s[i]!=')' && s[i]!=']' && s[i]!='}'){
                    stack.push(s[i]);
                }
                else if(!stack.empty() && (
                    s[i]==')' && stack.top()=='(' || 
                    s[i]==']' && stack.top()=='[' || 
                    s[i]=='}' && stack.top()=='{') ){
                    stack.pop();
                }else{
                    return false;
                }
            }
            if(stack.empty()){
                return(true);
            }            
        }

        return false;
    }