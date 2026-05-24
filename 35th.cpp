#include<iostream>
#include<climits>
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

 cout<<endl;
 int maximum = INT_MIN;
 for(int i=0;i<2;i++){
    int sum=0;
    for(int j=0; j<2;j++){
     sum += mat[i][j];   
    }
    if(sum>=maximum)
        maximum=sum;
 }
 cout<<maximum;
 return 0;
}