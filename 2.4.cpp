// 2.4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "输入第一个数：";
    cin >> num1;
    cout << "输入运算符 (+ - * / %): ";
    cin >> op;
    cout << "输入第二个数：";
    cin >> num2;

    double result;
    bool valid = true;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "除数不能为 0。" << endl;
            valid = false;
            break;
        }
        result = num1 / num2;
        break;
    case '%':
        if (int(num2) == 0 || (num1 - int(num1) != 0 || num2 - int(num2) != 0)) {
            cout << "取模要求整数且除数不为 0。" << endl;
            valid = false;
            break;
        }
        result = int(num1) % int(num2);
        break;
    default:
        cout << "非法运算符。" << endl;
        valid = false;
        break;
    }

    if (valid) cout << "结果：" << result << endl;

    return 0;
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
