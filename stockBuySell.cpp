 #include<iostream>
 #include<vector>
 using namespace std;

 /*
 In this problem we have to look for the maximum
 profit we can get for the given set of stocks.

 eg: [1,5,2,4,6]
 profit is 5-1 + 4 - 2 + 6 - 4 = 8

 Approach: In this problem we start the traversal from 1th index 
 and check if i-1 th index is smaller from ith index.

 */

 int stockBuySell(vector<int> arr ){
    int profit = 0;
    for(int i = 1;i<arr.size(); i++){
        if(arr[i]>arr[i-1]){
            profit = profit + (arr[i] - arr[i-1]);
        }
    }

    return profit;

 }

 int main(){
    
    int n,temp;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        //arr.push_back(temp);
    }
    cout<<stockBuySell(arr);
    return 0;

 }