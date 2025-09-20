#include<iostream>
#include<vector>
#include<climits>

class Solution
{
    public:
    int getSecondLargest(std::vector<int>& arr)
    {
        if(arr.size() < 2) return -1;

        int firstMax = INT_MIN;
        int secondMax = INT_MIN;

        for(int num : arr)
        {
            if(num > firstMax)
            {
                secondMax = firstMax;
                firstMax = num;
            }
            else if(num > secondMax && num < firstMax)
            {
                secondMax = num;
            }
        }
        return (secondMax == INT_MIN ? -1 : secondMax);
    }
};

int main()
{
    Solution s;
    std::vector<int> arr = {4, 9, 10, 8, 14, 6};
    int secondL = s.getSecondLargest(arr);
    std::cout << secondL << std::endl;
}