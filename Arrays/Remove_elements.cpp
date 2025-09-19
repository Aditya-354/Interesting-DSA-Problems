#include<iostream>
#include<vector>

class Solution
{
    public:
    int removeElement(std::vector<int>& nums, int val)
    {
        size_t index = 0;
        for(size_t i = 0; i < nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main()
{
    Solution s;
    std::vector<int> nums = {3, 2, 2, 3};
    int val = 3;
    int newNums = s.removeElement(nums, val); 
    for(size_t i = 0; i < newNums; i++)
    {
        std::cout << nums[i] << std::endl;
    }
    return 0;
}