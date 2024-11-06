#include <bits/stdc++.h>
using namespace std;

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    vector<int> res;
    for(int num : numbers){
        if(num % divisor == 0) res.push_back(num);
    }
    return res;

}

int main(){
    vector<int> a = {1,2,3,4,5,6};
    int num = 2;
    vector<int> res = divisible_by(a,num);
    for(int r : res) cout << r << " ";
    cout << "\n";
}