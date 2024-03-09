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
	double gox=0;
	double goy=0;
	double size=100;
	double spin=0;
};

class vsefiguri
{
public:
	void setCircleFigura();
	void setBoxFigura();
	void setSquareFigura();
	void coutista(const Figura& vivod);
	void coutistb(const Figura& vivod);
	void coutistc(const Figura& vivod);
	//void displayFigura();
	Figura getCircleFigura() const { return circle; }
	Figura getBoxFigura()const { return box; }
	Figura getSquareFigura()const { return square; }

private:
	Figura circle;
	Figura box;
	Figura square;
};
