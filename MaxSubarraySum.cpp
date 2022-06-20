#include<iostream>
#include<vector>
using namespace std;

int maxSubArrSum(vector<int> arr){
    int max_end = arr[0], max_so_far = arr[0];
    for(int i = 1; i<arr.size(); i++){

            max_end = max(max_end+arr[i],arr[i]);
            max_so_far = max(max_so_far,max_end);
    }
    return max_so_far;
}

int main(){
    int arr[]= {5,-1,2,5,-2,3};
    vector<int> vec(arr,arr+6);

    cout<<maxSubArrSum(vec);
    return 0;
}