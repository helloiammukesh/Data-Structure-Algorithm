#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
    int firstRepeated(int arr[], int n) {
        int vis[1000];
        fill(vis,vis+1000,-1);
        int res = INT_MAX;
        for(int i = 0;i<n;i++){
            if(vis[arr[i]]==-1){
                vis[arr[i]] = i;
            }
            else{
                res = min(res,vis[arr[i]]);
                cout<<arr[i]<<" ";
            }
        }
        return res;
    }

int main(){
    int arr[] = {1, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<firstRepeated(arr,n);
    return 0;

}