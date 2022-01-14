class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size(); 
    int l=0;
    int r = nums.size()-1;
    int m=0;
    int position = 0;
    
    bool found = false; 
    
    
    while(!found){
        
        if(size == 0){
            position = 0 ;
            found = true;
        }
        else if(size ==1){
            if(target > nums[0]){
                position = 1;
                found = true;
            }
            else{
                position = 0;
                found = true;
            }
        }
        else{
            if(target > nums[r]){
                position = r+1;
                found = true;
                
            }       
            if(target < nums[l]){
                position = 0;
                found = true;
                
            }
            m = (l+r)/2;
            
            
            if(target > nums[m] &&  target < nums[m+1] ){
                position = m+1;
                found = true;
            }
            else if(target > nums[m] &&  target < nums[m+1] ){
                position = m;
                found = true;
            }
            else if(target== nums[m]){
                position = m; 
                found = true;
            }
            else{
                if(target > nums[m])
                    l = m+1;
                else{
                    r= m-1;
                }
            }

            
        }

        }
    
    return position; 

    }
};
