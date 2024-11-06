#include <bits/stdc++.h>
using namespace std;

std::string fakeBin(std::string str){
    string res;
    for(char s : str){
        if(s < '5') res += '0';
        else if(s >= '5') res += '1';
    }
    return res;
}

int main(){
    string str = "1234567";
    cout << fakeBin(str) << "\n";
}