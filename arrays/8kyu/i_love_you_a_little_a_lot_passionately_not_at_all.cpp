#include <bits/stdc++.h>
using namespace std;

std::string how_much_i_love_you(int nb_petals) {
    vector<string> a = {"I love you", "a little", "a lot", "passionately", "madly", "not at all"};
    return a[(nb_petals - 1) % 6];
}

int main(){
    int n = 10;
    cout << how_much_i_love_you(n) << "\n";
}