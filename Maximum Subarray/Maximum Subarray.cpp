class Solution {
public:
    
    int max(int i, int j){
        return i>j ? i:j; 
    }
    
    
    int maxSubArray(vector<int>& nums) {
        
        int maxSum=-100000000;
        int currentSum = 0;
        
        for (int i=0; i<nums.size(); i++){
            
            currentSum = max(nums[i], nums[i] + currentSum);
            
            if(currentSum > maxSum){
                maxSum = currentSum;
                
            }

        }
        
        return maxSum;
    }
};
