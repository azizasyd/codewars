#include <bits/stdc++.h>
using namespace std;

int arrayPlusArray(std::vector<int> a, std::vector<int> b) {
     return accumulate(a.begin(),a.end(),0) + accumulate(b.begin(),b.end(),0);
}

int main(){
    vector<int> a = {1,2,3};
    vector<int> b = {4,5,6};
    cout << arrayPlusArray(a,b) << "\n";
}