#include <bits/stdc++.h>
using namespace std;

std::string removeExclamationMarks(std::string str){
    string res;
    for(char c : str){
        if(c != '!'){
            res += c;
        }
    }
    return res;
}

int main(){
    string str = "Aziza!";
    cout << removeExclamationMarks(str) << "\n";
}