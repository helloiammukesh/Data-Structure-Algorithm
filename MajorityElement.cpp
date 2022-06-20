#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int> arr){
    int votes = 0, candidate = -1;
    for(int i = 0; i<arr.size(); i++){
        if(votes == 0){
            candidate = arr[i];
            votes = 1;
        }
        else{
            if(arr[i] == candidate){
                votes++;
            }
            else{
                votes--;
            }
        }
    }

    int count = 0; 

    for(int i = 0; i<arr.size(); i++){
        if(arr[i]==candidate){
            count++;
        }
    }
    if(count > arr.size()/2){
        return candidate;
    }
    return -1;
}
int main(){
    int arr[] = {8,8,6,6,4,8,8};
    vector<int> vec(arr,arr+7);

    // for(int i = 0; i<vec.size();i++){
    //     cout<<vec[i];
    // }

    cout<<majorityElement(vec);
    return 0;
}