// 1> Brute Force Approch
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;

        for (int leftBoundry = 0; leftBoundry < height.size(); leftBoundry++) {
            for (int rightBoundry = leftBoundry + 1; rightBoundry < height.size(); rightBoundry++) {

                int width = rightBoundry - leftBoundry;
                int length = min(height[leftBoundry], height[rightBoundry]);

                int currentWater = width * length;
                maxWater = max(maxWater, currentWater);
            }
        }
        return maxWater;
    }
};


// 2> Two Pointer Approch
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int leftBoundry = 0;
        int rightBoundry = height.size()-1;

        while(leftBoundry < rightBoundry) {
            int width = rightBoundry - leftBoundry;
            int length = min(height[leftBoundry] , height[rightBoundry]);
            int currentWater = width * length;
            maxWater = max(maxWater , currentWater);

            if(height[leftBoundry] < height[rightBoundry]) {
                leftBoundry++;
            }
            else {
                rightBoundry--;
            }
            
        }
        return maxWater;
    }
};
