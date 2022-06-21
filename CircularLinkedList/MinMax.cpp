#include<iostream>
#include<vector>
using namespace std;

int minMaxGame(vector<int> &nums){
    int N = nums.size()/2;
    if(N == 1){
        return nums[0];
    }
    
    vector<int> newNums;
    for(int i = 0; i<N;i++){
        if(i%2 == 0){
            newNums[i] = min(nums[2*i],nums[2*i+1]);
        }
        else{
            newNums[i] = max(nums[2*i],nums[2*i+1]);
        }
    }
    int res = minMaxGame(newNums);
    return res;
}

int main(){
    vector<int> vect;
    vect.push_back(1);
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(2);
    vect.push_back(4);
    vect.push_back(8);
    vect.push_back(2);
    vect.push_back(2);

    cout<<minMaxGame(vect);
    return 0;
}