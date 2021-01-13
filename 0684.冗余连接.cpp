int Find(vector<int>& parents, int index)
{
    if (parents[index] != index)
    {
        parents[index] = Find(parents, parents[index]);
    }
    return parents[index];
}

void Union(vector<int>& parents, int index1, int index2)
{
    parents[Find(parents, index1)] = Find(parents, index2); 
}

vector<int> findRedundantConnection(vector<vector<int>>& edges) 
{
    int n = edges.size();
    vector<int> parents(n+1,0);
    for (int i = 1; i < n+1; i++) parents[i] = i;
    for (auto edge : edges)
    {
        int a = edge[0]; int b = edge[1];
        if (Find(parents, a) != Find(parents, b))
        {
            Union(parents, a, b);
        }
        else return edge;
    }
    return {};
}
