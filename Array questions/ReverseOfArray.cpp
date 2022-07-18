#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getReverse(int* arr,int start ,int end){
			while (start<end)
			{
				int temp = arr[start];
				arr[start] = arr[end];
				arr[end] = temp;
				start++;
				end--;
			}
			
}
void printarray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[] = {1, 2, 4, 5, 6, 7, 9, 78, 45, 67};
	int size = sizeof(arr) / sizeof(arr[0]);
	printarray(arr, size);
		getReverse(arr,0,size-1);
	printarray(arr, size);
	

	return 0;
}