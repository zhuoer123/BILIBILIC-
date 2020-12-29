//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//
////文件操作 读文件
//void test01()
//{
//	//1. 包含头文件
//
//	//2. 创建流对象
//	ifstream ifs;
//
//	//3.打开文件，判断是否打开成功
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4. 读数据
//	//方法1：
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//	
//	//方法2：
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//方法3：
//	string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}
//
//	//方法4： 不推荐
//	//char c;
//	//while ((c = ifs.get()) != EOF) //EOF -> end of file
//	//{
//	//	cout << c;
//	//}
//
//	//5. 关闭文件
//	ifs.close();
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}