#include <bits/stdc++.h>
using namespace std;

int get_average(std::vector<int> marks)
{
    int res = accumulate(marks.begin(), marks.end(),0);
    int aver = res / marks.size();
    return aver;
}

int main(){
    vector<int> a = {1,2,3,5};
    cout << get_average(a) << "\n";
}