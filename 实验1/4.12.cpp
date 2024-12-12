#include <iostream>
#include <string>
int parseHex(const std::string& hexString) {
    int len = hexString.length();
    int result = 0;
    int power = 1;
    for (int i = len - 1; i >= 0; i--) {
        char digit = hexString[i];
        int value;
        if (digit >= '0' && digit <= '9') {
            value = digit - '0';
        }
        else if (digit >= 'A' && digit <= 'F') {
            value = digit - 'A' + 10;
        }
        else if (digit >= 'a' && digit <= 'f') {
            value = digit - 'a' + 10;
        }
        else {
            std::cout << "输入的不是合法的十六进制字符串" << std::endl;
            return -1;
        }
        result += value * power;
        power *= 16;
    }
    return result;
}
int main() {
    std::string hex = "A5";
    int decimal = parseHex(hex);
    std::cout << hex << " 转换为十进制是: " << decimal << std::endl;
    return 0;
}