#pragma once
#include<vector>
#include"Food.h"

class Supermarket {
private:
	std::vector<Food*>_products;

	Food* SearchByName(std::string name);

public:
	void ShowDataProducts();


	void Buy(std::string name);

	void AddProduct(Food* food);
};
