#include<iostream>
using namespace std;

//成员变量 和 成员函数 是 分开存储的
class Person
{
public:
	int m_A; //非静态变量  属于类的对象上
	static int m_B; //静态变量  不属于类的对象上

	void func1() {} //非静态成员函数  不属于类的对象上

	static void func2() {} //静态成员函数  不属于类的对象上

};

int Person::m_B = 0;

void test01()
{
	Person p;
	//空对象占用内存空间为1,
	//C++编译器会给每个对象分配一个字节空间，是为了区分空对象所占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "p占用的内存空间为：" << sizeof(p) << endl;
}

void test02()
{
	Person p2;
	cout << "p2占用的内存空间为：" << sizeof(p2) << endl; //4 bytes
}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}