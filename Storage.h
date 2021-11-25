#pragma once
#include "Buildings.h"
class Storage : public Building {
public:
	Storage();
	virtual void checkApplications() override;
	virtual void checkOrder() override;
	virtual void updateDayInfo(Day* day) override;
	virtual ~Storage();
protected:
	virtual bool createApplication(Building* receiver) override;
	virtual void sendApplication(Building* receiver) override;
	virtual void receiveApplication(Application* application) override;
	virtual void sendProducts(Application* application) override;
	virtual void receiveProducts(Application* application) override;
	virtual Application* generateApplication(Building* receiver) override;
	virtual void distributionProducts() override;
	virtual int64_t getReputation(Building* building) override;
};
