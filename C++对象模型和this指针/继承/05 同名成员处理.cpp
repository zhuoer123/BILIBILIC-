//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base_func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base_func(int a)调用" << endl;
//	}
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son_func()调用" << endl;
//	}
//	int m_A;
//};
//
//
////同名成员属性处理
//void test01()
//{
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	//如果通过子类对象 访问到父类中同名成员，需要加作用域
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//}
//
////同名成员函数处理方式
//void test02()
//{
//	Son s2;
//	s2.func(); //直接调用 调用时子类中的同名成员
//
//	//调用父类中同名成员函数
//	s2.Base::func();
//
//
//	//子类的同名成员会隐藏掉父类中所有同名成员函数
//	s2.Base::func(100);
//	//s2.func(100);
//}
//
//int main()
//{
//    //test01();
//	test02();
//	system("pause");
//	return 0;
//}