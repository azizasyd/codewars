#include <bits/stdc++.h>
using namespace std;

std::pair<int, int> swap_values(std::pair<int, int> values) {
    int temp = values.first;
    values.first = values.second;
    values.second = temp;
    return values;
}

int main(){
    pair<int, int> p = {1,2};
    p = swap_values(p);
    cout << p.first << " " << p.second << "\n";
}