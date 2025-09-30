#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
    public:
    vector<int> leaders(vector<int>& arr)
    {
        vector<int> res;
        int n = arr.size();
        int max_so_far = arr[n - 1];
        res.push_back(max_so_far);

        for(int i = n - 2; i >= 0; i--)
        {
            if(arr[i] >= max_so_far)
            {
                res.push_back(arr[i]);
                max_so_far = arr[i];
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};

int main()
{
    Solution s;
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    vector<int> result = s.leaders(arr);

    for(int i : result)
    {
        cout << i << " " ;
    }
}