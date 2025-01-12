class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> positiveEle;
        vector<int> negativeEle;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] >= 0) {
                positiveEle.push_back(nums[i]);
            }
            else{
                negativeEle.push_back(nums[i]);
            }
        }

        for(int i = 0; i < positiveEle.size(); i++) {
            
            ans.push_back(positiveEle[i]);
            ans.push_back(negativeEle[i]);
        }

        
        return ans;
    }
};
