void dfs(vector<vector<int>> &isConnected, vector<int> &visited, int k)
{
    if (visited[k])
        return;
    visited[k] = 1;
    for (int i = 0; i < visited.size(); i++)
    {
        if (isConnected[k][i])
            dfs(isConnected, visited, i);
    }
}

int findCircleNum(vector<vector<int>> &isConnected)
{
    int n = isConnected.size();
    if (n < 2)
        return n;
    int res = 0;
    vector<int> visited(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            res++;
            dfs(isConnected, visited, i);
        }
        else
            continue;
    }
    return res;
}