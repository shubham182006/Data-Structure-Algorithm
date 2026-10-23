class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row = matrix.size();
       int col = matrix[0].size();
       int total = row*col;
       int s = 0 ;
       int  e = total-1;

       while(s<=e){
        int mid = (s+e)/2;
        int rowIndex = mid/col;
        int colIndex = mid%col;

        if (matrix[rowIndex][colIndex]==target){
            return true;
        }
        if(matrix[rowIndex][colIndex]>target){
            //left 
            e = mid-1;
        }
        else{
            //right 
            s = mid+1;
        }

       }
       return false;
    }
};