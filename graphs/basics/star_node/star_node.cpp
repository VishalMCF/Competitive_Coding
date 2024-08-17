#include <bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>> edges)
{
    int n = edges.size();
    unordered_set<int> uset;

    for (int i = 0; i < n; i++)
    {
        vector<int> edge = edges[i];
        int m = edge[0];
        int n = edge[1];

        if (uset.find(m) != uset.end())
        {
            return m;
        }
        else
        {
            uset.insert(m);
        }

        if (uset.find(n) != uset.end())
        {
            return n;
        }
        else
        {
            uset.insert(n);
        }
    }
}