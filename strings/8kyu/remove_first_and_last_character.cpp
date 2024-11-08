#include <bits/stdc++.h>
using namespace std;

string sliceString(string str)
{
    return str.substr(1,str.size() - 2);

//    str.erase(str.size() - 1, 1);
//    str.erase(0, 1);
//    return str;
}

int main(){
    string str = "hello";
    cout << sliceString(str) << "\n";
}