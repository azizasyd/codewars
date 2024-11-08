#include <bits/stdc++.h>
using namespace std;

bool is_uppercase(const std::string &s) {
    for(int i = 0; i < s.size(); ++i){
        if(islower(s[i])) return false;
    }
    return true;
}

int main(){
    string str = "Aziza";
    cout << (is_uppercase(str) ? "true" : "false") << "\n";
}