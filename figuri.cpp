#include "figuri.h"

void vsefiguri::setCircleFigura()
{
	cout << "Your figure is a circle." << endl;
	cout << "Moving along the axis x: ";
	cin >> circle.gox;
	cout << "Moving along the axis y: ";
	cin >> circle.goy;
	cout << "Change the size to: ";
	cin >> circle.size;
	cout << "How many degrees should the figure be rotated ? ";
	cin >> circle.spin;
	circle.x += circle.gox;
	circle.y += circle.goy;
	/*cout << "The figure is a circle. Moved to " << circle.gox << " on the x-axis and on " << circle.goy << " on the y-axis.";
	cout << "You have changed the size of the shape to " << circle.size << " and turned the figure to " << circle.spin << " degrees.";*/
}
void vsefiguri::coutista(const Figura& vivod)
{
	cout << "The figure is a circle. Moved to " << circle.gox << " on the x-axis and on " << circle.goy << " on the y-axis.";
	cout << "You have changed the size of the shape to " << circle.size << " and turned the figure to " << circle.spin << " degrees." << endl;
	cout << "Your coordinates:" << circle.x << " and " << circle.y<< endl;
}

void vsefiguri::setBoxFigura()
{
	cout << "Your figure is a box." << endl;
	cout << "Moving along the axis x:";
	cin >> box.gox;
	cout << "Moving along the axis y:";
	cin >> box.goy;
	cout << "Change the size to: ";
	cin >> box.size;
	cout << "How many degrees should the figure be rotated ? ";
	cin >> box.spin;
	box.x += box.gox;
	box.y += box.goy;
	/*cout << "The figure is a box. Moved to " << box.gox << " on the x-axis and on " << box.goy << " on the y-axis.";
	cout << "You have changed the size of the shape to " << box.size << " and turned the figure to " << box.spin << " degrees.";*/
}
void vsefiguri::coutistb(const Figura& vivod)
{
	cout << "The figure is a box. Moved to " << box.gox << " on the x-axis and on " << box.goy << " on the y-axis.";
	cout << "You have changed the size of the shape to " << box.size << " and turned the figure to " << box.spin << " degrees." << endl;
	cout << "Your coordinates:" << box.x << " and " << box.y << endl;
}
void vsefiguri::setSquareFigura()
{
	cout << "Your figure is a square." << endl;
	cout << "Moving along the axis x:";
	cin >> square.gox;
	cout << "Moving along the axis y:";
	cin >> square.goy;
	cout << "Change the size to: ";
	cin >> square.size;
	cout << "How many degrees should the figure be rotated ? ";
	cin >> square.spin;
	square.x += square.gox;
	square.y += square.goy;
	/*cout << "The figure is a square. Moved to " << square.gox << " on the x-axis and on " << square.goy << " on the y-axis.";
	cout << "You have changed the size of the shape to " << square.size << " and turned the figure to " << square.spin << " degrees.";*/
}
void vsefiguri::coutistc(const Figura& vivod)
{
	cout << "The figure is a square. Moved to " << square.gox << " on the x-axis and on " << square.goy << " on the y-axis.";
	cout << "You have changed the size of the shape to " << square.size << " and turned the figure to " << square.spin << " degrees." << endl;
	cout << "Your coordinates:" << square.x << " and " << square.y << endl;
