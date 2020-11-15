#include<iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符
	MyInteger& operator++()  
	{
		m_Num++;
		return *this;
	}

	//重载后置++运算符
	MyInteger operator++(int)//函数的占位参数  只能是 int
	{
		//先 记录返回结果
		MyInteger temp = *this;
		
		//后 递增
		m_Num++;

		//最后将记录结果返回
		return temp;

	}

private:
	int m_Num;
};

//左移运算符重载
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_Num;
	return  cout;
}

void test01()
{
	MyInteger myint;
	cout << myint << endl;
	cout << ++(++myint) << endl;
	cout << myint << endl; // MyInteger& operator++()不加引用此输出将不为2
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
	cout << myint++ << endl;
	//cout << (myint++)++ << endl; /若/MyInteger operator++(int)使用&，将报错：函数运行完参数被释放，非法操作
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}