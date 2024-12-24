// Using Binary Exponentiation

class Solution {
public:
    double myPow(double x, int n) { 
        long binaryForm = n;
        double ans = 1;

        if(n < 0) {                   // checking for negative powers
            x = 1 / x;
            binaryForm = - binaryForm;      
        }

        while(binaryForm > 0) {
            if(binaryForm % 2 == 1) {
                ans *= x;
            }
            x *= x;
            binaryForm /= 2;
        }
        return ans;
    }
};
