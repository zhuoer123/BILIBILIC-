//#include<iostream>
//#include<string>
//using namespace std;
//
////加号运算符重载
////内置数据类型的运算符 不可重载
////不要滥用运算符
//
//class Person
//{
//public:
//	//1.成员函数重载“+”
//	//Person operator+(Person& p)
//	//{
//	//	Person temp;
//	//	temp.m_A = this->m_A + p.m_A;  //this指向 Person()自身的对象
//	//	temp.m_B = this->m_B + p.m_B;
//	//	return temp;
//	//}
//
//public:
//	int m_A;
//	int m_B;
//};
//
////2.全局函数重载“+”
//Person operator+(Person& p1, Person& p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_A + p2.m_A;
//	return temp;
//}
//
////函数重载的版本
//Person operator+(Person& p1, int num)
//{
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_A + num;
//	return temp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//成员函数的重载 本质是  调用
//	//Person p3 = p1.operator+(p2);
//	//Person p3 = p1 + p2;
//
//	//全局函数的重载 本质是 调用
//	//Person p3 = operator+(p1, p2);
//	Person p3 = p1 + p2;
//
//	Person p4 = p1 + 100;
//
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}