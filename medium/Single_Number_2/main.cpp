#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        int i = 0; 

        while (i < 32) {
            int sum = 0;
            int j = 0; 

            while (j < nums.size()) {
                if (((unsigned int)nums[j] >> i) & 1) {
                    sum++;
                }
                j++;
            }

            if (sum % 3 != 0) {
                result |= (1U << i);
            }

            i++;
        }

        return result;
    }
};

