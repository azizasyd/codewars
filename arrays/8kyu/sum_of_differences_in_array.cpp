#include <bits/stdc++.h>
using namespace std;

int sumOfDifferences(const std::vector<int>& arr){
    if (arr.size() < 2) return 0;

    vector<int> a = arr;
    sort(a.begin(), a.end(), greater<>());
    int sum = 0;
    for(size_t i = 0; i < a.size() - 1; ++i){
        sum += a[i] - a[i+1];
    }
    return sum;
}

int main(){
    vector<int> a = {2,1,10};
    cout << sumOfDifferences(a) << "\n";
}