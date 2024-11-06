#include <bits/stdc++.h>
using namespace std;

std::vector<int> countPositivesSumNegatives(std::vector<int> input)
{
    if(input.empty()) return {};
    vector<int> res;
    int count = 0, sum = 0;
    for(int num : input){
        if(num > 0) count++;
        else if(num < 0) sum += num;
    }
    res.push_back(count);
    res.push_back(sum);
    return res;
}

int main(){
    vector<int> a = {};
    vector<int> res = countPositivesSumNegatives(a);
    for(int r : res) cout << r << " ";
    cout << "\n";
}