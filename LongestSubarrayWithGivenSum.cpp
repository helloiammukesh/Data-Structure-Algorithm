#include<iostream>
#include<unordered_set>
#include<unordered_map>
using namespace std;

// int LongestSubArraySum(int arr[], int n,int sum){
//     int res = 0;
//     int curr = 0;
//     for(int i = 0;i<n;i++){
//         int pre_sum = 0;
//         for(int j = i;j<n;j++){
//             pre_sum = arr[j];
//             if(arr[i]+pre_sum == sum){
//                 curr = j-i+1;
//                 res = max(res,curr);
//             }
//         }
//     }
//     return res;
// }

int LongestSubArraySum(int arr[],int n, int sum){
    int pre_sum = 0;
    int res = 0;
    unordered_map<int,int> m;
    for(int i = 0;i<n;i++){
        pre_sum += arr[i];
        if(pre_sum == sum){
            res = i+1;
        }
        if(m.find(pre_sum) == m.end()){
            m[pre_sum] = i;
        }
        if(m.find(pre_sum-sum) != m.end()){
            res = max(res,i-m[pre_sum-sum]);
        }
    }
    return res;
}

int main(){
    int arr[] = {5,8,-4,-4,9,2,-2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<LongestSubArraySum(arr,n,0);
    return 0;
}