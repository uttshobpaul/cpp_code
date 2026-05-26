#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int m = matrix.size(), n=matrix[0].size();
       int srow=0 , erow=m-1, scol=0 , ecol=n-1;
        vector<int> mat;
    while(srow<=erow && scol<=ecol){
        //top
        for(int j=scol; j<=ecol; j++){
            mat.push_back(matrix[srow][j]);
        }

        //right
        for(int i=srow+1; i<=erow; i++){
            mat.push_back(matrix[i][ecol]);
        }

        //bottom
        for(int j=ecol-1 ;j>=scol ; j--){
            if(srow==erow){
                break;
            }
            mat.push_back(matrix[erow][j]);
        }

        //lest
        for(int i=erow-1; i>=srow+1; i--){
            if(scol==ecol){
                break;
            }
            mat.push_back(matrix[i][scol]);
        }

        srow++;
        erow--;
        scol++;
        ecol--;
    }
    return mat;
    }
};

int main(){
    vector<vector<int>>matrix={{1,2,3},{4,5,6},{7,8,9}};
    Solution obj;
    vector<int>mat=obj.spiralOrder(matrix);
    for(int i=0 ; i<mat.size(); i++){
      cout<<mat[i];
    }
    return 0;
}

