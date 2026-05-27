#include<iostream>
using namespace std;
int main(){
    int arr[]={5,2,11,7,15};
    int target=9;
    int n=5;
    for(int i=0; i<n-1 ; i++){
        for(int j=i+1; j<n ; j++){
            if(target == (arr[i]+arr[j])){
                cout<<i<<" "<<j;
                break;
        }
    }
    }    return 0;
}