#include <iostream>
#include <string>

int countTransformations(std::string n) {
    int steps = 0;
    
    while (n.size() > 1) {
        long long sum = 0;
        for (char digit : n) {
            sum += digit - '0';
        }
        n = std::to_string(sum);
        steps++;
    }
    
    return steps;
}

int main() {
    std::string n;
    std::cin >> n;
    
    std::cout << countTransformations(n) << std::endl;
    
    return 0;
}