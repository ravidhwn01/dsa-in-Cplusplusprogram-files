#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // convert into uppercase
    string str = "asdfdfdfkdjfkld";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')

            str[i] -= 32;
    }
    cout << str<<endl;
    // convert to lowercase
for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')

            str[i] += 32;
    }
    cout << str;

    return 0;
}