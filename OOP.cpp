#include <iostream>
#include <string>
using namespace std;

class Human
{
public:

	int age;
	int weight;
	string name;
	
	void Print() // метод (функция) класса
	{
		cout << "Имя\t" << name << "\nВес\t" << weight << "\nВозраст\t" << age << "\n\n";
	}

};

class Point
{
private:

	int x;
	int y;

public:

	int GetX() // получить значение х
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void SetX(int x) // установить значение для х
	{
		this->x = x;
	} 
	void SetY(int y)
	{
		this->y = y;
	}

	Point() // конструктор по умолчанию. Устанавливает значения полей, если не передались никакие параметры
	{
		x = 0;
		y = 0;
	}

	Point(int x, int y) // конструктор класса. принимает параметры для полей уласса.
	{
		this->x = x;
		this->y = y;
	}

	void Print()
	{
		cout << "x = " << x << "\ny = " << y << "\n\n";
	}


};

class My_class
{
	int data;

public:
	My_class(int data)
	{
		this->data = data;
		cout << "Объект " << this->data << " Вызвался Конструктор\n\n";
	}

	~My_class() // Деструктор может быть только один и не принимает параметров
	{
		cout << "Объект " << this->data << " Вызвался Деструктор\n\n";
	}
};

int main()
{
	setlocale(0, "");

	My_class a(1);
	My_class b(2);


	//Human firstHuman;    // объект (экземпляр, переменная) класса Human
	//firstHuman.age = 30;
	//firstHuman.weight = 100;
	//firstHuman.name = "Ivanov Ivan";
	//firstHuman.Print();   // вызов метода Print для объекта firstHuman

	//Point a(5, 44); 
	//Point b(25, 100);
	//a.Print();
	//b.Print();
	//int result = a.GetX();
	//cout << "result = " << result << "\n\n";
	


	return 0;
}