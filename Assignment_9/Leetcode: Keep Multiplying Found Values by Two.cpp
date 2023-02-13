class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        map<int,int>mp;
        for(int it : nums) mp[it]=1;
        
        while(mp[original]){
            original*=2;
        }
        return original;
    }
};
