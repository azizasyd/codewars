#include <bits/stdc++.h>
using namespace std;

std::array<std::string, 3> fixTheMeerkat(std::array<std::string, 3> arr) {
    swap(arr[0], arr[2]);
    return arr;
}
int main(){
    array<string, 3> str = {"tail", "body", "head"};
    array<string, 3> res = fixTheMeerkat(str);
    for(string r : res){
        cout << r << " ";
    }
    cout << "\n";
}