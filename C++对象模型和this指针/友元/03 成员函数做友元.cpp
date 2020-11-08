#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay
{

public:
	GoodGay();
	
	void visit(); //可以访问类的私有属性
	void visit2(); //不可以访问类的私有属性

private:
	Building* building;
};

class Building
{
	//GoodGay类下的visit可以访问
	friend void GoodGay::visit();
public:
	Building();

public:
	string m_SittingRoom;

private:
	string m_BedRoom;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit()
{
	cout << "好基友访问的是" << building->m_SittingRoom << endl;
	cout << "好基友访问的是" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "好基友访问的是" << building->m_SittingRoom << endl;
	//cout << "好基友访问的是" << building->m_BedRoom << endl;
}

void test01()
{
	GoodGay gg;
	gg.visit();
	gg.visit2();
}

int main()
{
	test01();
	system("pause");
	return 0;
}