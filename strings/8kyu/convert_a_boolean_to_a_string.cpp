#include <bits/stdc++.h>
using namespace std;

std::string boolean_to_string(bool b){
    return b ? "true" : "false";
}

int main(){
    bool b = true;
    cout << boolean_to_string(b) << "\n";
    return 0;
}