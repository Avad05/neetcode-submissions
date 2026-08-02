class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int rows = matrix.size();
        while(i <= rows - 1){
            int l = 0;
            int r = matrix[i].size() - 1;
            if(target <= matrix[i][r] && target >= matrix[i][l]){
                
                while(l<=r){
                    int mid = floor((l+r)/2);
                    if(matrix[i][mid] == target){
                        return true;
                    }else if(target < matrix[i][mid]){
                        r = mid -1;
                    }else{
                        l = mid + 1;
                    }
                }
                return false;

            }else{
                i++;
            }
              
        }
        return false;
    }
};
