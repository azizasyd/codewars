#include <bits/stdc++.h>
using namespace std;

std::vector<int> squareOrSquareRoot(const std::vector<int>& array)
{
    vector<int> a;
    for(int num : array){
        int root = sqrt(num);
        if(root * root == num){
            a.push_back(root);
        } else {
            a.push_back(num * num);
        }
    }
    return a;
}

int main(){
    vector<int> a = {4,3,9,7,2,1};
    vector<int> res = squareOrSquareRoot(a);

    for(int num : res){
        std::cout << num << " ";
    }
    std::cout << "\n";
}