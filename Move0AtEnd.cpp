#include<iostream>
#include<vector>
using namespace std;

void move0AtEnd(vector<int> &arr){
    int count = 0;
    for(int i = 0; i<arr.size();i++){
        if(arr[i] != 0 ){
            swap(arr[i],arr[count]);
            count++;
        }
    }
    for(auto n : arr){
        cout<<n<<" ";
    }

}

int main(){
   int arr[] = { 12,10,0,0,8,0,0 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    vector<int> vect(arr, arr + n);
    move0AtEnd(vect);
    // for(auto n : vect){
    //     cout<<n<<" ";
    // }
    return 0;
}