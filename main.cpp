#include <iostream>

int main() {
    int q;
    std::cin >> q;

    while (q--) {
        long long a, b, n, S;
        std::cin >> a >> b >> n >> S;

       
        long long max_n_coins = std::min(S / n, a);
        long long remaining = S - max_n_coins * n;

      
        if (remaining <= b) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

    return 0;
}