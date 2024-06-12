#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    int maxLength = 0;
    int n = 0;
    set<char> ss;
    for (int i = 0; i < s.size(); i++)
    {
        ss.insert(s[i]);
        n = ss.size();
        maxLength = max(maxLength, n);
        for (int j = i + 1; j < s.size(); j++)
        {
            ss.insert(s[j]);
            n = ss.size();
            if (n > maxLength)
            {
                maxLength = n;
            }
            else
            {
                break;
            }
        }
        ss.clear();
    }
    return maxLength;
}
int main()
{
    string s = "pwwkew";
    cout << lengthOfLongestSubstring(s) << endl; 

    return 0;
}