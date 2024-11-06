#include <bits/stdc++.h>
using namespace std;

std::vector<int> maps(const std::vector<int> &values) {
    vector<int> a;
    for(int num : values){
        num *= 2;
        a.push_back(num);
    }
    return a;
}

int main(){
    vector<int> a = {1,2,3};
    a = maps(a);
    for(int r : a){
        cout << r << " ";
    }
    cout << "\n";
}