#include<iostream>
#include<unordered_map>
using namespace std;

void moreThannkOccur(int arr[],int n,int k){
    unordered_map<int,int>m;
    for(int i = 0;i<n;i++){
        if(m.find(arr[i])!=m.end()){
            m[arr[i]]++;
        }
        else if(m.size()<=k-1){
            m[arr[i]] = 1;
        }
        else{
            for(auto x:m){
                x.second--;
                if(x.second == 0){
                    m.erase(x.first);
                }
            }
        }
    }
    for(auto x:m){
        int count = 0;
        for(int i = 0;i<n;i++){
            if(arr[i] == x.first){
                count++;
            }
        }
        if(count>n/k){
            cout<<x.first<<" ";
        }
    }

}

int main(){
    int arr[] = {30, 10, 20, 20, 20, 10, 40, 30, 30};
   
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=4;
    moreThannkOccur(arr,n,k);
    return 0;
}