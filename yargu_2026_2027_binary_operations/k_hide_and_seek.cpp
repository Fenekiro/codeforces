#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int main() {
    std::string s;
    std::unordered_map<char, int> alph;

    std::cin >> s;

    std::string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_";
    std::vector<int> digits_64(s.size(), 0);
    int ceiling = 1'000'000'000 + 7;

    for (int i = 0; i < 64; ++i) {
        alph[symbols[i]] = i;
    }

    for (int i = 0; i < s.size(); ++i) {
        digits_64[i] = alph[s[i]];
    }

    return 0;
}