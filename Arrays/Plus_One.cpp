#include<iostream>
#include<vector>

class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int carry = 1;

        for(int i = digits.size() - 1; i >= 0; i--)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;

        }
        if(carry > 0)
        {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};

int main()
{
    Solution s;
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> newDigits = s.plusOne(digits);

    for(int d : digits)
    {
        std::cout << d << ", " ;
    }
}