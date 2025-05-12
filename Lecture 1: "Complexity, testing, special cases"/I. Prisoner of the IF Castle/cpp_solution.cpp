#include <iostream>

void CompAndSwap(int& x, int& y) {
    if (x > y) {
        int z = x;
        x = y;
        y = z;
    }
}

int main() {
    int A, B, C, D, E;
    std::cin >> A >> B >> C >> D >> E;
    CompAndSwap(D, E);
    CompAndSwap(A, B);
    CompAndSwap(B, C);
    CompAndSwap(A, B);
    if (A <= D && B <= E) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}

/* 

Узник if :) 

#include <iostream>

int main() {
    int A, B, C, D, E;
    std::cin >> A >> B >> C >> D >> E;
    if ((A <= D && B <= E) || (A <= E && B <= D) ||
        (B <= D && C <= E) || (D <= E && C <= D) ||
        (A <= D && C <= E) || (A <= E && C <= D))
    {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}

*/
