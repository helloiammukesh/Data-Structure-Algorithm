#include<iostream>
#include<vector>
using namespace std;

int Long_Even_Odd(vector<int> arr){
    int count= 1,res = 1;

    for(int i = 1; i<arr.size(); i++){
        if(arr[i]%2==0 && arr[i-1]%2!=0 || arr[i]%2 !=0 && arr[i-1]%2 == 0){
            count++;
        }
        else{
            res = max(res,count);
            count = 1;
        }
    }
    return res;
}
int main(){
    int arr[] ={1,4,3,6,2,3,4};
    vector<int> vec(arr,arr+7);
    cout<<Long_Even_Odd(vec);
    return 0;
}
