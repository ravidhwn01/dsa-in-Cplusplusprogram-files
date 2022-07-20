#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "dfdhdsbfabsdjfjdcvaaasdjjfjhhffdd";
    int frq[26];
    for (int i = 0; i < 26; i++)
     frq[i] =0;
    

     for (int i = 0; i < s.size(); i++)
     frq[s[i]-'a']++;

      char ans = 'a';
      int maxf = 0;
      for (int i = 0; i < 26; i++)
      {
         if (frq[i]>maxf  )
         {
            maxf = frq[i];
            ans  = i+'a';
         }
         
      }
      cout<<maxf<<" "<<ans;
     
    return 0;
}