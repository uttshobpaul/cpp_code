#include<iostream>
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
       int idx=0;
       for(int i=0; i<chars.size(); i++){
        char ch=chars[i];
        int count=0;
        while(i<chars.size()  &&  chars[i]==ch ){
            count++;
            i++;
        }
        if(count==1){
            chars[idx++]=ch;
        }else{
            chars[idx++]=ch;
            string c=to_string(count);
            for(char i:c){
                chars[idx++]=i;
            }
        }
        i--;
       } 
       return idx;
    }
};


int main(){
    vector<char> chars={'a','c','c','d','f','s','q','c','c','c','c','c','c','c','c','c','c'};
    Solution obj;
    int ans = obj.compress(chars); 
    cout<<"compressed length : "<<ans<<endl;
    cout<<"compressed array : ";
    for(int i =0; i<ans; i++){
        cout<<chars[i]<<" ";
    }
    cout<<"\nnice to do work";
    return 0;
}