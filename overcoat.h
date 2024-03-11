#pragma once
#include <iostream>
#include<string>

using namespace std;

class Overcoat
{
private:
	string name = "None";
	string type = "None";
	int price = 0;

public:
	Overcoat() {
		name = "None";
		type = "None";
		price = 0;
	}
	Overcoat(string name, string type, int price) : name{ name }, type { type }, price{ price } {}
	Overcoat(string type, int price) : type{ type }, price{ price } {}
	Overcoat(int price) : price { price }{}
	Overcoat(string type) : type { type }{}
	
	bool operator == (Overcoat& obj)
	{
		if (obj.type == type) return true;
		return false;
	}
	bool operator >= (Overcoat& obj)
	{
		if (obj.name == name and obj.type == type and name == "пальто"){
			if (price >= obj.price) return true;
		}
		return false;
	}
	bool operator > (Overcoat& obj)
	{
		if (obj.name == name and obj.type == type and name == "пальто") {
			if (price > obj.price) return true;
		}
		return false;
	}
	bool operator < (Overcoat& obj)
	{
		if (obj.name == name and obj.type == type and name == "пальто") {
			if (price < obj.price) return true;
		}
		return false;
	}
	bool operator <= (Overcoat& obj)
	{
		if (obj.name == name and obj.type == type and name == "пальто") {
			if (price <= obj.price) return true;
		}
		return false;
	}
	void operator = (Overcoat& obj)
	{
		price = obj.price;
		type = obj.type;
		name = obj.name;
	}
	void print()
	{
		cout << "Название одежды: " << name << endl;
		cout << "Тип одежды: " << type << endl;
		cout << "Цена: " << price << endl;
	}
};