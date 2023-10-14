// runner script
#include <iostream>
#include "cube.h"

using namespace std;

int main() {
	// Instantiate cube class
	Cube c;
	c.setLength(21.3);
	double volume = c.getVolume();
	double area = c.getSurfaceArea();
	cout << "Cube Volume: " << volume << endl;
	cout << "Cube Surface Area: " << area << endl;

	return 0;

}