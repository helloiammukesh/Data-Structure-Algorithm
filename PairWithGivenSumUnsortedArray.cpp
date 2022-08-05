#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

bool pairGivenSum(vector<int>&v,int x){
    unordered_set<int>s;
    for(int i = 0;i<v.size();i++){
        if(s.find(x-v[i])!=s.end()){
            return true;
        }
        else{
            s.insert(v[i]);
        }
    }
    return false;
}

int main(){
    int arr[]={5,2,4,-1,7};
    vector<int>v(arr,arr+5);
    int x = 5;
    if(pairGivenSum(v,x)){
        cout<<"Pair is present";
    }
    else{
        cout<<"Not present";
    }
    return 0;
}
