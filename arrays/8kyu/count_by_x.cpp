#include <bits/stdc++.h>
using namespace std;

std::vector<int> countBy(int x,int n){
    vector<int> res;
    for(int i = 1; i <= n; ++i){
        res.push_back(x * i);
    }
    return res;
}

int main(){
    int x = 1, n = 10;
    vector<int> res = countBy(x,n);
    for(int r : res) cout << r << " ";
    cout << "\n";
}