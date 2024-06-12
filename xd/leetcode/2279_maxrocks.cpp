#include <bits/stdc++.h>
using namespace std;
// int maximumBags(vector<int> &capacity, vector<int> &rocks,
//                 int additionalRocks)
// {
//     sort(capacity.begin(), capacity.end());
//     sort(rocks.begin(), rocks.end());
//     int maxCount = 0;
//     for (int i = 0; i < capacity.size(); i++)
//     {
//         // this is the wrong case here
//         if (additionalRocks > 0)
//         {
//             int diff = abs(capacity[i] - rocks[i]);
//             additionalRocks -= diff;
//             maxCount++;
//         }33333333333333
//     }
//     return maxCount;
// }
int maxNumberOfApartments(vector<int>&apartments,vector<int>&applicants,int difference){
    int size = apartments.size(); 
    sort(apartments.begin(), apartments.end());
    sort(applicants.begin(), applicants.end()); 
    vector<int>differences(size); 
    for(int i = 0; i<size; i++){
        difference[i] = apartments[i] - applications[i]; 
    }
}
int main()
{

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> apartments(n);
    vector<int> applicants(m);
    cout << maxNumberOfApartments(apartments, applicants, k); 
    return 0;
}