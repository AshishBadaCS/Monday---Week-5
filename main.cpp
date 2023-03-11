/**********************
Lab: Week 5
Student first name: Ashish
Student last name:Bada
***********************/
#include <iostream>
using namespace std;

// Vehicle
class Vehicle {
private:
  int wheels;
  int doors;

public:
  Vehicle(int w = 0, int d = 0) : wheels(w), doors(d) {}
  void print() {
    cout << wheels << " wheels and ";
    cout << doors << " doors." << endl;
  }
};

// Car
class Car : public Vehicle {
private:
  int mpg;
  string modelName;

public:
  Car(int w = 0, int d = 0, int m = 0, string n = "")
      : Vehicle(w, d), mpg(m), modelName(n) {}
  void print() {
    cout << modelName << " gets " << mpg << " miles per gallon and has ";
    Vehicle::print();
  }
};

// Truck
class Truck : public Vehicle {
private:
  int mpg;
  int tons;
  string modelName;

public:
  Truck(int w = 0, int d = 0, int m = 0, int t = 0, string n = "")
      : Vehicle(w, d), mpg(m), tons(t), modelName(n) {}
  void print() {
    cout << modelName << " gets " << mpg << " miles per gallon, can carry "
         << tons << " tons, and has ";
    Vehicle::print();
  }
};

int main() {
  // declare local variables
  int wheels, doors, mpg, tons;
  string modelName;

  cout << "Enter car details\n";
  cout << "Number of wheels: ";
  cin >> wheels;
  cout << "Number of doors: ";
  cin >> doors;
  cout << "MPG: ";
  cin >> mpg;
  cout << "Model name: ";
  cin >> modelName;

  // declare Car object
  Car car(wheels, doors, mpg, modelName);
  cout << endl;
  cout << "Enter truck details\n";
  cout << "Number of wheels: ";
  cin >> wheels;
  cout << "Number of doors: ";
  cin >> doors;
  cout << "MPG: ";
  cin >> mpg;
  cout << "How many tons can the truck carry: ";
  cin >> tons;
  cout << "Model name: ";
  cin >> modelName;
  // declare Truck object
  Truck truck(wheels, doors, mpg, tons, modelName);
  cout << endl;

  // call print function for your car and for your truck
  car.print();
  truck.print();

  cout << "\nGoodbye\n";
  return 0;
}

/***************************************
YOUR OUTPUT:


SAMPLE OUTPUT:
Enter car details
Number of wheels: 4
Number of doors: 4
MPG: 36
Model name: Toyota

Enter truck details
Number of wheels: 18
Number of doors: 2
MPG: 22
How many tons can the truck carry: 5
Model name: Peterbilt

Toyota gets 36 miles per gallon and has 4 wheels and 4 doors.
Peterbilt gets 22 miles per gallon, can carry 5 tons, and has 18 wheels and 2
doors.

Goodbye
****************************************/
