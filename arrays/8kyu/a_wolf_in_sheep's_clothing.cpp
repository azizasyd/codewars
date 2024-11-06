#include <bits/stdc++.h>
using namespace std;

std::string warn_the_sheep(const std::vector<std::string>& queue)
{
    int wolf_position = find(queue.begin(), queue.end(), "wolf") - queue.begin(); // gets index of iterator
    if(wolf_position != queue.size() - 1){
        int sheep_in_danger = queue.size() - wolf_position - 1;
        return "Oi! Sheep number " + to_string(sheep_in_danger) + "! You are about to be eaten by a wolf!";
    } else {
        return  "Pls go away and stop eating my sheep";
    }
}

int main(){
    vector<string> a = {"sheep", "sheep", "sheep", "wolf", "sheep"};
    cout << warn_the_sheep(a) << "\n";
}