#pragma once
#include"Location.h"

class Map
{
private:
	Location* locations = new Location[1];
	int size = 0, capacity = 0;
	void initialize(const Map& other);
	void resize();

public:
	Map();
	Map(const int capacity);
	Map(const Map& other);
	~Map();
	Map& operator= (const Map& other);
	void addLocation(const Location& newLocation);
	void print();



};