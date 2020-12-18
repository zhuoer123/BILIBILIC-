//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base_static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base_static void func(a)" << endl;
//	}
//};
//
//int Base::m_A = 100;
//
//class Son : public Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son_static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Son_static void func(a)" << endl;
//	}
//};
//
//int Son::m_A = 200;
//
////同名静态属性
//void test01()
//{
//	//1. 通过对象访问
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//	//2. 通过类名访问
//	cout << "Son 下 m_A =" << Son::m_A << endl;
//	cout << "Base 下 m_A =" << Son::Base::m_A << endl;
//}
//
////同名静态函数
//void test02()
//{
//	//1.通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//2.通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();
//	Son::Base::func();
//
//	Son::Base::func(100);
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}