﻿// Lab6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "Header.h"

int main()
{
	setlocale(0, ""); 

	Stroka str1;
	str1.vvod();
	Stroka str2;
	str2.vvod();
	Stroka str3;
	str3 = str1;
	Stroka str4;
	str2.vyvod();
	str4 = str1 + str2 + str3;
	Stroka* str5;
	str5 = new Stroka[10];
	str5->vvod();
	cout << "lenght of str4 = " << str4.dlina() << endl;
	cout << "lenght of str4 calculated customly " << str4.dlina2() << endl;
	str4.vyvod();
	if (str1 == str4)
		cout << "строки str1 и str4 равны \n";
	else
		if (str1 == str3)
			cout << "строки str1 и str3 равны";
	delete str5;
}
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
