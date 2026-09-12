#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

struct Card {
    int id;
    int value;
};

bool card_comp(const Card& left, const Card& right) {
    return left.value <= right.value;
}

int main_restroom() {
    std::freopen("input.txt", "r", stdin);
    std::freopen("output.txt", "w", stdout);

    int n;

    std::cin >> n;

    std::vector<Card> a(
        n,
        Card { 0, 0 }
    );

    for (int i = 0; i < n; ++i) {
        std::cin >> a[i].value;

        a[i].id = i + 1;
    }

    std::sort(a.begin(), a.end(), card_comp);

    int first = 0;
    int second = 0;

    int min_xor = std::numeric_limits<int>::max();

    for (int i = 0; i < n - 1; ++i) {
        int current_xor = a[i].value ^ a[i + 1].value;

        if (current_xor < min_xor) {
            first = a[i].id;
            second = a[i + 1].id;
            min_xor = current_xor;
        }
    }

    std::cout << first << " " << second;

    return 0;
}