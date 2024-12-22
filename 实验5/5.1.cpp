#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	void input()
	{
		std::cin >> hour;
		std::cin >> minute;
		std::cin >> second;
	}
	void output()
	{
		std::cout << hour << ":" << minute << ":" << second << std::endl;
	}
};
int main()
{
	Time t1;
	t1.input();
		t1.output();
		return 0;
}