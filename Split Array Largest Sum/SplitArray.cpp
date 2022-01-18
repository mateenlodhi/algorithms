class Solution {
public:
    
    
    int check(vector<int> nums, int m){
    int sum=0;
    int counter=0;
    
    for(int i=0; i<nums.size(); i++){
        
        
        if(nums[i]+sum>m){
            counter++;
            sum=nums[i];
        }
        else
            sum+=nums[i];
 
    }
    counter ++; 

    return counter;
    
}
    
    
    int splitArray(vector<int>& nums, int n) {
        

    int l=0;
    int r=0;
    int ans=0;
    
    // gets the max value in nums and also gets the total number that the array adds up to
    // this is the range we will be looking in for our maximum sum thats minimum
    for(int i=0; i< nums.size(); i++){
        l = max(l,nums[i]);
        r+= nums[i];
    }
        
    int i=0; 
    
    // applying a binary search method to choose a value thats minimum, looking within the range
    while(l<r){
        int right = r-l;
        int mid = l+ (right) / 2;
        
        // this checks how many splits we can do with the upper bound as "mid"
        int slices = check(nums, mid);
        
        // if splits are greater than the max splits we can have then we know our mid value is small 
        // so we move to the right
        if( slices > n){
            l = mid + 1;
        }
        
        // mid value is too large so we move our upper bound to the left
        else{
            r = mid;
        }
        
        
    }
        //when l=r, thats when we have found our maximum, both l and r are equal so we can return either or.. 
        return l;
    }
};
