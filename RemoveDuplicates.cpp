class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for(int n : nums) {
            while(!i || n > nums[i-1])  //!i to remove i = 0 case (0-1=-1)
            nums[i++] = n; //i++ to return before it's incremented
        }
        return i;
    }
};
