class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
sort(nums.begin(), nums.end());
    int size = nums.size();
    vector<vector<int>> vec;    
    


    for(int i=0; i<size; i++){

        if(i==0 || nums[i] != nums[i-1]){
            //using the 2Sum approach
            int l= i+1;
            int r= size-1;
            
            
            while(l<r){
            int sum = nums[i]+nums[l]+nums[r];
            
            if(sum== 0){
                //found a match, now we add it to the list
                vec.push_back({ nums[i],nums[l],nums[r]});
            
            //makes sure we dont compute the sum with the same l and r values just incase there are 
            //repeating values in the array
            while(l<r && nums[l] == nums[l+1])l++;
            while(l<r && nums[r] == nums[r-1])r--;
            
            
            //goes to the next values that is not the same as the ones store, to avoid duplicates.
            l++;
            r--;
            
            }
            if(sum<0)
                l++;
                
            if(sum>0){
                r--;
            }
            }
        }

    }
    
    return vec;

}
};
