#include <bits/stdc++.h>
using namespace std;

template <typename T> // accepts any type
double sum(const vector<T>& nums) {
    return accumulate(nums.begin(), nums.end(), 0.0);
}

int main(){
    vector<double> a = {1, 5.2, 4, 0, -1};
    cout << fixed << setprecision(10) << sum(a) << "\n";
}
