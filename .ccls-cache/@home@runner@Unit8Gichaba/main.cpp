include <iostream>
#include<string>
#include<iomanip>

using namespace std;
//Define structures 
struct car {
	string make;
	string model;
	int year;
	string color;
	void updateColor(car*); //pass by pointer
};

car update(string make, string model, int year);


int main() {
	car thisCar;

	car *myCar= &thisCar;
	

	thisCar= update("Ford", "F150", 1999);

	cout << "The make is: " << thisCar->make << "\nThe model is: " << myCar->model <<
		"\nThe year is: " << thisCar->year << "\nThe color is: " << myCar->color << endl;

	

}
car update(string make, string model, int year) {
	car Car;

	Car.make = make;
	Car.model = model;
	Car.year = year;

	if (year > 2010) {
		Car.color = "GREEN";
	}
	else {
		Car.color = "RED";
		system("pause");
	}
	return Car;

}