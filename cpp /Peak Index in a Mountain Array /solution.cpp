// 1> Brute Force Approch
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        for(int i = 1; i < arr.size()-1; i++) {
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) {
                return i;
            }
        }
        return 0;
    }
};


// 2> Optimize Approch : Using Binary Search 1
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 1;
        int end = arr.size() - 2;

        while(start <= end) {
            int mid = start + (end - start) / 2;

            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
                return mid;
            }

            if(arr[mid] > arr[mid - 1]) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return -1;
    }
};


// 3> Optimize Approch : Using Binary Search 2
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;

        while(start <  end ) {
            int mid = start + (end - start)/2;

            if(arr[mid] < arr[mid+1]) {
                start = mid + 1;
            }
            else {
                end = mid;
            }
        }
        return start;
    }
};
