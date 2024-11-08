#include <bits/stdc++.h>
using namespace std;

std::string twoSort(std::vector<std::string> s)
{
    vector<string> str = s;
    sort(str.begin(),str.end());
    string res = str[0];
    string stared;
    for(int i = 0; i < res.size(); ++i){
        stared += res[i];
        if(i < res.size() - 1){
            stared += "***";
        }
    }
    return stared;
}

int main(){
    vector<string> a = {"hello", "bye", "aziza"};
    cout << twoSort(a) << "\n";
}