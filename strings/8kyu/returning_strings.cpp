#include <bits/stdc++.h>
using namespace std;

std::string greet(const std::string& n){
    return "Hello, " + n + " how are you doing today?";
}

int main(){
    string str = "Aziza";
    cout << greet(str) << "\n";
}