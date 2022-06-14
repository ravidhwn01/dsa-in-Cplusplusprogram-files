#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        char c;
        cin>>c;
        if(c=='B'||c=='b'){
            cout<<"BattleShip"<<endl;
        }
        else if(c=='C'||c=='c'){
            cout<<"Cruiser"<<endl;
        }

       else if(c=='D'||c=='d'){
            cout<<"Destroyer"<<endl;
        }

        else if(c=='f'||c=='F'){
            cout<<"Frigate"<<endl;
        }
        else if(c!='b'&c!='c'&c!='d'&c!='f')
        {
             cout<<"invalid search"<<endl;
        }
    }
    
    
    return 0;
}