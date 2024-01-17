class Solution {
public:
    int divide(int64_t dividend, int64_t divisor) {
        if (divisor == 0) {
            return INT_MAX;  
        }

        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;  
        }

        int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
        dividend = labs(dividend);
        divisor = labs(divisor);

        long long result = 0;

        while (dividend >= divisor) {
            long long tempDivisor = divisor;
            long long multiple = 1;

            
            while (dividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }

            dividend -= tempDivisor;
            result += multiple;
        }

        result *= sign;  

        if (result > INT_MAX) {
            return INT_MAX;  
        } else {
            return static_cast<int>(result);
        }
    }
};