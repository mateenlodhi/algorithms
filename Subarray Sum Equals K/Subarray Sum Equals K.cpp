class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // brute force approach
        int counter = 0; 
        //run through two for loops and check every single possibility
        int i=0;
        int j;
        int sum = 0;


    unordered_map<int, int> umap;

    
    for(i=0; i<nums.size(); i++){
        
        sum += nums[i];
        
        
        if(sum == k){
            counter++;
        }
        if(umap.find(sum-k)!= umap.end()){

            counter+= umap[sum-k];
        }
        
        umap[sum]+=1;
        
    
            
    }

        
        return counter; 
    }
};
