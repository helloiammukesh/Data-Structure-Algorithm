#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int unionUnsorted(vector<int>&v1,vector<int>&v2){
    unordered_set<int>s(v1.begin(),v1.end());
    for(int i = 0;i<v2.size();i++){
        s.insert(v2[i]);
    }
    for(auto x:s){
        cout<<x<<" ";
    }
    cout<<"\n";
    return s.size();
}
int main(){
    int arr[] = {1,2,3,4,4,5,6};
    int arr2[] = {4,4,5,6,3,7,8};
    vector<int>v1(arr,arr+7);
    vector<int>v2(arr2,arr2+7);
    cout<<unionUnsorted(v1,v2);
    return 0;
}