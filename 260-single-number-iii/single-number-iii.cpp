class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int> umap;
        vector<int> result;
        for(auto num:nums)
        {
            umap[num]++;
        }
        for(auto num:umap)
        {
            if(num.second==1)
            {
                result.push_back(num.first);
            }
        }
        return result;
    }
};