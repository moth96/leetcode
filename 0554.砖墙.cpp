int leastBricks(vector<vector<int>>& wall) {
    int len = wall.size();
    for(int i = 0; i < len; i++){
        if(wall[i].size() > 1){
            for(int j = 1; j < wall[i].size(); j++){
                wall[i][j] += wall[i][j-1];
            }}
    }
    unordered_map<int,int> table;
    for(int i = 0; i < len; i++){
        for(int j = 0; j < wall[i].size()-1; j++){
            table[wall[i][j]]++;
        }
    }
    int maxi = 0;
    for (auto x: table){
        maxi = max(maxi, x.second);
    }
    return len - maxi;
}
