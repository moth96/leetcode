int romanToInt(string s) {
    unordered_map<char, int>table = {{'I',1}, {'V',5}, {'X',10}, {'L',50},
        {'C',100}, {'D',500}, {'M',1000}};
    int n = s.size();
    int ret = 0;
    for(int i = 0; i < n; i++){
        if(i < n - 1 && table[s[i]] < table[s[i+1]]){
            ret -= table[s[i]];
        }else{
            ret += table[s[i]];
        }
    }
    return ret;
}
