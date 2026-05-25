// search in a 2D array
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            if(target > matrix[i][matrix[i].size()-1] )
                continue;
            else if(target <= matrix[i][matrix[i].size() - 1] ){
                for(int j=0; j<matrix[i].size() ; j++){
                    if(target == matrix[i][j])
                        return true;
                }
                break;
            }    
        }
        return false;
    }
};

int main(){
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target=34;
    Solution obj;
    bool a=obj.searchMatrix(matrix,target);
    cout<<a<<endl;
    return 0;
}