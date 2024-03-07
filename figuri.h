#pragma once
#include<iostream>
#include<string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

struct Figura
{
	string name;
	int gox;
	int goy;
	int size;
	int spin;
};

class vsefiguri
{
public:
	void setCircleFigura();
	void setBoxFigura();
	void setSquareFigura();
	void displayFigura();
	Figura getCircleFigura();
	Figura getBoxFigura();
	Figura getSquareFigura();

private:
	Figura circle;
	Figura box;
	Figura square;
};