#include <iostream>
using namespace std;

void main() {
    int i, j, * pi, * pj;  // 此处添加分号
    pi = &i;  // 修正指针赋值
    pj = &j;  // 修正指针赋值
    i = 5;
    j = 7;
    cout << i << '\t' << j << '\t' << pj << '\t' << *pi << '\t' << *pj;
}
