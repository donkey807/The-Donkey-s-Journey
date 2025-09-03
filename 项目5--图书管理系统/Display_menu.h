#pragma once
#ifndef _DISPLAY_MENU_H_
#define _DISPLAY_MENU_H_
class DISPLAY_MENU
{
public:
	void Print_main_menu();
	void Print_book_management();
	void Print_borrowing_management();
	void Print_data_mantenance();
	bool Return_to_main_menu(bool running);//·µ»ØÖ÷²Ëµ¥
};

#endif // !_DISPLAY_MENU_
