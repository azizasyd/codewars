#include <bits/stdc++.h>
using namespace std;

std::string repeat_str(size_t repeat, const std::string& str) {
    string res;
    while(repeat--){
        res += str;
    }
    return res;
}

int main(){
    int n = 6;
    string str = "hello";
    cout << repeat_str(n, str) << "\n";
}