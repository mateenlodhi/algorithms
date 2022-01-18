class Solution {
public:
    bool isValid(string str) {
        //creating a stack
        stack<char> s;
        
        //getting the length of the string
        int l = str.length(); 
        
        // iterating thorugh the whole string now using a for loop
        for(int i=0; i<l; i++){
            
            //if its an opening bracket we push that character into the stack
            if(str[i]== '(' || str[i]== '{' || str[i]== '[' ) 
                s.push(str[i]);
            
            
            //if closing bracket then we check if the top of the stack has the 
            //corresponding opening bracket 
            else if(str[i]== ')' || str[i]== '}' || str[i]== ']' ) {
                
                if(s.empty())
                    return false;
                
                else if(str[i] == ')' && s.top() != '(' )
                    return false;
                
                else if(str[i] == '}' && s.top() != '{' )
                    return false;
                
                else if(str[i] == ']' && s.top() != '[' )
                    return false;
                
                else{
                    s.pop();
                }
            }
        
        }
        
        if(s.empty())
            return true;
        else
            return false; 
        
        
        
    }
};
