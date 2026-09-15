#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

unsigned long long power_of_3_with_ceiling(int n, int ceiling) {
    if (n == 0) {
        return 1;
    } else {
        unsigned long long ans = 1;

        for (int i = 0; i < n; ++i) {
            ans *= 3;
            ans %= ceiling;
        }

        return ans;
    }
}

int main_hide_and_seek() {
    // Какое же промудоблядское задание

    std::string s;
    std::unordered_map<char, int> alph;

    std::cin >> s;

    std::string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz-_";
    std::vector<std::string> symbols_bin(s.size(), "");
    int ceiling = 1'000'000'000 + 7;
    int zeros_count = 0;

    for (int i = 0; i < 64; ++i) {
        alph[symbols[i]] = i;
    }

    for (int i = 0; i < s.size(); ++i) {
        symbols_bin[i] = std::format("{:06b}", alph[s[i]]);
    }

    for (const std::string& sym_bin : symbols_bin) {
        zeros_count += static_cast<int>(std::count(sym_bin.begin(), sym_bin.end(), '0'));
    }

    std::cout << power_of_3_with_ceiling(zeros_count, ceiling);

    return 0;
}