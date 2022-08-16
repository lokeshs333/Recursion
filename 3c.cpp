//reverse the array using recursion
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int l,int r){
    if(l>=r){
        return;
    }
    swap(arr[l++],arr[r--]);
    reverse(arr,l,r);
    
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    reverse(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
