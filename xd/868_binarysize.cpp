#include <bits/stdc++.h>
using namespace std;
int binaryGap(int n)
{
    vector<int> oneP;
    int i = 0;
    while (n)
    {
        int mask = n >> 1;
        if (mask & 1)
        {
            cout << 1 << " "; 
            oneP.push_back(i);
        }else{
            cout << 0 << " "; 
        }
        i++;
        
    }
    cout << endl; 
    if (oneP.size() == 0 || oneP.size() == 1)
    {
        return 0;
    }
    for(auto i: oneP){
        cout << i << " "; 
    }
    cout << endl; 
    return oneP[oneP.size() - 1] - oneP[0];
}
int main()
{
    int n = 22;
    cout << binaryGap(n) << endl; 
    return 0;
}