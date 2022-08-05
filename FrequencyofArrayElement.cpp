#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void countFreq(vector<int> &v){
    unordered_map<int,int> m;
    for(int i = 0;i<v.size();i++){
        m[v[i]]++;
    }
    for(auto x : m){
        cout<<x.first<<" "<<x.second;
        cout<<endl;
    }
}
int main(){
    int arr[]={12,11,42,11,52,11,52,12,32};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    countFreq(v);
    return 0;
}