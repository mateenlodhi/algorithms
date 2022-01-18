class Solution {
public:
    int maxDistToClosest(vector<int>& nums) {
        int currMax=0;
    int imax=-1000000; 
    
    for(int i=0; i < nums.size(); i++){
        if(nums[i] != 1){
            //cout << i << " "  ;
        
        
        int x1 = 1;
        int x2 = 1;
        
        // locaiton
        int x = 0;
        
        // calculate distance to left
        
        x = i-1;
        while(x>=0){
            if(nums[x]==0){
                x1++;
                x--;
            }
            
            else{
                x = -1;
            }
        }
         // calculate distance to right
        x = i+1;
        
        while(x < nums.size()){
            if(nums[x]==0){
                x2++;
                x++;
            }
            
            else{
                x = nums.size();
            }
        }
          
         
        //corner cases for the first and very last seat 
        if(i == 0 || i == nums.size()-1){
            currMax = max(x1,x2);
        }
          
        //calculating tte minimum of the distance to the right and to the left
        else{
            currMax = min(x1,x2);
        }
        
        
        if(currMax>imax){
            imax= currMax;
        }
        
        
        }
    }
    
    return imax; 
    }
};
