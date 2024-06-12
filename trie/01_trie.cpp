#include <bits/stdc++.h>
using namespace std;

class TrieNode
{
public:
    TrieNode *childNode[26];
    bool wordEnd;
    TrieNode()
    {
        wordEnd = false;
        for (int i = 0; i < 26; i++)
        {
            childNode[i] = nullptr;
        }
    }
};
void insertString(TrieNode *root, string &word)
{
    TrieNode *currentNode = root;
    for (auto w : word)
    {
        if (currentNode->childNode[w - 'a'] == nullptr)
        {
            TrieNode *newNode = new TrieNode();
            currentNode->childNode[w - 'a'] = newNode;
        }
        currentNode = currentNode->childNode[w - 'a'];
    }
    currentNode->wordEnd = false;
}
bool searchString(TrieNode *root, string &word)
{
    TrieNode *currentNode = root;
    for (auto w : word)
    {
        if (currentNode->childNode[w - 'a'] != nullptr)
        {
            currentNode = currentNode->childNode[w - 'a'];
        }
        else
        {
            return false;
        }
    }
    return currentNode->wordEnd == true;
}
bool searchPrefix(TrieNode *root, string &word)
{
    TrieNode *currentNode = root;
    for (auto w : word)
    {
        if (currentNode->childNode[w - 'a'] != nullptr)
        {
            currentNode = currentNode->childNode[w - 'a'];
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    
    return 0;
}