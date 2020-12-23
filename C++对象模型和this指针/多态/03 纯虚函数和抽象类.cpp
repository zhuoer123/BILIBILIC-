//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base
//{
//public:
//	//纯虚函数
//	//类中只有一个纯虚函数就称为 抽象类
//	//抽象类无法实例化对象
//	//子类必须重写父类中的纯虚函数，否则也属于抽象类
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	void func()
//	{
//		cout << "func()调用" << endl;
//	}
//};
//
//void test01()
//{
//	Base* base = new Son;
//	base->func();
//	delete base;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}