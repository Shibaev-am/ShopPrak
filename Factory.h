#pragma once
#include "Buildings.h"
#include "Shop.h"
#include "Storage.h"
#include "Trash.h"
#include "SuperStorage.h"
class Factory {
public:
	Factory() = default;
	virtual Building* createBuilding() = 0;
	virtual ~Factory() = default;
};

class ShopFactory : public Factory {
public:
	Building* createBuilding() override; // �������� ������� Shop
};

class TrashFactory : public Factory {
public:
	Building* createBuilding() override; // �������� ������� Trash
};

class StorageFactory : public Factory {
public:
	Building* createBuilding() override; // �������� ������� Storage
};

class SuperStorageFactory : public Factory {
public:
	Building* createBuilding() override; // �������� ������� SuperStorage
};