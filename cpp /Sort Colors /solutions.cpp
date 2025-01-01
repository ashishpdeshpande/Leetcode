// 1> Brute Force (Using sort() function)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin() , nums.end());
    }
};


// 2> Optimize Approch
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int count0 = 0 , count1= 0 , count2 = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] == 0) count0++;
            else if(nums[i] == 1) count1++;
            else count2++;
        }

        int index = 0;
        for(int i = 0; i < count0; i++) {
            nums[index++] = 0;
        }

        for(int i = 0; i < count1; i++) {
            nums[index++] = 1;
        }

        for(int i = 0; i < count2; i++) {
            nums[index++] = 2;
        }
    }
};


// 3> Optimal Approch - Dutch National Flag Alogorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0 , mid = 0 , high = n - 1;

        while(mid <= high) {

            if(nums[mid] == 0) {
                swap(nums[mid] , nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid] , nums[high]);
                high--;
            }
        }
    }
};









