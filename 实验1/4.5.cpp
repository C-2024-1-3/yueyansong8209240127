#include <iostream>
#include <string>
int indexOf(const std::string& s1, const std::string& s2) {
    int len1 = s1.length();
    int len2 = s2.length();

    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}
int main() {
    std::string s1, s2;
    std::cout << "Enter the first string: ";
    std::cin >> s1;
    std::cout << "Enter the second string: ";
    std::cin >> s2;
    int result = indexOf(s1, s2);
    std::cout << "indexOf(\"" << s1 << "\", \"" << s2 << "\") is " << result << std::endl; 
    return 0;
}