#include<iostream>
#include<string>

using namespace std;

//继承的实现
//公共页面类
class BasePage
{
public:
	void header()
	{
		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
	}

	void footer()
	{
		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
	}

	void left()
	{
		cout << "Java, Python, C++、...（公共分类列表）" << endl;
	}
};


//继承的好处：减少重复代码
//语法 class 子类 ：继承方式  父类
//子类 也称 派生类
//父类 也称 基类


//Java界面
class Jave : public BasePage
{
public:
	void content()
	{	
		cout << "Java学科视频" << endl;
	}
};

//Python界面
class PYTHON : public BasePage
{
public:
	void content()
	{
		cout << "Python学科视频" << endl;
	}
};

//C++界面
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "C++学科视频" << endl;
	}
};

void test01()
{
	cout << "Java下载视频界面如下：" << endl;
	Jave ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();

	cout << "--------------------" << endl;
	PYTHON py;
	py.header();
	py.footer();
	py.left();
	py.content();

	cout << "--------------------" << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();

}

int main()
{
	test01();
	system("pause");
	return 0;
}