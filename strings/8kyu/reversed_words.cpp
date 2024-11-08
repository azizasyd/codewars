#include <bits/stdc++.h>
using namespace std;

std::string reverse_words(const std::string& str) {
    istringstream ss(str);
    string word;
    vector<string> words;
    while(ss >> word){
        words.push_back(word);
    }

    reverse(words.begin(), words.end());

    string result;
    for(int i = 0; i < words.size(); ++i){
        result += words[i];
        if(i < words.size() - 1){
            result += " ";
        }
    }
    return result;
}

int main(){
    string str = "hello world";
    cout << reverse_words(str) << "\n";
}
