#include<iostream>
class Cuboid {
private:
    double length;
    double width;
    double height;
public:
    void input() {
        std::cout << "请输入长方柱的长：";
        std::cin >> length;
        std::cout << "请输入长方柱的宽：";
        std::cin >> width;
        std::cout << "请输入长方柱的高：";
        std::cin >> height;
    }
    double volume() {
        return length * width * height;
    }
    void output() {
        std::cout << "该长方柱的体积是：" << volume() << std::endl;
    }
}; int main() {
    Cuboid cuboids[3];
    for (int i = 0; i < 3; i++) {
        std::cout << "第" << i + 1 << "个长方柱：" << std::endl;
        cuboids[i].input();
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "第" << i + 1 << "个长方柱：";
        cuboids[i].output();
    }
    return 0;
}