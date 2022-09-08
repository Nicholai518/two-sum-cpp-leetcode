#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // result to be returned
        vector<int> target_indices;
        // map
        unordered_map<int, int>map;
        // iterate through vector
        for (int i = 0; i < nums.size(); i++) {
            //  difference     = target - value at index
            //     7           =  9     -  2
            int difference = target - nums.at(i);

            // check map if the difference already exists
            if (map.find(difference) != map.end())
            {
                target_indices.push_back(i);
                target_indices.push_back(map.find(difference)->second);
                break;
            }
            // if the map does not contain the difference, add it to map for next iteration
            else
            {
                map[nums.at(i)] = i;
            }
        } // end of for loop

        // return the result
        return target_indices;
    }
};
