// cube header files
// .h files define variables, function and class declarations (interface to a class for classes)
// this definition of interfaces in header files separate from their implementations is referred to as encapsulation

#pragma once

class Cube {
public:
	double getSurfaceArea();
	double getVolume();
	double getLength();
	void setLength(double len);

private:
	double length;
	
};

