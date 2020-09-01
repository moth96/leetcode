#include"solution.h"

vector<int> vis;
int num;

void dfs(vector<vector<int>>& rooms,int x)
{
	vis[x] = true;
	num++;
	for (auto &i : rooms[x])
	{
		if (!vis[i])
			dfs(rooms, i);
	}
}

bool canVisitAllRooms(vector<vector<int>>& rooms)
{
	int n = rooms.size();
	num = 0;
	vis.resize(n);
	dfs(rooms, 0);
	return num == n;
}
