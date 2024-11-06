#include <bits/stdc++.h>
using namespace std;

int count_sheep(vector<bool> arr)
{
    int count = 0;
    for(bool a : arr){
        if(a == true) count++;
    }
    return count;
}

int main(){
    vector<bool> a = { true,  true,  true,  false,
                     true,  true,  true,  true,
                     true,  false, true,  false,
                     true,  false, false, true,
                     true,  true,  true,  true,
                     false, false, true,  true };
    cout << count_sheep(a) << "\n";
}
