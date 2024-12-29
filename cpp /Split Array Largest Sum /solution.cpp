class Solution {
public:
    bool isValid(vector<int>& nums , int n , int k , int maxAllowedSplits) {
        int parts = 1;
        int splits = 0;

        for(int i = 0; i < n; i++) {

            if(nums[i] > maxAllowedSplits) {
                return false;
            }

            if(nums[i] + splits <= maxAllowedSplits) {
                splits += nums[i];
            }
            else {
                parts++;
                splits = nums[i];
            }
        }

        return parts > k ? false : true;
    }

public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();

        if(k > n) {
            return -1;
        }

        int range = 0;
        for(int i = 0; i < n; i++) {
            range += nums[i];
        }

        int ans = -1;
        int start = 0;
        int end = range;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(isValid(nums , n , k , mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        return ans;
    }
};
