#include"solution.h"

vector<int> partitionLabels(string S)
{
    vector<int> res;
    unordered_map<char, int> umap; 
    int start = 0, end = 0;
    for (int i = 0; i < S.size(); i++)  umap[S[i]] = i;
    for (int i = 0; i < S.size(); i++) 
    {
        end = max(end, umap[S[i]]);
        if (i == end) {
            res.push_back(end - start + 1);
            start = i + 1;
        }
    }
    return res;
}