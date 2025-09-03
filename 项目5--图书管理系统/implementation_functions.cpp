#include "implementation_functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;



//新增图书于文本文件，如果文本不存在，自动创建在指定文件夹下
void BOOK_MANAGEMENT::Add_book()
{
	char key = 0;//用于再次确认是否新增图书
	string book_name;//书名
	string writer;//作者名
	string library;//图书馆名
	char running = true;
	char stop = 0;

	cout << "请输入您要写入的位置" << endl;
	cin >> library;
	ofstream ofs(library+".txt",ios::app);//创建/打开文本文件

	if (!ofs)//打开文件失败
	{
		cerr << "打开仓库失败，或仓库不存在" << endl;
	}
	cout << "打开仓库：" << library << endl;


	while (running)
	{
		
		cout << "请输入您要增加的图书" << endl;
		cin >> book_name;
		cout << "请输入作者的名字" << endl;
		cin >> writer;
		cout << "确定新增图书？(y/n)" << endl;
		cin >> key;



		if (key == 'n' || key == 'N')
		{
			cout << "已取消新增图书" << endl;
			continue;
		}
		else if (key != 'y' && key != 'Y')
		{
			cout << "输入错误，已重新新增图书" << endl;
			continue;
		}
		else
		{
			ofs << book_name << " " << writer << endl;
			cout << "成功添加图书" << endl;
		}

		cout << "是否停止存书？" << endl;
		cin >> stop;
		while(true)
		{
			if (stop == 'y' || stop == 'Y')
			{
				running = false;//跳出外层循环
				cout << "成功停止存书,欢迎下次光临" << endl;
				break;//跳出内层循环
			}
			else
			{
				break;
			}
		}
		
		
	}
	
}

