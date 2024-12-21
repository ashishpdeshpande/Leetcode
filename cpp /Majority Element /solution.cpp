// 1> Brute Force 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int val : nums) {
            int count = 0;
            for(int element : nums) {
                if(element == val) {
                    count++;
                }
            }
            if(count > nums.size()/2){
                return val;
            }
        }
        return -1;
    }
};


// 2> Optimize Approch (using sorting)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count = 1;
        int ans = nums[0];

        for(int i = 1; i < nums.size(); i++) {
    
            if(nums[i] == nums[i-1]) {
                count++;
            }
            else {
                count = 1;
                ans = nums[i];
            }

            if(count > nums.size()/2) {
                return ans;
            }
        }
        return ans;
    }
};


// 3> Using Sorting 
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      
      sort(nums.begin(),nums.end());
      return nums[nums.size()/2];
      
    }
};


// 4> Morse Voting Algorithm
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(count == 0) {
                ans = nums[i];
            }

            if(ans == nums[i]) {
                count++;
            }
            else {
                count--;
            }
        }
        return ans;
    }
};
