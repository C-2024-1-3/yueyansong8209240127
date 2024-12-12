#include <iostream>
int main() {
    bool lockers[100] = { false };

    for (int student = 1; student <= 100; student++) { 
        for (int locker = student; locker <= 100; locker += student) { 
            lockers[locker - 1] = !lockers[locker - 1]; 
        }
    }
    std::cout << "开着的存物柜号码为：";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            std::cout << i + 1 << " ";
        }
    }

    return 0;
}