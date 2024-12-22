#include <iostream>
class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        std::cout << "坐标值为: (" << x << ", " << y << ")" << std::endl;
    }
};
int main() {
    Point p;  
    p.setPoint(10, 20);  
    p.display();  
    return 0;
}