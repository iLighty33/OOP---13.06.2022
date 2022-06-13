#include <iostream>
#include <string>

/*
#include <list>
#include <vector>
#include <set>
#include <map>
#include <deque>
#include <iterator>
*/

using namespace std;

// Задача 1
/*
class A {
public:
	int f00()
	{
		static int i = 0;
		return i++;
	}
	static int getCount()
	{
		return count;
	}
private:
	static int count;
};
int A::count = 0;

class SmartPointer {
public:
	int& operator*()
	{
		return *data;
	}
	int* operator->()
	{
		return data;
	}
private:
	int* data;
	//List::Node* data;
};

int main()
{

	std::vector<int> coll1;
	std::list<int> coll2;
	std::set<int> coll3;

	for (size_t i = 0; i < 10; i++)
	{
		coll1.push_back(_Val:i);
		coll2.push_back();
		coll3.
	}

	std::set<int>::iterator start = coll3.begin();
	std::set<int>::iterator finish = coll3.end();

	for (; start != finish; start++)
	{
		std::cout << *start << ' ';
	}

	A::getCount();
	A().f00();

	return 0;
}
*/

// Задача 2
/*
class Beast {
public:
	Beast(const char* str) :sound(str) {}

	void setSound(const char* str)
	{
		sound = str;
	}
	void say() const
	{
		std::cout << sound << endl;
	}
private:
	std::string sound;
};

class Chicken: virtual public Beast {
public:
	Chicken() : Beast("qoqoqo") {}
	void Bar()
	{
		std::cout << "bar from A\n";

	}
	void say() const
	{
		std::cout << sound << "\n";
	}
private:
	const char sound[5]{ "qoqo" };
};

class Frog: virtual public Beast {
public:
	Frog() : Beast("quack") {}
	void f00()
	{
		std::cout << "f00 from B\n";
	}
};

class Duck : public Chicken, public Frog {
	Duck(): Chicken(), Frog(), Beast("cryack")
	{
		//A::setSound("cryack");
		//B::setSound("cryack");
	}
};

int main()
{
	Duck duck;
	duck.Bar();
	duck.f00();
	duck.Chicken::say();
	return 0;
}
*/

class Vehicle {
public:
	Vehicle() {};
	virtual ~Vehicle() {};

	void setMoving(bool isMoving)
	{
		isMoving_ = isMoving;
	}
	bool getMoving() const
	{
		return isMoving_;
	}

	void setName(string name)
	{
		name_ = name;
	}
	string getName() const
	{
		return name_;
	}

	void setPassengers(int quantityPassengers)
	{
		quantityPassengers_ = quantityPassengers;
	}
	int getPassangers() const
	{
		return quantityPassengers_;
	}

	void setBeepSignals(string beep1, string beep2)
	{
		beepSignal_[1] = beep1;
		beepSignal_[2] = beep2;
	}
	string getBeepSignals() const
	{
		return beepSignal_[1] + " " + beepSignal_[2] + "\n";
	}


	void setVelocity(int velocity)
	{
		velocity_ = velocity;
	}
	int getVelocity() const
	{
		return velocity_;
	}

	void setColor(string color)
	{
		color_ = color;
	}
	string getColor() const
	{
		return color_;
	}

private:
	bool isMoving_ = 0;
	string name_ = "";
	int quantityPassengers_ = 4;
	string beepSignal_[2] = { "beep", "beep beep" };
	int velocity_ = 0;
	string color_ = "Black";
};

class Motoric: virtual public Vehicle {
public:
	void setNeedRefueling(bool needRefueling)
	{
		needRefueling_ = needRefueling;
	}
	bool getNeedRefueling() const
	{
		return needRefueling_;
	}
private:
	bool needRefueling_ = false;
};

class Muscular : virtual public Vehicle {
public:
	void setBurnedColories(int burnedColories)
	{
		burnedColories_ = burnedColories;
	}
	int getBurnedColories() const
	{
		return burnedColories_;
	}

private:
	int burnedColories_ = 0;
};

class Electrical : public Motoric {
public:
	void setIsCharging(int isCharging)
	{
		isCharging_ = isCharging;
	}
	bool getIsCharging()const
	{
		return isCharging_;
	}

private:
	bool isCharging_ = false;
};

class Bensine : public Motoric {
public:
	void setFuelCapacity(int fuelCapacity)
	{
		fuelCapacity_ = fuelCapacity;
	}
	int getFuelCapacity() const
	{
		return fuelCapacity_;
	}
private:
	int fuelCapacity_ = 0;
};

class Bicycles : public Muscular {
public:
	void setWheels(int wheels)
	{
		wheelsCounter_ = wheels;
	}
private:
	int wheelsCounter_ = 4;
};

class Scooter : public Muscular {
public:
	void setTransmition(int transmition)
	{
		transmitionType_ = transmition;
	}
	int getTransmition() const
	{
		return transmitionType_;
	}
private:
	int transmitionType_ = 0;
};

class ElectroBicycles : public Motoric, public Muscular {
public:
private:
};

class ElectroScooters : public Motoric, public Muscular {
public:
private:
};

int main()
{

	return 0;
}