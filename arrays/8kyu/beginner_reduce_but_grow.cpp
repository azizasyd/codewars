#include <bits/stdc++.h>

using namespace std;

int grow(std::vector<int> nums) {
    int res = 1;
    for(int i = 0; i < nums.size(); ++i){
        res *= nums[i];
    }
    return res;
}

int main(){
    vector<int> a = {1,2,3,4};
    std::cout << grow(a) << "\n";
    return 0;
}