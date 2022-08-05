#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int distinctCount(vector<int> &v){
    unordered_set<int> s(v.begin(),v.end());
    return s.size();
}

int main(){
    int arr[] = {1,2,4,1,3,2,5};
    vector<int> v(arr,arr+7);
    cout<<distinctCount(v);
    return 0;
}