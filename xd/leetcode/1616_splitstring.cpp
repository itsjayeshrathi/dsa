#include <bits/stdc++.h>
using namespace std;
bool checkPalindromeFormation(string a, string b)
{
    int m = a.length();
    int n = b.length();
    if (m == 1 || n == 1)
    {
        return true;
    }
    int i = 0, j = n - 1;
    while (i < m && j >= 0)
    {
        if (a[i] == b[j])
        {
            i++;
            j--;
        }
        else
        {
            break;
        }
    }
    if (j == 0)
    {
        return true;
    }
    int k = 0, l = m - 1;
    while (k < n && l >= 0)
    {
        if (b[k] == a[l])
        {
            k++;
            l--;
        }
        else
        {
            break;
        }
    }
    cout << i << " " << j << endl;
    if ((i > 0 && k > 0) && (i == j && k == l))
    {
        return true;
    }
    if (i > 0 && i == j)
    {
        return true;
    }
    if (k > 0 && k == l)
    {
        return true;
    }
    return false;
}
int main()
{
    string a = "ulacfd", b = "jizalu";
    cout << checkPalindromeFormation(a, b); 
    return 0;
}