vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> mp;
    for (auto& str : strs){
        string key = str;
        sort(key.begin(), key.end());
        mp[key].emplace_back(str);
    }
    vector<vector<string>> ret;
    for (auto it = mp.begin(); it != mp.end(); it++){
        ret.emplace_back(it->second);
    }
    return ret;
}
