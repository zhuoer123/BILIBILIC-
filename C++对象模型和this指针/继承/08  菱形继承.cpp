#include<iostream>
#include<string>

using namespace std;

//动物类
class Animal
{
public:
	int m_Age;
};


//利用虚继承解决菱形继承问题
//羊类
class Sheep : virtual public Animal{};

//骆驼类
class Camoe : virtual public Animal{};

//羊驼类
class Alpaca : public Sheep, public Camoe {  };

void test01()
{
	Alpaca a;
	//加作用域进行区分
	a.Sheep::m_Age = 18;
	a.Camoe::m_Age = 28;

	cout << "a.Sheep::m_Age = " << a.Sheep::m_Age << endl;
	cout << "a.Camoe::m_Age = " << a.Camoe::m_Age << endl;
	cout << "a.m_Age = " << a.m_Age << endl;

	//菱形继承 导致继承数据有2份  造成浪费
}


int main()
{
	test01();
	system("pause");
	return 0;
}