#pragma once
#include<iostream>
#include<cstring>

class Location
{
private:
	char* name = new char[1];
	double xLoc = 0, yLoc = 0;

public:
	Location();
	Location(const char* name, double xLoc, double yLoc);
	~Location();
	Location(const Location& other);
	void initialize(const Location& other);
	Location& operator= (const Location& other);
	void printData();
	
};
