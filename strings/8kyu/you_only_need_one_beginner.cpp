#include <bits/stdc++.h>
using namespace std;

bool check(const std::vector<std::string>& seq, const std::string& elem) {
    for(string str : seq){
        if(str == elem) return true;
    }
    return false;
}

int main(){
    vector<string> a = {"hello"};
    string elem = "hello";
    cout << (check(a,elem) ? "true" : "false") << "\n";
}