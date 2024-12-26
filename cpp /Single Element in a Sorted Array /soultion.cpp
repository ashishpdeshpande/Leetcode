// 1> Brute Force Approch Using Bitwise XOR Operator
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
      
        for(int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }
      
        return ans;
    }
};


// 2> Optimized Approch Using Binary Search
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n == 1) {   // edge case
            return nums[0];
        }

        int start = 0;
        int end = n - 1;
        
        while(start <= end) {
            int mid = start + (end - start) / 2;
            
            if(mid == 0 && nums[0] != nums[1]) {  // edge case
                return nums[0];
            }
            if(mid == n - 1 && nums[n - 1] != nums[n - 2]) {  // edge case
                return nums[n - 1];
            }

            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            if(mid % 2 == 0) {
                if(nums[mid - 1] == nums[mid]) {
                    end = mid - 1;
                }
                else {
                    start = mid + 1;
                }
            }
            else {
                if(nums[mid - 1] == nums[mid]) {
                    start = mid + 1;
                }
                else {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};                                                                          
