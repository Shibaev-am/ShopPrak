#pragma once
#include "Config.h"
#include "Day.h"
class Building {
public:
	Building();
	Building(std::vector<Building*> buildings);
	virtual void checkApplications() = 0; // ���������, ��� ����� ���������
	virtual void checkOrder() = 0; // ���������, ��� ����� ��������
	virtual void updateDayInfo(Day* day) = 0; // �������� ���������� �� ���
	virtual ~Building();
protected:
	virtual bool createApplication(Building* receiver) = 0; // �������� ������
	virtual void sendApplication(Building* receiver) = 0; // �������� ������
	virtual void receiveApplication(is::Application* application) = 0; // ����� ������
	virtual void sendProducts(is::Application* application) = 0; // �������� ���������
	virtual void receiveProducts(is::Application* application) = 0; // ����� ���������
	virtual is::Application* generateApplication(Building* receiver) = 0; // ��������� ������
	virtual void distributionProducts() = 0; // ������������� ���������
	virtual int64_t getReputation(Building* building) = 0; // ����������, ��� �� ��������� � building 

	std::map<Building*, is::Application*> today_applications; // �� ��� �� �������� �������
	std::vector<std::vector<is::Application*>> applications; // �� ��� �� ����������
	std::vector<is::List> products; // �� ��� ����� ������
	std::vector<is::Application*> expected_applications; // ������, ������� �� �������
	std::map<Building*, int64_t> reputations; // ��� �� ��������� � ������� �������
	int64_t category; // � ����� ��������� ��������� ������
	std::vector<Building*> buildings_offer; // � ���� �� ����� ����������
};

