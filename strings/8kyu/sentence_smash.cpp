#include <bits/stdc++.h>
using namespace std;

std::string smash(const std::vector<std::string>& words)
{
    if(words.empty()) return "";

    string res = words[0];
    for(int i = 1; i < words.size(); ++i){
        res += " " + words[i];
    }
    return res;
}

int main(){
    vector<string> words = {"hello", "world", "this", "is", "great"};
    cout << smash(words) << "\n";
}