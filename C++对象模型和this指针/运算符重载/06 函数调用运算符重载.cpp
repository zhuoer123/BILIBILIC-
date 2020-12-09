#include<iostream>
#include<string>

using namespace std;

class MyPrint
{
public:
	void operator()(string text)
	{
		cout << text << endl;
	}
};

void MyPrint2(string text)
{
	cout << text << endl;
}

void test01()
{
	MyPrint myprint;
	myprint("Hello World!");//使用起来很像函数调用，称为仿函数
	MyPrint2("Hello World!");

}

//仿函数非常灵活，没有固定的写法
//加法类
class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << ret << endl;

	//匿名函数对象
	cout << "ret = " << MyAdd()(100, 100) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}