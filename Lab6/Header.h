#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>

using namespace std;




class Stroka {
	char str[80];

public:
	// Конструктор класса 
	Stroka(char*);
	Stroka(const char*);
	// Конструктор класса 
	Stroka() {}
	~Stroka(); //Деструктор класса
	Stroka(const Stroka&); // Конструктор копирования
	Stroka& operator=(const Stroka&); // переопределение/перегрузка операции присваивания
	Stroka& operator+(const Stroka&); // переопределение операции сложения
	int operator==(const Stroka&); // переопределение операции сравнения
	int dlina();
	int dlina2();
	void vvod();
	void vyvod();
	void concat(char* first, const char* second);
	void kopir(char* first, const char* second);
};

