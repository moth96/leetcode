bool checkStraightLine(vector<vector<int>>& coordinates) {
    int n = coordinates.size();
    if (n < 3) return true;
    for (int i = 1; i < n; i++)
    {
        if ((coordinates[i][0] - coordinates[i-1][0]) 
                * (coordinates[n-1][1] - coordinates[0][1]) != 
                (coordinates[i][1] - coordinates[i-1][1]) 
                * (coordinates[n-1][0] - coordinates[0][0]))
            return false;
    }
    return true;
}
