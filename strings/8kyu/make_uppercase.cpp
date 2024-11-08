#include <bits/stdc++.h>
using namespace std;

std::string makeUpperCase (const std::string& input_str)
{
    string str = input_str;
    for(char &c : str){
        c = toupper(c); // toupper doesn't modify in place
    }
    return str;
}

int main(){
    string str = "aziza";
    cout << makeUpperCase(str) << "\n";
}