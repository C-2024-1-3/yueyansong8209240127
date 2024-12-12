#include <iostream>
using namespace std;
int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int main() {
    int m, n;
    cout << "请输入第一个自然数: ";
    cin >> m;
    cout << "请输入第二个自然数: ";
    cin >> n;

    int GCD= gcd(m, n);
    cout << m << " 和 " << n << " 的最大公约数是: " << GCD << endl;
    cout << m << " 和 " << n << "的最小公倍数是：" << (m * n) / GCD;

    return 0;
}