#include <bits/stdc++.h>
using namespace std;

// C++ program to Check if a given array contains duplicate

bool checkDuplicatesWithinK(int arr[], int n)
{

	// traversing the input array
	for (int i = 0; i < n; i++) {
		int j = i + 1;
		int range = n;
		
		while (range > 0 and j < n) {
			if (arr[i] == arr[j])
				return true;
			j++;
			range--;
		}
	}
	return false;
}

int main()
{
	int arr[] = { 10, 5, 3, 4, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (checkDuplicatesWithinK(arr, n))
		cout << "Yes";
	else
		cout << "No";
}