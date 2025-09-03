#include <iostream>
#include "Display_menu.h"
using namespace std;

void DISPLAY_MENU::Print_main_menu()
{
	cout << "================ 个人图书管理系统 ================" << endl;
	cout << "1. 图书管理（子菜单）" << endl;
	cout << "2. 借阅管理（子菜单）" << endl;
	cout << "3. 数据维护（子菜单）" << endl;
	cout << "4. 退出系统" << endl;
	cout << "==================================================" << endl;
	cout << "请输入您的选择（1 - 4）：" << endl;
}
void DISPLAY_MENU::Print_book_management()
{
	cout << "================ 图书管理 ================" << endl;
	cout << "1. 新增图书" << endl;
	cout << "2. 查询图示（支持按ISBN/书名/作者查询）" << endl;
	cout << "3. 修改图书信息" << endl;
	cout << "4. 删除图书" << endl;
	cout << "5.显示所以图书" << endl;
	cout << "6.返回主菜单" << endl;
	cout << "==================================================" << endl;
	cout << "请输入您的选择（1 - 6）：" << endl;
}


void DISPLAY_MENU::Print_borrowing_management()
{
	cout << "================ 借阅管理 ================" << endl;
	cout << "1. 借阅图书（需验证图书是否可借）" << endl;
	cout << "2. 归还图书（需更新图书借阅状态）" << endl;
	cout << "3. 查询借阅记录（按图书/按借阅人）" << endl;
	cout << "4. 返回主菜单" << endl;
	cout << "==================================================" << endl;
	cout << "请输入您的选择（1 - 4）：" << endl;
}
void DISPLAY_MENU::Print_data_mantenance()
{
	cout << "================ 数据维护 ================" << endl;
	cout << "1. 备份数据（将当前所有信息导出为文本文件）" << endl;
	cout << "2. 恢复数据（从备份文件加载信息，覆盖当前数据）" << endl;
	cout << "3. 清空所有数据（需二次确认，防止误操作）" << endl;
	cout << "4. 返回主菜单" << endl;
	cout << "==================================================" << endl;
	cout << "请输入您的选择（1 - 4）：" << endl;
}

bool Return_to_main_menu(bool running)
{
	running = false;
	return running;

}

