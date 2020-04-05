#include "Header.h"

Stroka::Stroka(char* string)
{
	strcpy(str, string);
}

Stroka::~Stroka()
{
	cout << "Деструктор вызван\n";
}


Stroka::Stroka(const Stroka& s)
{
	strcpy(str, s.str);
}


int Stroka::operator==(const Stroka& s)
{
	if ((strcmp(str, s.str)) == 0)
		return 1;
	else
		return 0;
}

int Stroka::dlina()
{
	return strlen(str);
}

int Stroka::dlina2()
{
	int i, len;
	for (i = 0; str[i]; i++)
		len = i + 1;
	return len;
}

void Stroka::vvod()
{
	cout << "Cin >> :" << endl;
	cin >> str;
}

void Stroka::vyvod()
{
	cout << "Cout << :" << endl;
	cout << str << endl;
}

Stroka& Stroka::operator+(const Stroka& s)
{
	this->concat(str, s.str);
	return *this;
}

void Stroka::concat(char* first, const char* second)
{
	for (int i = strlen(first); i < strlen(first) + strlen(second); i++)
		first[i] = second[i];
}

Stroka& Stroka::operator=(const Stroka& s)
{
	this->kopir(str, s.str);
	return *this;
}

void Stroka::kopir(char* dst, const char* src)
{
	for (int i = 0; i < strlen(dst); i++)
		dst[i] = src[i];
}

