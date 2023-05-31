//#include<iostream>
//#include<string>
//#include<vector>
//#include"Client.h"
#include"Food.h"
#include"Supermarket.h"

//class Client {        // Перенесли в хедер и другой сппшник
//private:
//	int _id;
//public:
//	void ShowId() {
//		std::cout << "Id" << _id << '\n';
//	}
//};

int main() {
	setlocale(LC_ALL, "Russian");
	//Client* client = new Client(77);
	//client->ShowId();
	Supermarket* supermarket = new Supermarket();

	Bread* bread = new Bread("Bread", 25.0f, 1.25f, "White");
	Milk* milk = new Milk("Milk", 70.6f, 1.0f, 10);
	//bread->ShowData();
	std::cout << "\n\n";
	//milk->ShowData();

	supermarket->AddProduct(bread);
	supermarket->AddProduct(milk);


	supermarket->ShowDataProducts();
	std::cout << "\n\n";
	supermarket->Buy("Milk");
	supermarket->ShowDataProducts();






	return 0;
}