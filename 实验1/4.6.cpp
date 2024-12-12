#include <iostream>
#include <cctype>
void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char c = tolower(s[i]);
        if (isalpha(c)) {
            counts[c - 'a']++;
        }
    }
}
int main() {
    const int SIZE = 26;
    int counts[SIZE] = { 0 };
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    count(str, counts);
    for (int i = 0; i < SIZE; i++) {
        if (counts[i] != 0) {
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << " times\n";
        }
    }
    return 0;
}