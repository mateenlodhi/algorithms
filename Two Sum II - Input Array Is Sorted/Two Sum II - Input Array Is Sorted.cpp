class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        //nums={3,24,50,79,88,150,345};
        //target = 200; 
        int l = 0;
        int r = nums.size()-1;
        int sum; 
        
        vector<int> result; 
        
        
        while(l<r){
            
            sum = nums[l] + nums[r];
            
            if(sum < target){
                l++;
            }
            else if(sum > target){
                r--;
            }
            else{
                r++;
                l++;
                result.push_back(l);
                result.push_back(r);
                break;
            }
        }
        return result;
    }
};
