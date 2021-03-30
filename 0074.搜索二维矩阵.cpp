bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int left = 0, right = m * n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        int x = matrix[mid/n][mid%n];
        if (x < target){
            left = mid + 1;
        }else if (x > target){
            right = mid - 1;
        }else{
            return true;
        }
    }
    return false;
}
