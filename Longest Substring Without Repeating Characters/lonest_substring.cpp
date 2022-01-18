class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
    //max variable
    int uMax=0;

    // running through each character and finding their longest substring
    for(int i=0; i<s.length(); i++){
        
        //temp max
        int currMax=0;
        
        //unordered map to keep track of characters not repeating
        unordered_map<char, int> umap;
        
        int j= i;
        bool run = true;
        
        while(j < s.length() && run){
            
            // if the character has not appeared in the string then we 
            // add it to our hash map and increment our temporary max, 
            if(umap[s[j]] == 0){
                umap[s[j]] ++;
                currMax++;
            }
            // goes here if a repeated value has appeared in the substring,
            // breaks the loop
            else{
                
                run = false;
            }
            j++;
        }
        
        // checks if the temporary max of the substring is bigger than the global
        // max we have store, if yes, it means a longer suibstring appeared, and we 
        //replace the global max now 
        
        if(currMax>uMax)
            uMax = currMax;

    }
        
    return uMax;
    }
};
