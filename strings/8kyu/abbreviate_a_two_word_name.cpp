#include <bits/stdc++.h>
using namespace std;

std::string abbrevName(std::string name)
{
    char firstInitial = std::toupper(name[0]);
    char secondInitial = std::toupper(name[name.find(' ') + 1]);

    return std::string(1, firstInitial) + "." + std::string(1, secondInitial);
}

int main(){
    string str = "Aziza Sydykova";
    cout << abbrevName(str) << "\n";
}