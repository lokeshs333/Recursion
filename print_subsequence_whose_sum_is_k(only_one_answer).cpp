// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool f(int ind,vector<int>nums,vector<int>&ans,int sum,int target){
    if(ind==nums.size()){
        if(sum==target){
            for(auto it:ans)cout<<it<<" ";
            return true;
        }
        cout<<endl;
        return false;
    }
    ans.push_back(nums[ind]);
    sum=sum+nums[ind];
    if(f(ind+1,nums,ans,sum,target)==true)return true;
    sum=sum-nums[ind];
    ans.pop_back();
    if(f(ind+1,nums,ans,sum,target)==true)return true;
    return false;
    
}
int main() {
    // Write C++ code here
    vector<int>nums={1,2,1};
    vector<int>ans;
    
    f(0,nums,ans,0,2);
}
