#include <bits/stdc++.h>
using namespace std;

double calcAverage(const std::vector<int>& values){
    double sum = std::accumulate(values.begin(), values.end(), 0);
    double aver = sum / values.size();
    return aver;
}

int main(){
    vector<int> a = {1,2,3,4};
    cout << fixed << setprecision(10) << calcAverage(a) << "\n";
}