#include <cstdint>
#include <iostream>

struct Dimensions {
    uint16_t height;
    uint16_t widht;
    uint32_t s;
};

void Print(Dimensions d) {
    std::cout << d.height << ' ' << d.widht << std::endl;
}

int main() {
    int height1, widht1, height2, widht2;
    std::cin >> height1 >> widht1 >> height2 >> widht2;
    Dimensions var1 = {height1 +  height2, widht1 > widht2 ? widht1 : widht2, var1.height * var1.widht};
    Dimensions var2 = {widht1 +  widht2, height1 > height2 ? height1 : height2, var2.height * var2.widht};
    Dimensions var3 = {widht1 +  height2, height1 > widht2 ? height1 : widht2, var3.height * var3.widht};
    Dimensions var4 = {height1 +  widht2, widht1 > height2 ? widht1 : height2, var4.height * var4.widht};   
    if (var1.s <= var2.s && var1.s <= var3.s && var1.s <= var4.s) {
        Print(var1);
    } else if (var2.s <= var1.s && var2.s <= var3.s && var2.s <= var4.s) {
        Print(var2);
    } else if (var3.s <= var1.s && var3.s <= var2.s && var3.s <= var4.s) {
        Print(var3);
    } else {
        Print(var4);
    }
    return 0;
}
