#include<iostream>
#include<vector>
using namespace std;

int secLargest(vector<int> arr){
    int largest = 0, res = INT_MIN;
    for(int i = 1; i<arr.size();i++){
        if(arr[i]>arr[largest]){
            res = largest;
            largest = i;
        }
        else if(arr[i] != arr[largest]){
            if(res == INT_MIN || arr[i]>arr[res]){
                res = i;
            }
    
        }
    }
    return res;
}

int main(){
   int arr[] = { 10,10,10 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    vector<int> vect(arr, arr + n);
    cout<<secLargest(vect);
    return 0;
}