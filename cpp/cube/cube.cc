// Implementation of the Cube class/interface

#include "cube.h"

double Cube::getVolume() {
	return length * length * length; //l * w * h
}
double Cube::getSurfaceArea() {
	return 6 * length * length; // num_sides * length * width
}

double Cube::getLength() {
	return length;
}

void Cube::setLength(double len) {
	length = len;
}
