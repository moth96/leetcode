#include"solution.h"

vector<vector<int>> nums;
vector<int> visited;
bool res = true;

void dfs(int u)
{
	visited[u] = 1;
	for (int v : nums[u])
	{
		if (visited[v] == 0)
		{
			dfs(v);
		}
		else if (visited[v] == 1)
		{
			res = false;
			return;
		}
	}
	visited[u] = 2;
}

bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
{
	nums.resize(numCourses);
	visited.resize(numCourses);
	for (const auto& i : prerequisites)
	{
		nums[i[1]].push_back(i[0]);
	}
	for (int i = 0; i < numCourses && res; i++)
	{
		if (!visited[i])
		{
			dfs(i);
		}
	}
	return res;
}