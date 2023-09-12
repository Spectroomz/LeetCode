class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        int size = nums.size();

        for(int i = 0; i < size; ++i) {
            int num1 = nums[i];
            for(int j = i+1; j < size; ++j) {
                int num2 = nums[j];
                if((num1 + num2) == target) {
                    result = {i, j};
                    break;
                }
            }
        }
        

        return result;
    }
};
