class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int current =1;
        int maxi=INT_MIN;
        
        for (int i=0; i<nums.size(); i++){
            current*=nums[i];
            if (current>maxi){
                maxi=current;
            }
            if (current==0){
                current=1;
            }
        }
        current=1;
        for (int i=nums.size()-1; i>=0; i--){
            current*=nums[i];
            if (current>maxi){
                maxi=current;
            }
            if (current==0){
                current=1;
            }
        }
        return maxi;
    }
};