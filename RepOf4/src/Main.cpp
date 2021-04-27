#include"Location.h"
#include"Map.h"


int main() 
{
	
	char arr[] = "Visos";

	Location loc(arr, 3 , 4);
	Location loc2;
	Location loc3(loc);
	Location loc4(loc);

	Map map1;
	map1.addLocation(loc2);
	map1.addLocation(loc3);
	map1.addLocation(loc);
	map1.addLocation(loc4);
	map1.print();
	

	return 0;
}