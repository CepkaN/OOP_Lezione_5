﻿#pragma once
#include<string>
#include<iostream>

class Food {
private:
	std::string _name;
	float _condition;
	float _price;
	float _weight;
public:
	Food(std::string name, float price, float weight);


	//virtual void ShowData() = 0;
	virtual void ShowData();
	std::string GetName() const { return _name; }
};

class Bread :public Food {
private:
	std::string _typeBread;
public:
	// раскидываем аргументы наследника
	//Bread(std::string name, float price, float weight, std::string type) : Food(name, price, weight), _typeBread(type){}
	Bread(std::string name, float price, float weight, std::string type);
	void ShowData()override;
};

//Bread* f = new Bread("kg", 45, 34,"khgf");
class Milk :public Food {
private:
	int _fatPercent;
public:
	//Milk(std::string name, float price, float weight,int fat) :Food(name, price, weight) {}
	Milk(std::string name, float price, float weight, int fat);
	void ShowData()override;
};