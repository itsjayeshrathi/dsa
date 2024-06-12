#include <bits/stdc++.h>
using namespace std;
vector<long long> findPrefixScore(vector<int> &nums)
{
    int n = nums.size();
    vector<int> maxArray(n);
    vector<long long> ans;
    maxArray[0] = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {

        if (nums[i] > maxArray[i - 1])
        {
            maxArray[i] = nums[i];
        }
        else
        {
            maxArray[i] = maxArray[i - 1];
        }
    }
    for (int i = 0; i < maxArray.size(); i++)
    {
        cout << maxArray[i] << " ";
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ans.push_back(nums[i] + maxArray[i]);
    }
    return ans;
}
int main()
{
    vector<int> v = {2, 3, 7, 5, 10};
    vector<long long> ans = findPrefixScore(v);
    cout << endl; 
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}