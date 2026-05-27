#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,2,11,7,15};
    int target=9;
    sort(arr , (arr + (sizeof(arr)/sizeof(arr[0]))));
    for(int i=0; i<6; i++)
     cout<<arr[i]<<" ";
     cout<<endl;
    int st=0 , end=(sizeof(arr)/sizeof(arr[0]))-1;
    while (st<end){
        if((arr[st]+arr[end]) == target){
            cout<<st<<","<<end;
           return 0;
        }
        else if((arr[st]+arr[end]) > target)
            end--;
        else 
            st++;    
    }
        cout<<-1<<","<<-1;
    return 0;
}