#include <bits/stdc++.h>
using namespace std;

int points(const std::array<std::string, 3>& games) {
    int count = 0;
    for(int i = 0; i < games.size(); ++i){
        if(games[i][0] > games[i][2]) count += 3;
        else if(games[i][0] < games[i][2]) count += 0;
        else count += 1;
    }
    return count;
}

int main(){
    array<string, 3> games = {"3:1", "2:2", "0:1"};
    cout << points(games) << "\n";
}