//可根据书名和作者查找以删除该图书信息（查找是否存在->删除对于作者和书名）
void BOOK_MANAGEMENT::Delete_book()
{
	char key = 0;//用于再次确认是否删除图书
	string book_name;//书名
	string writer;//作者名
	string library;//图书馆名
	string line;//读取到的行
	char running = true;
	char stop = 0;

	cout << "请输入您要进入仓库的名字" << endl;
	cin >> library;
	
	while (running)
	{

		cout << "请输入您要删除的图书" << endl;
		cin >> book_name;
		cout << "请输入作者的名字" << endl;
		cin >> writer;
		cout << "确定删除图书？(y/n)" << endl;
		cin >> key;



		if (key == 'n' || key == 'N')
		{
			cout << "已取消新增图书" << endl;
			continue;
		}
		else if (key != 'y' && key != 'Y')
		{
			cout << "输入错误，已重新新增图书" << endl;
			continue;
		}
		else
		{
			// 1. 先把文件所有内容读到内存
			std::ifstream in(library + ".txt");  // 打开文件
			if (!in.is_open())
			{
				cout << "无法打开仓库，删除失败" << endl;
				break;
			}

			std::ostringstream buf;
			buf << in.rdbuf();  // 全部读入内存
			std::string content = buf.str();
			in.close();

			// 2. 筛选内容（跳过目标行）
			std::istringstream iss(content);  // 把内存内容当文件读
			std::ostringstream oss;           // 存筛选后的内容
			std::string line;

			while (std::getline(iss, line)) {  // 一行一行读
				// 如果这一行不是"书名 作者"，就保留
				if (line != book_name + " " + writer) {
					oss << line << '\n';  // 写入新内容
				}
				// 如果是目标行，就什么都不做（相当于删除）
			}

			// 3. 写回文件（覆盖原内容）
			std::ofstream out(library + ".txt", std::ios::trunc);  // 清空原文件
			out << oss.str();  // 写入筛选后的内容
			out.close();
		}

		cout << "是否停止删除书？(y/n)" << endl;
		cin >> stop;
		while (true)
		{
			if (stop == 'y' || stop == 'Y')
			{
				running = false;//跳出外层循环
				cout << "成功停止删除书,欢迎下次光临" << endl;
				break;//跳出内层循环
			}
			else
			{
				break;
			}
		}
	}
	

}
//显示所有图书
void BOOK_MANAGEMENT::Display_all_book()
{
	char key = 0;
	string library;//图书馆名
	char running = true;
	char stop = 0;

	while (running)
	{
		cout << "请输入您要打开的仓库" << endl;
		cin >> library;
		ofstream ofs(library + ".txt", ios::app);//创建/打开文本文件

		if (!ofs)//打开文件失败
		{
			cerr << "打开仓库失败，或仓库不存在" << endl;
		}
		cout << "打开仓库：" << library << endl;

		ifstream in(library + ".txt");
		if (!in.is_open())
		{
			cout << "无法打开文件，删除失败" << endl;
			break;
		}

		std::ostringstream buf;
		buf << in.rdbuf();  // 全部读入内存
		std::string content = buf.str();
		in.close();
		cout << "输出结果为" << endl;
		cout << buf.str();//输出内容
		cout << "是否停止读取仓库？" << endl;
		cin >> stop;
		while (true)
		{
			if (stop == 'y' || stop == 'Y')
			{
				running = false;//跳出外层循环
				cout << "成功停止读取仓库,欢迎下次光临" << endl;
				break;//跳出内层循环
			}
			else
			{
				break;
			}
		}
	}
}
//修改图书信息
void BOOK_MANAGEMENT::Modify_book()
{
	char key = 0;//用于再次确认是修改图书
	string book_name;//书名
	string writer;//作者名
	string library;//图书馆名
	string line;//读取到的行
	char running = true;
	char stop = 0;


	cout << "请输入您要进入仓库的名字" << endl;
	cin >> library;

	while (running)
	{

		cout << "请输入您要修改的图书" << endl;
		cin >> book_name;
		cout << "请输入作者的名字" << endl;
		cin >> writer;
		cout << "确定修改图书？(y/n)" << endl;
		cin >> key;


		if (key == 'n' || key == 'N')
		{
			cout << "已取消修改图书" << endl;
			continue;
		}
		else if (key != 'y' && key != 'Y')
		{
			cout << "输入错误，已重新修改图书" << endl;
			continue;
		}
		else
		{
			// 1. 先把文件所有内容读到内存
			std::ifstream in(library + ".txt");  // 打开文件
			if (!in.is_open())
			{
				cout << "无法打开仓库，修改失败" << endl;
				break;
			}

			std::ostringstream buf;
			buf << in.rdbuf();  // 全部读入内存
			std::string content = buf.str();
			in.close();

			// 2. 筛选内容（跳过目标行）
			std::istringstream iss(content);  // 把内存内容当文件读
			std::ostringstream oss;           // 存筛选后的内容
			std::string line;

			while (std::getline(iss, line)) // 在iss一行一行读
			{  
				// 如果这一行不是"书名 作者"，就保留

				if (line != book_name + " " + writer) {
					oss << line << '\n';  // 写入新内容到oss
				}

				// 如果是目标行，就修改
				if(line == book_name + " " + writer)
				{
					string new_book_name;
					string new_writer;
					cout << "请输入新的书名" << endl;
					cin >> new_book_name;
					cout << "请输入新的作者" << endl;
					cin >> new_writer;
					oss << new_book_name + " " + new_writer << '\n';//写入修改后的内容
				}

			}

			// 3. 写回文件（覆盖原内容）
			std::ofstream out(library + ".txt", std::ios::trunc);  // 清空原文件
			out << oss.str();  // 写入筛选后的内容

			cout << "修改成功" << endl;
			out.close();
		}


		cout << "是否停止修改书？(y/n)" << endl;
		cin >> stop;
		while (true)
		{
			if (stop == 'y' || stop == 'Y')
			{
				running = false;//跳出外层循环
				cout << "成功停止修改书,欢迎下次光临" << endl;
				break;//跳出内层循环
			}
			else
			{
				break;
			}
		}
	}

}
void BOOK_MANAGEMENT::Search_book()
{
	char key = 0;//用于再次确认是否查找图书
	string book_name;//书名
	string writer;//作者名
	string library;//图书馆名
	string line;//读取到的行
	char running = true;
	char stop = 0;
	while (running)
	{
		cout << "请输入您要进入仓库的名字" << endl;
		cin >> library;
		// 1. 先把文件所有内容读到内存
		std::ifstream in(library + ".txt");  // 打开文件
		if (!in.is_open())
		{
			cout << "无法打开仓库，修改失败" << endl;
			break;
		}

		cout << "请输入您要查找的图书" << endl;
		cin >> book_name;
		cout << "请输入作者的名字" << endl;
		cin >> writer;
		cout << "确定查找该图书？(y/n)" << endl;
		cin >> key;


		if (key == 'n' || key == 'N')
		{
			cout << "已取消查找该图书" << endl;
			continue;
		}
		else if (key != 'y' && key != 'Y')
		{
			cout << "输入错误，已重新查找图书" << endl;
			continue;
		}
		else
		{
			std::ostringstream buf;
			buf << in.rdbuf();  // 全部读入内存
			std::string content = buf.str();
			in.close();

			// 2. 筛选内容（跳过目标行）
			std::istringstream iss(content);  // 把内存内容当文件读
			std::ostringstream oss;           // 存筛选后的内容
			std::string line;

			while (std::getline(iss, line)) // 在iss一行一行读
			{
				int count = 0;//行数
				// 如果这一行不是"书名 作者"，就保留

				if (line != book_name + " " + writer) {
					count++;
					oss << line << '\n';  // 写入新内容到oss
				}

				// 如果是目标行，就列出
				if (line == book_name + " " + writer)
				{
					cout << "成功找到该图书信息为：第" << count + 1 << "行 " << line << endl;
					oss << line << '\n';
				}

			}
			// 3. 写回文件（覆盖原内容）
			std::ofstream out(library + ".txt", std::ios::trunc);  // 清空原文件
			out << oss.str();  // 写入筛选后的内容

			cout << "修改成功" << endl;
			out.close();



			cout << "是否停止修改书？(y/n)" << endl;
			cin >> stop;
			while (true)
			{
				if (stop == 'y' || stop == 'Y')
				{
					running = false;//跳出外层循环
					cout << "成功停止查找书,欢迎下次光临" << endl;
					break;//跳出内层循环
				}
				else
				{
					break;
				}


			}
		}
	}
}
	


void BORROWING_MANAGEMENT::Borrow_book()
{

}
void BORROWING_MANAGEMENT::Return_book()
{
}
void BORROWING_MANAGEMENT::Search_borrow_record()
{
}












void DATA_MANTENANCE::Backup_data()
{
}
void DATA_MANTENANCE::Restore_data()
{
}
void DATA_MANTENANCE::Clear_data()
{
}
