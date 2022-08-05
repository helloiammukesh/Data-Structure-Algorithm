/*  In this problem we will be given two binary array of equal length and we need to find the longest
span or longest subarray with equal sum in both arrays. 

eg. arr1[] = {0,1,0,1,0,0,1};
eg. arr2[] = {1,0,1,0,1,1,0};
O/P: 4(2-5)

*/

#include<iostream>
#include<unordered_map>
using namespace std;

int longestCommonSpan(int arr1[],int arr2[],int n){
    int temp[n];
    unordered_map<int,int> m;
    for(int i = 0;i<n;i++){
        temp[i] = arr1[i]-arr2[i];
    }
    int res = 0;
    int pre_sum = 0;
    for(int i = 0;i<n;i++){
        pre_sum += temp[i];
        if(pre_sum == 0){
            res = i+1;
        }
        if(m.find(pre_sum) == m.end()){
            m[pre_sum] = i;
        }
        if(m.find(pre_sum-0)!=m.end()){
            res = max(res,i-m[pre_sum]);
        }
    }
    return res;
}

int main(){
    int arr1[] = {0,0,0,0,0};
    int arr2[] = {1,1,1,1,1};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout<<longestCommonSpan(arr1,arr2,n);
    return 0;
}

