#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int Intersection(vector<int>&v1,vector<int>&v2){
    unordered_set<int> s(v1.begin(),v1.end());
    int count = 0;
    for(int i = 0;i<v2.size();i++){
        if(s.find(v2[i])!=s.end()){
            count++;
            s.erase(v2[i]);
        }
    }
    return count;

}

int main(){
    int arr1[] = {12,24,25,10,15,12};
    int arr2[] = {10,27,12,10,25,90,10};
    vector<int> v1(arr1,arr1+6);
    vector<int> v2(arr2,arr2+7);
    cout<<Intersection(v1,v2);
    return 0;
}
