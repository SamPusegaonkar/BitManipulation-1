/*
Intuition: Use a XOR gate. Keep XORing elements of nums to the mask.
Same numbers have an XOR output of 0 otherwise 1.
Time Complexity: O(N)
Space Complexity: O(1)

*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for ( auto num: nums){
            result = result ^ num;
        }
        return result;
    }
};