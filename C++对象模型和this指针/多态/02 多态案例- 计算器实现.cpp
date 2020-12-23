//#include<iostream>
//#include<string>
//
//using namespace std;
//
////常规方法和多态法实现计算器
////常规方法：
//class Calaulator
//{
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if(oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if(oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//	}
//	//如果想要扩展功能，需修改源码
//	//真实开发中，提倡 开闭原则
//	//开闭原则：对扩展进行开发，对修改进行关闭
//
//	int m_Num1;
//	int m_Num2;
//};
//
////利用多态实现计算器
////1.组织结构清晰
////2.可读性强
////3.维护方便
//
////实现计算器的抽象类
//class AbstractCalculator
//{
//public:
//	virtual int getResults()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
////加法计算器类
//class AddCalculator : public AbstractCalculator
//{
//public:
//	int getResults()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////减法计算器类
//class SubCalculator : public AbstractCalculator
//{
//public:
//	int getResults()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////乘法计算器类
//class MulCalculator : public AbstractCalculator
//{
//public:
//	int getResults()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//
//
//void test01()
//{
//	//创建计算器对象
//	Calaulator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//}
//
//void test02()
//{
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResults() << endl;
//	delete abc;
//
//	//减法计算
//    abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResults() << endl;
//	delete abc;
//
//	abc = new MulCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResults() << endl;
//	delete abc;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}