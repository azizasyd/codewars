#include <bits/stdc++.h>
using namespace std;

int string_to_number(const std::string& s) {
    return stoi(s);

//    int res = 0;
//    for(char c : s){
//        res = res * 10 + (c - '0');
//    }
//    return res;
}

int main(){
    string str = "123";
    cout << string_to_number(str) << "\n";
}