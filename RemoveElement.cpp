class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = 0;
        while(j != nums.size()) { //j++ every iteration to proceed in the vector
            if(nums[j] == val) j++; 
            else nums[i++] = nums[j++]; //i++ to add to total number of elements in vector
        }
        return i; //return number of elements in vector without the value removed
    }
};
