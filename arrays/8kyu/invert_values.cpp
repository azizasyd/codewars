#include <bits/stdc++.h>
using namespace std;

std::vector<int> invert(std::vector<int> values)
{
    vector<int> res;
    for(int num : values){
        num = -num;
        res.push_back(num);
    }
    return res;
}


int main(){
    vector<int> a = {1,2,3,4,5};
    a = invert(a);
    for(int r : a) cout << r << " ";
    cout << "\n";
}