#include<iostream>
using namespace std;
// method 1
struct Pair
{
	int min;
	int max;
};

Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;	
	int i;
	
	if (n == 1)
	{
		minmax.max = arr[0];
		minmax.min = arr[0];	
		return minmax;
	}
	
	if (arr[0] > arr[1])
	{
		minmax.max = arr[0];
		minmax.min = arr[1];
	}
	else
	{
		minmax.max = arr[1];
		minmax.min = arr[0];
	}
	
	for(i = 2; i < n; i++)
	{
		if (arr[i] > minmax.max)	
			minmax.max = arr[i];
			
		else if (arr[i] < minmax.min)	
			minmax.min = arr[i];
	}
	return minmax;
}

int main()
{
	int arr[] ={1,2,4,5,6,7,9,78,45,67};
	  int size = sizeof(arr)/sizeof(arr[0]);
	
	struct Pair minmax = getMinMax(arr, size);
	
	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;
  
  
	
	return 0;
}


// method 2

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
 
int main()
{
    int arr[] = { 4, 2, 1, 6, -8, 5 ,0,-12,23};
 
    int min = arr[0] ,max = arr[0];  //   or   int min = INT_MAX, max = INT_MIN;
    for (int i: arr)
    {
        if (i < min) {
            min = i;
        }
 
        if (i > max) {
            max = i;
        }
    }
 
    std::cout << "The min element is " << min << std::endl;
    std::cout << "The max element is " << max << std::endl;
 
    return 0;
}
