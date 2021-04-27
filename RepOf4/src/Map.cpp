#include"Map.h"

Map::Map() :size(0), capacity(3)
{
	locations = new Location[this->capacity];
}

Map::Map(int capacity): capacity(capacity), size(0)
{
	locations = new Location[this->capacity];

}

Map::Map(const Map& other)
{
	if (this != &other)
	{
		initialize(other);
	}
	
}

Map::~Map()
{
	delete[] locations;
}

void Map::initialize(const Map& other)
{
	this->capacity = other.capacity;
	this->size = other.size;
	this->locations = new Location[capacity];
	for (int i = 0; i < other.size; i++)
	{
		this->locations[i] = other.locations[i];
	}
}

void Map::resize()
{
	this->capacity *= 2;
	Location* sub = new Location[this->capacity];
	for (int i = 0; i < this->size; i++)
		sub[i] = this->locations[i];

	delete[] locations;

	this->locations = sub;
}

Map& Map::operator=(const Map& other)
{
	delete[] locations;

	initialize(other);
	 
	return *this;
	
}

void Map::addLocation(const Location& newLocation)
{
	if (this->size >= this->capacity ) {
		resize();
		locations[this->size++] = newLocation;
		
	}
	else
		locations[this->size++] = newLocation;
	
}

void Map::print()
{ 
	for (int i = 0; i < size;i++) 
	{
		locations[i].printData();
	}
	std::cout << "Capacity: " << this->capacity << std::endl;
	std::cout << "Size: " << this->size << std::endl;
}
