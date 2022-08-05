/* In this problem we need find the longest consecutive subsequence.
eg for arr[] = {8,1,2,4,6,10,3}
the longest subsequence is 1,2,3,4 */

#include<iostream>
#include<unordered_set>
using namespace std;

int conSubsequence(int arr[],int n){
    unordered_set<int> s(arr,arr+n);
    int res = 0;
    for(auto x:s){
        if(s.find(x-1) == s.end()){
            int curr = 1;
            while(s.find(x+curr)!=s.end())
                curr++;
            res = max(res,curr);
        }
    }
    return res;
}

int main(){
    int arr[] = {1,9,3,4,20,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<conSubsequence(arr,n);
    return 0;
}