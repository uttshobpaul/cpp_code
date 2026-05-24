#include<iostream>
using namespace std;
int main(){
 int mat[2][2];
 for(int i=0;i<2;i++){
    for(int j=0; j<2;j++){
        cin>>mat[i][j];
    }
 }
cout<<endl;
 for(int i=0;i<2;i++){
    for(int j=0; j<2;j++){
        cout<<mat[i][j]<<"\t";
    }cout<<endl;
 }
 return 0;
}