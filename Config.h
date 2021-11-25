#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <map>

struct Product;
struct WholesaleBox;
struct ElemInList;
struct Application;

class Building;
class Rules;

typedef std::vector<ElemInList> List;
namespace is {
	enum Builds {
		Shop,
		Storage,
		SuperStorage,
		Trash
	};

	enum Products {
		Product1,
		Product2,
		Product3,
		Product4,
		Product5
	};

	struct Product {
		std::string name;
		int64_t price_per_kg, package_size;
		int32_t storage_life;
		Product(std::string name, int64_t price_per_kg,
			int64_t package_size, int32_t storage_life) {
			this->name = name;
			this->price_per_kg = price_per_kg;
			this->package_size = package_size;
			this->storage_life = storage_life;
		}
	};

	struct WholesaleBox {
		Product* product;
		int64_t price;
		WholesaleBox(Product* product, int64_t price) {
			this->product = product;
			this->price = price;
		}
	};

	struct ElemInList {
		WholesaleBox* product;
		int64_t counter;
	};

	struct Application {
		Building* receiver, * customer;
		int64_t number_of_application;
		List* application;
	};

	struct ShopApplication {
		Application* application;
		int32_t number;
	};
}