#include <bits/stdc++.h>
using namespace std;

int positive_sum (const std::vector<int> arr){
    int sum = 0;
    for(int i = 0; i < arr.size(); ++i){
        if(arr[i] > 0) sum += arr[i];
    }
    return sum;
}

int main(){
    vector<int> a = {1,-4,7,12};
    cout << positive_sum(a) << "\n";
}