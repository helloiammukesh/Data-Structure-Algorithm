#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

bool subArrayWithGivenSum(vector<int>&v){
    unordered_set<int>s;
    int pre_sum = 0;
    for(int i = 0;i<v.size();i++){
        pre_sum += v[i];
        if(s.find(pre_sum)!=s.end()){
            return true;
        }
        if(pre_sum == 0){
            return true;
        }
        s.insert(pre_sum);
    }
    return false;
}
int main(){
    int arr[] = {4,-3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    if(subArrayWithGivenSum(v)){
        cout<<"Subarray is present";
    }
    else{
        cout<<"Subarray not present";
    }
    return 0;
}