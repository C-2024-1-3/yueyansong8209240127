#include <iostream>
using namespace std;
class Student {
public:
    int id;
    int score;
};
void max(Student* students, int length) {
    int maxScore = students[0].score;  
    int Id = students[0].id;  
    for (int i = 1; i < length; i++) {  
        if (students[i].score > maxScore) {  
            maxScore = students[i].score;  
            Id = students[i].id;  
        }
    }
    std::cout << "最高成绩的学号是：" << Id << std::endl; 
}
int main() {
    Student students[5] = 
    {
        {1, 85},{2, 90},{3, 95},{4, 80},{5, 92}
    };
    max(students, 5);
    return 0;
}