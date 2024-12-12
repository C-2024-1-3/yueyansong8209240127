#include <iostream>
#include <string>
int indexof(const std::string& s1, const std::string& s2);
int indexof(const std::string& s1, const std::string& s2) {
    int s2Length = s2.length();
    int s1Length = s1.length();
    for (int i = 0; i <= s2Length - s1Length; i++) {
        int j;
        for (j = 0; j < s1Length; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == s1Length) {
            return i;
        }
    }
    return -1;
}
int main() {
    std::string s1, s2;
    std::cout << "请输入字符串s1: ";
    std::cin >> s1;
    std::cout << "请输入字符串s2: ";
    std::cin >> s2;
    int result = indexof(s1, s2);
    if (result != -1) {
        std::cout << "s1是s2的子串，首次匹配的下标是 " << result << std::endl;
    }
    else {
        std::cout << "s1不是s2的子串" << std::endl;
    }
    return 0;
}