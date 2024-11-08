#include <bits/stdc++.h>
using namespace std;

std::string greet(const std::string& name, const std::string& owner) {
    if(name == owner) return "Hello boss";
    else return "Hello guest";
}

int main(){
    string str1 = "John";
    string str2 = "John";
    string str3 = "Alice";
    string str4 = "Bob";
    cout << greet(str1, str2) << "\n";
    cout << greet(str3, str4) << "\n";
}