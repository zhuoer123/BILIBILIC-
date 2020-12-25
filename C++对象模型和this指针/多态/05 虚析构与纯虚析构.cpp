//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal构造函数的调用" << endl;
//	}
//
//
//	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
//	//子类中没有堆区数据 则可不写虚析构与纯虚析构
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal虚析构函数的调用" << endl;
//	//}
//
//	//纯虚析构函数  需要声明与实现
//	//有了纯虚析构之后  这个类也属于抽象类，无法实例化对象
//	virtual ~Animal() = 0;
//
//	//纯虚函数
//	virtual void spaek() = 0;
//
//};
//
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		m_Name = new string(name);
//		cout << "Cat构造函数的调用" << endl;
//	}
//
//	virtual void spaek()
//	{
//		cout << "小猫" << *m_Name << "在说话" << endl;
//	}
//
//
//	~Cat()
//	{
//		if(m_Name != NULL)
//		{
//			cout << "Cat析构函数调用" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//
//	string * m_Name;
//};
//
//void test01()
//{
//	Animal* Animal = new Cat("Tom");
//	Animal->spaek();
//	delete Animal;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}