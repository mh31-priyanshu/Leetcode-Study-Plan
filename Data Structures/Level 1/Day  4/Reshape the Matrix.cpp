class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size()) return mat;
        int row =0;
        int column =0;

        vector<vector<int>> reshaped(r,vector<int>(c));
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                reshaped[row][column] = mat[i][j];
                column++;
                if(column==c){
                    column=0;
                    row++;
                }
            }
        }


        return reshaped;
    }
};
