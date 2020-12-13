//#include<iostream>
//#include<string>
//
//using namespace std;
//
////公共继承
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 : public Base
//{
//public:
//	void func()
//	{
//		m_A = 10;  //父类中的公共权限成员，到子类中依然是公共权限
//		m_B = 10;  //父类中的保护权限成员，到子类中依然是保护权限
//		//m_C = 10;//父类中的保护权限成员，子类中访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//
//}
//
////保护继承
//class Base2
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 : protected Base2
//{
//public:
//	void func()
//	{
//		m_A = 100;   //父类中的公共权限成员，到子类中变成保护权限
//		m_B = 100;   //父类中的保护权限成员，到子类中变成保护权限
//		//m_C = 100;   //父类中的保护权限成员，子类中访问不到
//	}
//};
//
//void test02()
//{
//	Son2 s2;
//	s2.func();
//}
//
////私有继承
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 : private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;  //父类中的公共权限成员，到子类中变成私有权限
//		m_B = 100;  //父类中的保护权限成员，到子类中变成私有权限
//		//m_C = 100; //父类中的保护权限成员，子类中访问不到
//	}
//};
//
//class GrandSon : public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 100;   //此子类中皆为私有权限，无法访问
//		//m_B = 100;   //此子类中皆为私有权限，无法访问
//		//m_C = 100;
//	}
//};
//
//void test03()
//{
//	Son3 s3;
//	s3.func();
//}
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}