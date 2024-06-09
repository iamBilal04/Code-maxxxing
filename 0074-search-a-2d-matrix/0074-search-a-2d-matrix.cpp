class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //intial last element row ahh checking method
        int nRows = matrix.size();
        int column = matrix[0].size() - 1;
        int row = 0;
        int currIndex;

        while(row < nRows && column > -1){
            currIndex = matrix[row][column];
            if(currIndex == target) return true;
            if(currIndex > target) column--;
            else row++;
        }

        // vector<int>bufferMat;
        // int lastRowIndex = matrix[0].size() - 1;
        // for(int i = 0; i <= matrix.size() - 1; i++){
        //     bufferMat.push_back(matrix[i][lastRowIndex]);
        //     // cout << matrix[i][lastRowIndex];
        // }

        // int high = bufferMat.size() - 1;
        // int low = 0;

        // while(low < high){
        //     int mid = low + (high - low) / 2;
        //     if(bufferMat[mid] <= target)  
        // }

        // for(auto c: bufferMat)
        //     cout << c;
        return false;
    }
};