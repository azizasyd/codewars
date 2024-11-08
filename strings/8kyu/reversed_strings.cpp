#include <bits/stdc++.h>
using namespace std ;

string reverseString (string str)
{
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    string str = "hello";
    cout << reverseString(str) << "\n";
}