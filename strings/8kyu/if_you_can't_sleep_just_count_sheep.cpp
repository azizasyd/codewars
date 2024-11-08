#include <bits/stdc++.h>
using namespace std;

std::string countSheep(int number) {
    string res;
    for(int i = 1; i <= number; ++i){
        res += to_string(i) + " sheep...";
    }
    return res;
}

int main(){
    int num = 3;
    cout << countSheep(num) << "\n";
}