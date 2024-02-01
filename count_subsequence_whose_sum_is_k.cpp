// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int f(int ind,vector<int>nums,vector<int>&ans,int sum,int target){
    if(ind==nums.size()){
        if(sum==target){
            for(auto it:ans)cout<<it<<" ";
            return 1;
        }
        cout<<endl;
        return 0;
    }
    ans.push_back(nums[ind]);
    sum=sum+nums[ind];
    int l=f(ind+1,nums,ans,sum,target);
    sum=sum-nums[ind];
    ans.pop_back();
    int r=f(ind+1,nums,ans,sum,target);
    return l+r;
    
}
int main() {
    // Write C++ code here
    vector<int>nums={1,2,1};
    vector<int>ans;
    
    int count=f(0,nums,ans,0,2);
    cout<<"your answer is "<<count;
}
