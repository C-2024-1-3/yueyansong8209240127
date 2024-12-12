// test.cpp
#include <iostream>
#include "mytriangle.h"
bool is_valid(double side1, double side2, double side3) {
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        return true;
    }
    return false;
}

double double_area(double side1, double side2, double side3) {
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
}

int main() {
    double side1, side2, side3;
    std::cout << "请输入三角形的三条边长: ";
    std::cin >> side1 >> side2 >> side3;

    if (is_valid(side1, side2, side3)) {
        double area = double_area(side1, side2, side3);
        std::cout << "三角形的面积是: " << area << std::endl;
    }
    else {
        std::cout << "输入不合法，无法构成三角形。" << std::endl;
    }

    return 0;
}