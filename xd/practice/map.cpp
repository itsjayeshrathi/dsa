#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> s;
    s["com"]++;
    s["moc"]++;
    for (auto it : s)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}