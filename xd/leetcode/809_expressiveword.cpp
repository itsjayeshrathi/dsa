#include <bits/stdc++.h>
using namespace std;

int expressiveWords(string s, vector<string> &words)
{
    int count = 0;
    int m = s.size();
    for (int i = 0; i < words.size(); i++)
    {
        string word = words[i];
        int n = word.size();
        int j = 0, k = 0;
        string temp = "";
        while (j < m && k < n)
        {
            if (s[j] == word[k])
            {
                temp += word[k];
                j++;
                k++;
            }
            else
            {
                j++;
            }
        }
        cout << temp << " "; 
        if (temp == word)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string s = "heeellooo";
    vector<string> words = {"hello", "hi", "helo"};
    cout << expressiveWords(s, words);
    return 0;
}