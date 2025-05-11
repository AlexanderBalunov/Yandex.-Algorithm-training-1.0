#include <cstdint>
#include <iostream>

int main() {
    int16_t room, cond;
    std::cin >> room >> cond;
    std::string mode;
    std::cin >> mode;
    std::cout << (mode == "freeze" ? (room > cond ? cond : room) : 
                  mode == "heat" ? (cond > room ? cond : room) :
                  mode == "auto" ? cond : room) << std::endl;
    return 0;
}

/*
    Если расписывать логику вложенных тернарных операторов через else-if:
    if (mode == "freeze") {
        if (room > cond) {
            std::cout << cond << std::endl;
        } else {
            std::cout << room << std::endl;
        }
    } else if (mode == "heat") {
        if (cond > room) {
            std::cout << cond << std::endl;
        } else {
            std::cout << room << std::endl;
        }
    } else if (mode == "auto") {
        std::cout << cond << std::endl;
    } else {
        std::cout << room << std::endl;
    }
*/
