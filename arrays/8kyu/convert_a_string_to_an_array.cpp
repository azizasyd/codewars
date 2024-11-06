#include <bits/stdc++.h>
using namespace std;

std::vector<std::string> string_to_array(const std::string& s) {
    if(s.empty()) return {""};
    vector<string> res;
    istringstream ss(s);
    string word;
    while(ss >> word) res.push_back(word);
    return res;
}

int main(){
    string str = "Robin Singh";
    vector<string> res = string_to_array(str);
    for(string r : res) cout << r << " ";
    cout << "\n";
}
