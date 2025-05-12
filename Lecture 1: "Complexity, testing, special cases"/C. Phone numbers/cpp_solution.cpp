#include <iostream>

std::string UnifiedNumberStrFormat(const std::string& str) {
    std::string digits;
    digits.reserve(11); // номер состоит максимум из 11 цифр
    for (const char n : str) {
        if (n >= '0' && n <= '9') { // можно использовать функцию std::isdigit их заголовка <cctype>
            digits.push_back(n);
        }
    }
    if (digits.size() == 7) {
        return "495" + digits;
    } else { // полный номер из 11 цифр
        return digits.substr(1); // не учитываем формат кода страны (7 или 8)
    }
}

int main() {
    std::string new_number;
    std::cin >> new_number;
    new_number = UnifiedNumberStrFormat(new_number);
    for (int i = 0; i < 3; ++i) {
        std::string number;
        std::cin >> number;
        number = UnifiedNumberStrFormat(number);
        std::cout << (new_number == number ? "YES" : "NO") << std::endl;
    }
    return 0;
}
