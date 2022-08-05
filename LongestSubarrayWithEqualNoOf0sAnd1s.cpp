#include<iostream>
#include<unordered_map>
using namespace std;

int longest0sAnd1s(int arr[],int n){
    const int sum = 0;
    int pre_sum = 0;
    int res = 0;
    unordered_map<int,int> m;
    for(int i = 0;i<n;i++){
        arr[i] = (arr[i]==0)?-1:1;
    }
    for(int i = 0;i<n;i++){
        pre_sum += arr[i];
        if(pre_sum == sum){
            res = i+1;
        }
        if(m.find(pre_sum) == m.end()){
            m[pre_sum] = i;
        }
        if(m.find(pre_sum-sum)!=m.end()){
            res = max(res,i-m[pre_sum-sum]);
            cout<<res<<" ";
        }
    }
    return res;
}

int main(){
    int arr[] = {1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<longest0sAnd1s(arr,n);
    return 0;
}