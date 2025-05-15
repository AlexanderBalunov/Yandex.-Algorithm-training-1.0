#include <cstdint>
#include <iostream>

int main() {
    uint16_t a, b, n, m;
    std::cin >> a >> b >> n >> m;
    uint16_t min_time_1 = n + (n - 1) * a;
    uint16_t max_time_1 = n + (n + 1) * a;
    uint16_t min_time_2 = m + (m - 1) * b;
    uint16_t max_time_2 = m + (m + 1) * b;
    // Ответом служит пересечение временных интервалов
    if (min_time_1 > max_time_2 || max_time_1 < min_time_2) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << std::max(min_time_1, min_time_2) << ' ' << std::min(max_time_1, max_time_2) << std::endl;
    }
}
