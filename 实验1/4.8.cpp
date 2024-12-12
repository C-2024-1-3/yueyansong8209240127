#include <iostream>

int main() {
    int a[] = { 1, 2, 3 };
    int* p;
    p = a;
    for (int i = 0; i < 3; i++) {
        std::cout << a[i] << ", " << p[i] << ", " << *(p + i) << std::endl;
    }
    return 0;
}