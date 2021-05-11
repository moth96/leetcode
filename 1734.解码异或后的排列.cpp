vector<int> decode(vector<int>& encoded) {
    int n = encoded.size() + 1;
    int t = 0;
    for (int i = 1; i <= n; i++){
        t ^= i;
    }
    int odd = 0;
    for (int i = 1; i < n - 1; i += 2){
        odd ^= encoded[i];
    }
    vector<int> perm(n);
    perm[0] = odd ^ t;
    for(int i = 1; i < n; i++){
        perm[i] = perm[i-1] ^ encoded[i-1];
    }
    return perm;
}
