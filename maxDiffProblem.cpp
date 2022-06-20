/*
to print the max diff of an array  arr[j] - arr[i] such that j>i
i/p: 2, 4, 1, 5, 6, 4;
o/p: 5(diff of 6 and 1);

*/

/*

Approach:  Firstly, we calculate the diff of arr[1]- arr[0] and intialize the minval wih arr[0]
            and then for every element from 1th position we calucate the max of res and arr[i]-minval
*/

#include<iostream>
#include<vector>

using namespace std;

int maxDiff(vector<int> v){
    int mini = v[0];
    int res = v[1] - v[0];

    for(int i = 1; i<v.size();i++){
        res = max(res,(v[i]-mini));
        mini = min(mini,v[i]);

    }
    return res;
}

// int maxDiff(vector<int> arr, int n)
// {
// 	int res = arr[1] - arr[0], minVal = arr[0];

// 	for(int i = 1; i < n; i++)
// 	{
		
// 			res = max(res, arr[i] - minVal);
			
// 			minVal = min(minVal, arr[i]);
// 	}

// 	return res;
// }

int main(){
    vector<int> arr;
    int n,temp;
    cin>>n;
    for(int i = 0 ;i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<maxDiff(arr)<<"\n";
    return 0;
    
}