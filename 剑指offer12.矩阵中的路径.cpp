#include"solution.h"

bool dfs(vector<vector<char>>& board, string& word, int i, int j, int n)
{
	if (board[i][j] != word[n]) return false;
	if (n == word.size() - 1) return true;
	char temp = board[i][j];
	board[i][j] = '\0';
	n++;
	if ((i > 0 && dfs(board, word, i - 1, j, n)) ||
		(i < board.size() - 1 && dfs(board, word, i + 1, j, n)) ||
		(j > 0 && dfs(board, word, i, j - 1, n)) ||
		(j < board[0].size() - 1 && dfs(board, word, i, j + 1, n)))
		return true;
	board[i][j] = temp;
	return false;
}


bool exist(vector<vector<char>>& board, string word)
{
	for (int i = 0; i < board.size(); i++)
		for (int j = 0; j < board[0].size(); j++)
		{
			if (dfs(board, word, i, j, 0)) return true;
		}
	return false;
}