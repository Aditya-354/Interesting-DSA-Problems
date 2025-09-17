#include <iostream>
#include <vector>  


class Solution
{
public:
    int missingNum(std::vector<int> &arr)
    {
        // code here
        int n = arr.size() + 1;
        int total = n * (n + 1) / 2;
        int sum = 0;

        for (int num : arr)    // For each element in array 'arr', copy the value in num and run the loop body
        {
           sum += num;
        }
        return total - sum;
    }
};


int main()
{
    Solution num;
    std::vector<int> arr = {1, 2, 3, 5};
    int missing = num.missingNum(arr);
    std::cout << missing << std::endl;
    return 0;
}