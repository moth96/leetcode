int numRabbits(vector<int>& answers) {
    unordered_map<int, int> table;
    for(auto x:answers){
        table[x]++;
    }
    int ret = 0;
    auto it = table.begin();
    while(it != table.end()){
        ret += ((it->second- 1) / (it->first + 1) + 1) * (it->first + 1);
        it++;
    }
    return ret;
}
