//#include<iostream>
//using namespace std;
//
////作用：输出自定义数据类型
//
//class Person
//{
//	friend ostream& operator <<(ostream& out, Person& p);
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数重载左移运算符
//ostream & operator <<(ostream &out, Person &p) //函数类型加& 由于返回值是out 需要ostream &
//{
//	out << "m_A = " << p.m_A << "	m_B =" << p.m_B;
//	return out;
//}
//
//void test01()
//{
//	Person p(10, 10);
//	cout << p << "  Hello World!" << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}