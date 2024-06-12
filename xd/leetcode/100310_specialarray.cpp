#include <bits/stdc++.h>
using namespace std;
vector<bool> isArraySpecial(vector<int> &nums, vector<vector<int>> &queries)
{
    vector<bool> isSpecial, ans;
    vector<int> prefix;
    for (int i = 1; i < nums.size(); i++)
    {
        isSpecial.push_back(nums[i - 1] % 2 == nums[i] % 2);
    }
    for (int i = 0; i < isSpecial.size(); i++){
        if(i == 0){
            prefix[i] = isSpecial[i];
        }else{
            prefix[i] = isSpecial[i - 1] + isSpecial[i]; 
        }
    }
    for(auto q: queries){
        if(prefix[q[1]] - prefix[q[0]] > 0){
            ans.push_back(false); 
        }else{
            ans.push_back(true); 
        }
    }
    return ans; 
}
int main()
{
    vector<int> v = {13, 23,12};
    return 0;
}