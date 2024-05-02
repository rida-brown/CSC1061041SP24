#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <unordered_map>
using namespace std;

enum Color {
	Red, Blue, White, Silver, Black
};

class Vehicle {
private:
	int price;
	string model;
	string make;
	int year;
	string VIN;
	Color color;
	int lotTime;

public:
	//Getters (inline)
	int getPrice() { return price; }
	string getModel() { return model; }
	string getMake() { return make; }
	int getYear() { return year; }
	string getVIN() { return VIN; }
	Color getColor() { return color; }
	int getTime() { return lotTime; }

	//Setters (inline)
	void setPrice(int price) { this->price = price; }
	void setModel(std::string model) { this->model = model; }
	void setMake(std::string make) { this->make = make; }
	void setYear(int year) { this->year = year; }
	void setVIN(std::string VIN) { this->VIN = VIN; }
	void setColor(Color color) { this->color = color; }
	void setTime(int time) { lotTime = time; }

	//Constructors
	////Default constructor; should indicate error in input and be used for testing
	Vehicle();
	////Main constructor; should be the one we use
	Vehicle(int price, std::string model, std::string make, int year, std::string VIN, Color color, int lotTime);
   
   //print info of car
	void displayInfo();
   
	//PrintInfo fx; prints ALL info in an organized manner
	void PrintInfo();

	//Necessary for file reading -CL
	static Color stringToEnumConverter(const std::string& str);
};

const std::unordered_map<std::string, Color> stringToEnum = {
    {"Red", Red},
    {"Blue", Blue},
    {"White", White},
    {"Silver", Silver},
    {"Black", Black}
};

#endif
