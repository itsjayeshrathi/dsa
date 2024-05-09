#include <bits/stdc++.h>
using namespace std;
long long maximumHappinessSum(vector<int> &happiness, int k)
{
    long long maxHappy = 0;
    int i = 1, j = k;
    priority_queue<int> pq;
    for (auto i : happiness)
    {
        pq.push(i);
    }
    while (k != 0)
    {
        int topEle = pq.top();
        if (k == j)
        {
            cout << "taking first ele" << endl;
            cout << topEle << endl;
            maxHappy += topEle;
        }
        else
        {
            topEle -= i;
            if (topEle <= 0)
            {
                cout << "here 0" << endl;
                maxHappy += 0;
            }
            else
            {
                cout << "here" << endl;
                cout << topEle << endl;
                maxHappy += topEle;
            }
            i++;
        }
        pq.pop();
        k--;
    }
    return maxHappy;
}
int main()
{
    vector<int> v = {1, 2, 3};
    int k = 2;
    long long ans = maximumHappinessSum(v, k);
    cout << ans << endl;
    return 0;
}