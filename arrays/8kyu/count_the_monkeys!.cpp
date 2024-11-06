#include <bits/stdc++.h>
using namespace std;

std::vector<int> MonkeyCount(int n) {
    vector<int> res;
    for(int i = 1; i <= n; ++i){
        res.push_back(i);
    }
    return res;
}

int main(){
    int n = 10;
    vector<int> res = MonkeyCount(n);
    for(int r : res) cout << r << " ";
    cout << "\n";
}