#include <bits/stdc++.h>
using namespace std;
vector<string> subdomainVisits(vector<string> &cpdomains)
{
    vector<string> result;
    unordered_map<string, int> countPairs;
    for (auto s : cpdomains)
    {
        int count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                break;
            count = count * 10 + (s[i] - '0');
        }
        string subDomain = "";
        for (int j = s.size() - 1; j >= 0; j--)
        {
            if (s[j] == ' ')
            {
                cout << subDomain << endl; 
                countPairs[subDomain] += count;
                break;
            }
            else if (s[j] == '.')
            {
                cout << subDomain << endl; 
                countPairs[subDomain] += count;
                subDomain = s[j] + subDomain;
            }
            else
                subDomain = s[j] + subDomain;
            cout << subDomain << endl; 
        }
    }
    for (auto it : countPairs)
    {
        result.push_back(to_string(it.second) + " " + it.first);
    }
    return result;
}
int main()
{
    vector<string> s = {"9001 discuss.leetcode.com"};
    vector<string> res = subdomainVisits(s); 
    for(auto r: res){
        cout << r << " " << endl; 
    }
    return 0;
}