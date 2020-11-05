#include<iostream>
using namespace std;

//常函数
class Person
{
public:
	// this的本质是指针常量  指针的指向是不可以修改的
	// const Person * const this;
	// 在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
	void showPerson() const
	{
		this->m_B = 100;
		//this->m_A = 200;
		//this = NULL; this指针是不可以修改指针指向的
	}

	void func()
	{
		m_A = 100;
	}

	int m_A;
	mutable int m_B; //特殊变量，即使在常函数中，也可以修改这个值  加mutable
};

void test01()
{
	Person p;
	p.showPerson();
}

//常对象
void test02()
{
	const Person p2; //在对象前加const，成为常对象
	//p2.m_A = 100;
	p2.m_B = 100; //m_B是特殊值，在常对象下可以修改

	//常对象只能调用常函数
	p2.showPerson();
	//p2.func(); //常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性

}

int main()
{
	test01();
	system("pause");
	return 0;
}