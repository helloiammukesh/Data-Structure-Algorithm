// C++ program to find maximum amount of water that can
// be trapped within given set of bars.
// Space Complexity : O(1)

#include <iostream>
using namespace std;

int findWater(int arr[], int n)
{
	int result = 0;
	int lo = 0, hi = n-1;
	int lt_max = 0 , rt_max = 0;
	
	while(lo<=hi){
		if(arr[lo]<arr[hi]){
			if(arr[lo]<=lt_max){
				result+=lt_max-arr[lo];
				lo++;
			}
			else{
				lt_max=arr[lo];
			}
		}
		else{
			if(arr[hi]<=rt_max){
				result += rt_max-arr[hi];
				hi--;
			}
			else{
				rt_max = arr[hi];
			}
		}
	}

	return result;
}

int main()
{
	int arr[] = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum water that can be accumulated is "<< findWater(arr, n);

	return 0;
}

// This code is contributed by Aditi Sharma


