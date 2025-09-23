#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int h_size = haystack.size();
        int n_size = needle.size();

        if(n_size == 0) return -1;

        for(int i = 0; i <= h_size - n_size; i++)
        {
            int j = 0;

            while(j < n_size && haystack[i+j] == needle[j]) 
            {
                j++;  
            }
            if(j == n_size)
            return i;
        }
        return -1;
    }
};

int main()
{
    Solution s;
    string haystack = "leetcacode";
    string needle = "leeto";

    int index = s.strStr(haystack, needle);
    cout << index << endl;

    return 0;
}