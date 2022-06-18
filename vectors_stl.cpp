#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
// manually input

    v.push_back(3);
    v.push_back(4);
    v.push_back(2);
    v.push_back(6);
    v.push_back(8);
    v.push_back(0);
     for (int i = 0; i < v.size();  i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
// using for loop
    vector<int> v1;

int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    int x;
    cin>>x;
    v1.push_back(x);// taking values
}
    
    for (int i = 0; i < v1.size();  i++)
    {
        cout<<v1[i]<<" ";
    }
    
    return 0;
}