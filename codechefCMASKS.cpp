#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        int a = 100*x;
        int b = 10*y;
        if (a>=b)
        {
            cout<<"cloth"<<endl;
        }
        else if(a<b) {
            cout<<"disposeble"<<endl;
        }
        

    }
    
    return 0;
}