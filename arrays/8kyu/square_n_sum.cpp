#include <bits/stdc++.h>
using namespace std;

int square_sum(const std::vector<int> &numbers)
{
    int res = 0;
    for(int num : numbers){
        num *= num;
        res += num;
    }
    return res;
}

int main(){
    vector<int> a = {1,2,3};
    cout << square_sum(a) << "\n";
}