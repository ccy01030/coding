#include <iostream>
#include <cstring>
using namespace std;

class Car
{
private:
	int gasolineGauge;
public:
	Car(int gas) : gasolineGauge(gas) {}
	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar(int gas, int ele) : Car(gas),electricGauge(ele) {}
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	HybridWaterCar(int gas, int ele, int water) :HybridCar(gas, ele),waterGauge(water) {}
	void ShowCurrentGauge()
	{
		cout << "rest gasolineGauge : " << GetGasGauge() << "\n";
		cout << "rest electricGauge : " << GetElecGauge() << "\n";
		cout << "rest waterGauge : " << waterGauge << "\n";
	}
};

int main(void)
{
	HybridWaterCar HyCar(100,90,80);
	HyCar.ShowCurrentGauge();
	return 0;
}