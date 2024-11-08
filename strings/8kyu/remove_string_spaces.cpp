#include <bits/stdc++.h>
using namespace std;

std::string no_space(const std::string& x)
{
    string res;
    for(int i = 0; i < x.size(); ++i){
        if(x[i] != ' '){
            res += x[i];
        }
    }
    return res;
}

int main(){
    string str = "hello world hello";
    cout << no_space(str) << "\n";
    return 0;
}