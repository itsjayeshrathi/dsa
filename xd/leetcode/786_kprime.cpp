#include <bits/stdc++.h>
using namespace std;
vector<int> kthSmallestPrimeFraction(vector<int> &arr, int k)
{
    // brute force trying all combinations;
    map<float, pair<int, int>> mp;
    int x = 1;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            pair<int, int> p(arr[i], arr[j]);
            cout << p.first << " " << p.second << endl; 
            float fraction = (float)arr[i] / (float)arr[j];
            cout << fraction << endl; 
            mp[fraction] = p;
        }
    }
    cout << mp.size() << endl;
    for (auto i : mp)
    {
        pair<int, int> p = i.second;
        if (k == x)
        {
            ans.push_back(p.first);
            ans.push_back(p.second);
            break;
        }
        x++;
    }
    return ans;
}
int main()
{
    vector<int> v = {1, 17, 109, 211, 239, 401, 523, 641, 661, 937, 1171, 1451, 1493, 1523, 1637, 1979, 2081, 2393, 2423, 2473, 2767, 2801, 2843, 2851, 2999, 3083, 3253, 3329, 3463, 3467, 3761, 3797, 3881, 3931, 4007, 4159, 4243, 4261, 4363, 4447, 4513, 4517, 4651, 4909, 4933, 4943, 5081, 5119, 5279, 5443, 5689, 5711, 5717, 5743, 5861, 5939, 5981, 6011, 6199, 6317, 6469, 6977, 7129, 7283, 7681, 7703, 7727, 7823, 7907, 7963, 8011, 8243, 8573, 8707, 9043, 9157, 9181, 9511, 9923, 9949, 10099, 10321, 10589, 10853, 10903, 11057, 11549, 11831, 11927, 12007, 12119, 12263, 12373, 12497, 12841, 12953, 13003, 13009, 13033, 13093, 13469, 14149, 14197, 14221, 14249, 14293, 14461, 14519, 14551, 14747, 14867, 15187, 15263, 15619, 15749, 15889, 16127, 16349, 16561, 16747, 16829, 16927, 16979, 17191, 17599, 17747, 17903, 17929, 17957, 18311, 18451, 18481, 18679, 19069, 19259, 19309, 19421, 19441, 19553, 19583, 19699, 19819, 20089, 20173, 20441, 20593, 20939, 21023, 21169, 21313, 21397, 21683, 21841, 22031, 22073, 22129, 22291, 22397, 22501, 22717, 22937, 23011, 23021, 23081, 23431, 23497, 23687, 23689, 23857, 23879, 24029, 24469, 24659, 24671, 25127, 25423, 25447, 25759, 25841, 26029, 26161, 26297, 26479, 26641, 26687, 26699, 26777, 27043, 27073, 27271, 27827, 28547, 28621, 28771, 29399, 29473, 29501, 29573, 29633, 29851};
    int k = 3;
    vector<int> ans = kthSmallestPrimeFraction(v, k);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}