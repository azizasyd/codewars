#include <bits/stdc++.h>
using namespace std;

std::vector<int> digitize(unsigned long n)
{
    vector<int> res;
    string str_num = to_string(n);
    for(char i = str_num.size() - 1; i >= 0; --i){
        res.push_back(str_num[i] - '0');
    }
    return res;
}

int main(){
    unsigned long num = 35231;
    vector<int> a = digitize(num);
    for(int r : a) cout << r << " ";
    cout << "\n";
}