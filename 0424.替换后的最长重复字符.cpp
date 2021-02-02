int characterReplacement(string s, int k) {
    int n = s.size();
    if (n < 2) return n;
    int maxCount = 0;
    int left = 0;
    int right = 0;
    vector<int> freq(26);
    while(right < n){
        freq[s[right] - 'A']++;
        maxCount = max(maxCount, freq[s[right] - 'A']);
        right++;
        if(right - left > maxCount + k){
            freq[s[left] - 'A']--;
            left++;
        }
    }
    return right -left;
