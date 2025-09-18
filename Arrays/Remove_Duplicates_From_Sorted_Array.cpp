#include<iostream>
#include<vector>

class Solution
{
 public:
    int removeDuplicates(std::vector<int>& nums)
    {
        int i = 0;
        for(size_t j = 1; j < nums.size(); j++)
        {
            if(nums[j] != nums[i])
            {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

int main()
{
    Solution s;
    std::vector<int> nums = {1, 1, 2};
    std::vector<int> expectednums = {1, 2};

    int k = s.removeDuplicates(nums);

    if(k == expectednums.size())
    {
        for(size_t i = 0; i < k; i++)
        {
            std::cout << nums[i] << std::endl;
        }
    }
    return 0;
}