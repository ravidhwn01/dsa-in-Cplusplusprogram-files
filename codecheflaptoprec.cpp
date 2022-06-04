#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,j;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int a[n],i,j,d=0,k=0;
	    int b[10]={1,2,3,4,5,6,7,8,9,10};
	    int c[10]={0,0,0,0,0,0,0,0,0,0};
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(j=0;j<10;j++)
	    {
	        for(i=0;i<n;i++)
	        {
	            if(b[j]==a[i])
	                c[j]=c[j]+1;
	        }
	    }
	    int max=c[0];
	    for(i=0;i<10;i++)
	    {
	        if(c[i]>=max)
	           {   
	               max=c[i];
	               d=b[i];
	           }
	    }
	    for(i=0;i<10;i++)
	    {
	        if(max==c[i])
	            k++;
	    }
        if(k==1)
            cout<<d<<"\n";
        else
            cout<<"Confused\n";
            
	}
	return 0;
}
	

