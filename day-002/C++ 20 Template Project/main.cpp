#include <iostream>
#include <compare>   // WAJIB untuk <=> dan strong_ordering

int main() {
    auto result = (10 <=> 20) == std::strong_ordering::greater;
    std::cout << result << '\n';
    return 0;
}

