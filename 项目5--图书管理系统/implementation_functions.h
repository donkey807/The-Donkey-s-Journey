#pragma once
#ifndef _IMPLEMENTATION_FUNCTIONS_H_
#define _IMPLEMENTATION_FUNCTIONS_H_
class BOOK_MANAGEMENT//分支：图书管理
{
public:
	/*1. 新增图书
	2. 查询图书（支持按 ISBN / 书名 / 作者查询）
	3. 修改图书信息
	4. 删除图书
	5. 显示所有图书*/
	void Add_book();
	void Search_book();
	void Modify_book();
	void Delete_book();
	void Display_all_book();
	
};
class BORROWING_MANAGEMENT//分支：借阅管理
{
public:
	/*1. 借阅图书（需验证图书是否可借）
	2. 归还图书（需更新图书借阅状态）
	3. 查询借阅记录（按图书 / 按借阅人）
	*/
	void Borrow_book();
	void Return_book();
	void Search_borrow_record();
	

};
class DATA_MANTENANCE//分支：数据维护
{
public:
	/*1. 备份数据（将当前所有信息导出为文本文件）
	2. 恢复数据（从备份文件加载信息，覆盖当前数据）
	3. 清空所有数据（需二次确认，防止误操作）
	*/
	void Backup_data();
	void Restore_data();
	void Clear_data();
	
};

#endif // 实现各个分支功能