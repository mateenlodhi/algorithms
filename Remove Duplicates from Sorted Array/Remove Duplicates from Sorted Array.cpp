class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int lp= 0;
    int counter;
        
        if(nums.size() > 0){
            counter = 1;
        }
        else{
            counter = 0;
        }
    
 
    for(int i = 1; i<nums.size(); i++){
        int temp = nums[i];
        if(temp != nums[lp] ){
            lp++;
            nums[lp] = nums[i];
            counter++;
        }

    }

    
        return counter; 

    }
};
