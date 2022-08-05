#include<iostream>
#include<unordered_set>
using namespace std;

bool isSubarrayGivenSum(int arr[],int n,int x){
    unordered_set<int>s;
    int pre_sum = 0;
    for(int i = 0;i<n;i++){
        pre_sum +=arr[i];
        if(pre_sum == x) return true;
        if(s.find(pre_sum-x)!=s.end()){
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}

int main(){
    int arr[] = {4,3,2,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 4;
    if(isSubarrayGivenSum(arr,4,x)){
        cout<<"Subarray is present";
    }
    else{
        cout<<"Subarray not present";
    }
    return 0;
}