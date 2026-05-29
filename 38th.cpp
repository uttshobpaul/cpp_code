//twoSum using hasmaping(uses unordered map)
#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int , int> m ;
    vector<int> ans;

    for(int i=0; i<nums.size(); i++){
        int first=nums[i];
        int second = target - first;

        if(m.find(second) != m.end() ){
            ans.push_back(m[second]);
            ans.push_back(i);
            
            break;
        }
        m[first]=i;
    }
    return ans;
    }
};

int main(){
    vector<int> arr={5,2,13,7,11,15};
    int target=9;
    Solution obj;
    vector<int> ans=obj.twoSum(arr,target);
    cout<<endl;
    cout<<ans[0]<<","<<ans[1];
    cout<<endl;
    return 0;
}