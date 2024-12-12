#include <iostream>
#include <vector>
int main() {
    std::vector<int> numbers;
    for (int i = 0; i < 10; i++) { 
        int num;
        std::cout << "请输入一个数: ";
        std::cin >> num;  
        bool found = false;
        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[j] == num) {
                found = true;
                break;
            }
        }
        if (!found) {  
            numbers.push_back(num);
        }
    }
    for (int num : numbers) {
        std::cout << num << " ";
    }
    return 0;
}