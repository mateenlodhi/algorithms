class Solution {
public:
    int min(int a, int b){
    return a<b ? a:b;
}

    int countBinarySubstrings(string s) {
        int curr = 1;
    int prev = 0;
    int counter = 0; 
    
    
    for(int i=1; i< s.size(); i++){
        
        if(s[i-1] == s[i]){
            curr++;
        }
        else{
            counter += min(curr, prev);
            prev = curr;
            curr = 1;
        }
    }
    
    counter += min(curr, prev);
        
        return counter; 
    }
};
