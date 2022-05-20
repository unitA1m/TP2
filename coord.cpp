#include "coord.h"
#include <iostream>
using namespace std;


Coord::Coord() : x(0), y(0), z(0) {}

Coord::Coord(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

Coord::Coord(const Coord& other)
{
	this->x = other.x;
	this->y = other.y;
	this->z = other.z;
}


Coord& Coord::operator++() // префикс
{
	int number,v;
	int cnt = 0;
	int tmp = 0;
	cout << "На сколько хотите увеличить элемент?" << endl;
	cin >> number;
	cout << "Выберете координату 1:х 2:у 3:z " << endl;
	cin >> v;
	switch (v)
	{
	case 1:
		while (cnt != number) {
			this->x += 1;
			cnt++;
		}
	break;
	case 2:
		while (cnt != number) {
			this->y += 1;
			cnt++;
		}
	break;
	case 3:
		while (cnt != number) {
		this->z += 1;
		cnt++;
	}
	break;
	default: break;
	}

	return *this;
}

Coord& Coord::operator--(const int) // постфикс
{
	
	int number = 0;
	if (this->x < this->y) {
			number = this->x;
		}
		else number = this->y;
	if (this->z < number)
		number = this->z;

	
	int v = 0;
	cout << "Выберете координату 1:х 2:у 3:z " << endl;
	cin >> v;
	switch (v)
	{
	case 1:
		this->x += number;
		break;
	case 2:
		this->y += number;
		break;
	case 3:
		this->z += number;
		break;
	default: break;
	}

	return *this; 
}


void Coord::ChoiceAction(int value)
{
	choice = value;
}



void Coord::Inizilization(int x, int y, int z)
{
	this->x = x;
	this->y = y;
	this->z = z;

}

void Coord::GetCoord()
{
	cout << "X coord:" << this->x << "  Y coord:" << this->y << "  Z coord:" << this->z << endl;
}



Coord operator++(Coord& obj, const int) //постфикс друг 
{
	int number;
	int v = 0;
	if (obj.x > obj.y) {
		if (obj.x > obj.z) {
			number = obj.x;
		}
		else number = obj.z;
	}
	else if (obj.y > obj.z) {
		number = obj.y;
	}
	else number = obj.z;


	cout << "Выберете координату 1:х 2:у 3:z " << endl;
	cin >> v;
	switch (v)
	{
	case 1:
		for (int i = 0; i < number; i++) {
			obj.x += 1;
		}
		break;
	case 2:
		for (int i = 0; i < number; i++) {
			obj.y += 1;
		}
		break;
	case 3:
		for (int i = 0; i < number; i++) {
			obj.z += 1;
		}
		break;
	default: break;
	}

	return obj;
}


Coord& operator--(Coord&obj) //префикс друг
{
	int number,v;
	cout << "На сколько хотите уменьшить элемент?" << endl;
	cin >> number;
	cout << "Выберете координату 1:х 2:у 3:z " << endl;
	cin >> v;
	switch (v)
	{
	case 1:
	obj.x -= number;
	break;
	case 2:
	obj.y -=number;
	break;
	case 3:
	obj.z -= number;
	 break;
	default: break;
	}

	return obj;
}
