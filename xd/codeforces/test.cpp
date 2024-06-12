#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        s[i] = 'a' + abs((s[i] % 97) - 25);
    }
    cout << s << endl;
    return 0;
}