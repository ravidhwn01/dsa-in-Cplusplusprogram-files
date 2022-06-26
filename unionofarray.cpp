#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int dounion(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(a[i]);
    for (int j = 0; j < m; j++)
        s.insert(b[j]);
    for (int c : s)
    {
        cout << c << " ";
    }
    cout<<endl;
    return s.size();
}
int main()
{
    int a[] = {1, 3, 4, 64, 78, 8, 2};
    int b[] = {1, 3, 14, 64, 8, 2, 8, 12};
    int x = dounion(a, 7, b, 8);
    cout << x;

    return 0;
}