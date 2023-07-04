#include <string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        int n = haystack.length();
        int m = needle.length();
        if (needle == haystack)
        {
            return 0;
        }
        if (m > n)
        {
            return -1;
        }
        int ans = -1;
        int i;
        for (i = 0; i < n - m; i++)
        {
            if (haystack.substr(i, m) == needle)
            {
                ans = i;
                break;
            }
        }
        if (haystack.substr(i, m) == needle)
        {
            ans = i;
        }
        return ans;
    }
};