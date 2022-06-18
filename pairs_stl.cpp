#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    pair<int , string> p;
    p={2,"raju"};
    
    cout<<p.first<<" "<<p.second<<endl;
    // pair<int , string> p1 =p;    // value will not change
    pair<int , string>& p1 =p;    // value will  change
     
    p1.first=8;
    
    cout<<p.first<<" "<<p.second<<endl;
    

    return 0;
}