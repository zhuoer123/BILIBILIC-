#include<iostream>
#include<string>

using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class Graphics
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class Computer
{
public:
	Computer(CPU* cpu, Graphics * graphics, Memory * memory)
	{
		m_cpu = cpu;
		m_graphics = graphics;
		m_memory = memory;
	}

	~Computer()
	{
		if (m_cpu != NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}

		if (m_graphics != NULL)
		{
			delete m_graphics;
			m_graphics = NULL;
		}

		if (m_memory != NULL)
		{
			delete m_memory;
			m_memory = NULL;
		}
	}

	//工作函数
	void work()
	{
		//让零件工作起来，调用接口
		m_cpu->calculate();
		m_graphics->display();
		m_memory->storage();
	}
private:
	CPU* m_cpu;
	Graphics* m_graphics;
	Memory* m_memory;
};

//具体厂商
//Intel
class IntelCPU : public CPU
{
	virtual void calculate()
	{
		cout << "Intel CPU开始计算" << endl;
	}
};

//AMD
class AMDCPU : public CPU
{
public:
	virtual void calculate()
	{
		cout << "AMD CPU开始计算" << endl;
	}
};

//Navida
class NavidaGraphics : public Graphics
{
public:
	virtual void display()
	{
		cout << "Navida Graphics开始显示" << endl;
	}
};

//Samsung
class SamsungMemory : public Memory
{
public:
	virtual void storage()
	{
		cout << "Samsung Memory开始存储" << endl;
	}
};

void test01()
{
	//第一台电脑零件
	CPU* intelCpu = new IntelCPU;
	Graphics* Navidagra = new NavidaGraphics;
	Memory* SamsungMe = new SamsungMemory;

	//第一台电脑
	cout << "第一台电脑开始工作" << endl;
	Computer* c1 = new Computer(intelCpu, Navidagra, SamsungMe);
	c1->work();
	delete c1;

	cout << "----------------" << endl;
	//第二台电脑零件
	CPU* AMDCpu = new AMDCPU;
	Graphics* Navidagra2 = new NavidaGraphics;
	Memory* SamsungMe2 = new SamsungMemory;

	//第二台电脑
	cout << "第二台电脑开始工作" << endl;
	Computer* c2 = new Computer(AMDCpu, Navidagra2, SamsungMe2);
	c2->work();
	delete c2;


}

int main()
{
	test01();
	system("pause");
	return 0;
}