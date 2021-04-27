#include"Location.h"

Location::Location() : xLoc(0), yLoc(0)
{
	
	name = new char[8];
	strcpy_s(name, 8, "Lozenec");
}

Location::Location(const char* name, double xLoc, double yLoc):xLoc(xLoc), yLoc(yLoc)
{
	
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

Location::~Location()
{
	delete[] name;
}

Location::Location(const Location& other)
{
	if (this != &other) {
		initialize(other);
	}
}

void Location::initialize(const Location& other)
{
	this->xLoc = other.xLoc;
	this->yLoc = other.yLoc;
	this->name = new char[strlen(other.name) + 1];
	strcpy_s(this->name, strlen(other.name) + 1, other.name );


}

Location& Location::operator=(const Location& other)
{
	delete this->name;
	initialize(other);

	return *this;
}

void Location::printData()
{
	std::cout << "Location name: " << name << std::endl;
	std::cout << "X coordinate: " << xLoc << std::endl;
	std::cout << "Y coordinate: " << yLoc << std::endl;

}
