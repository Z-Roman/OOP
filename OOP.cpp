#include <iostream>
#include <string>
using namespace std;

class Human
{
public:

	int age;
	int weight;
	string name;
	
	void Print() // ����� (�������) ������
	{
		cout << "���\t" << name << "\n���\t" << weight << "\n�������\t" << age << "\n\n";
	}

};

class Point
{
private:

	int x;
	int y;

public:

	int GetX() // �������� �������� �
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	void SetX(int x) // ���������� �������� ��� �
	{
		this->x = x;
	} 
	void SetY(int y)
	{
		this->y = y;
	}

	Point() // ����������� �� ���������. ������������� �������� �����, ���� �� ���������� ������� ���������
	{
		x = 0;
		y = 0;
	}

	Point(int x, int y) // ����������� ������. ��������� ��������� ��� ����� ������.
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
		cout << "������ " << this->data << " �������� �����������\n\n";
	}

	~My_class() // ���������� ����� ���� ������ ���� � �� ��������� ����������
	{
		cout << "������ " << this->data << " �������� ����������\n\n";
	}
};

int main()
{
	setlocale(0, "");

	My_class a(1);
	My_class b(2);


	//Human firstHuman;    // ������ (���������, ����������) ������ Human
	//firstHuman.age = 30;
	//firstHuman.weight = 100;
	//firstHuman.name = "Ivanov Ivan";
	//firstHuman.Print();   // ����� ������ Print ��� ������� firstHuman

	//Point a(5, 44); 
	//Point b(25, 100);
	//a.Print();
	//b.Print();
	//int result = a.GetX();
	//cout << "result = " << result << "\n\n";
	


	return 0;
}