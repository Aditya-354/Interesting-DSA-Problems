// Problem:  Two-Sum
// Platform: https://leetcode.com/problems/two-sum/description/
// Approach: Hash map (store value already visited to check later on)
// Time Complexity:  O(n) -- loop only once
// Space complexity: O(n)

#include <iostream>
 // for using the dynamic array 
#include <vector>              
// This is the hash map in C++
#include <unordered_map>                 

class Solution
{
public:

    // Take a reference to a vector<int> array and a sum target
    std::vector<int> twoSum(std::vector<int> &nums, int target)
    {
         // store the size of the array in a size_t type variable
        size_t n = nums.size();              

        // create an unordered_map that links int with int
        std::unordered_map<int, int> mp;      

        // for loop to go through the array and check the values that add up to the target
        for (size_t i = 0; i < n; i++)        
        {

            // store the difference to later find in the map
            size_t diff = target - nums[i]; 

            // check if the diff is present in the map
            if (mp.find(diff) != mp.end())  

             // if true, return the index of diff with the current index
                return {mp[diff], (int)i};   


            // if false, store the current value in the map along with its index 
            mp[nums[i]] = i;   
        }

        // this returns nothing if there are no pairs that add up to the target
        return {};  
    }
};

int main()
{
    Solution s;

     // You can change the array elements
     // Expected output for this test case: [0, 1]
    std::vector<int> arr = {3, 2, 4}; 

    // This will be the target value. Can be changed based on the array elements.
    int T = 6;  

     // store the returned value in a vector<int> variable
    std::vector<int> result = s.twoSum(arr, T);  

    if (!result.empty())      

     // if the function successfully returns something, print the two indices
        std::cout << "[" << result[0] << ", " << result[1] << "]" << std::endl;   

    else

        // print this if returns nothing
        std::cout << "No solution found" << std::endl;         
    return 0;
}