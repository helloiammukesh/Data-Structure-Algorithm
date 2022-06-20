#include<iostream>
#include<vector>

using namespace std;

void reverse(vector<int> &arr,int low,int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

void LeftRotate(vector<int> &arr, int d){
    reverse(arr,0,d-1);
    reverse(arr,d,arr.size()-1);
    reverse(arr,0,arr.size()-1);
}

int main(){
   int arr[] = { 1,2,3,4,5 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    vector<int> vect(arr, arr + n);
LeftRotate(vect,2);
for(auto n: vect){
    cout<<n<<" ";
}
    return 0;
}