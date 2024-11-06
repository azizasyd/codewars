#include <bits/stdc++.h>
using namespace std;

std::string findNeedle(const std::vector<std::string>& haystack)
{
    int res = find(haystack.begin(), haystack.end(), "needle") - haystack.begin();
    return "found the needle at position " + std::to_string(res);
}

int main(){
    vector<string> a = {"hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk"};
    cout << findNeedle(a) << "\n";
}