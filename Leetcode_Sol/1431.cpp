//1431 
//kids with greatest number of candies

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        // Step 1: Find the maximum number of candies any child currently has
        int maxCandies = *std::max_element(candies.begin(), candies.end());

        // Step 2: Create a result vector to store whether each child can have the most candies
        std::vector<bool> result(candies.size(), false);

        // Step 3: Check if each child can have the greatest number of candies
        for (size_t i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= maxCandies) {
                result[i] = true;
            }
        }

        // Step 4: Return the result vector
        return result;
    }
};
