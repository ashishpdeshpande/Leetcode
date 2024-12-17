// 1> Brute Force Approch 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for(int start = 0; start < nums.size(); start++) {
            int currentSum = 0;
            for(int end = start; end < nums.size(); end++) {
                currentSum += nums[end];
                maxSum = max(maxSum , currentSum);
            }
        }
        return maxSum;
    }
};

// 2> Kadane's Algorithm
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm
        int maxSum = INT_MIN;
        int currentSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            maxSum = max(currentSum , maxSum);
            if(currentSum < 0) {
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
