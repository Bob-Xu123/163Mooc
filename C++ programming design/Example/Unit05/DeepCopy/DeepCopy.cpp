#include <iostream>
#include "Date.h"
#include "Employee.h"
using std::cout;
using std::endl;
//任务1：构造Employee对象e1，拷贝构造e2
//任务2：调试模式观察e1和e2的birthday成员
//任务3：添加拷贝构造函数实现深拷贝
//任务4：调试模式观察e1和e2的birthday成员

int Employee::numberofObjects = 0;
int main() {
	Employee e1{ "Ale", Gender::male, {1998,5,1} };
	Employee e2{ e1 };
	cout << e1.toString() << endl;
	cout << e2.toString() << endl;

	return 0;
}