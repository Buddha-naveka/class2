#include "figuri.h"

void vsefiguri::setCircleFigura()
{
	int x, y, size, spin;
	cout << "Your figure is a circle." << endl;
	cout << "Moving along the axis x: ";
	cin >> x;
	cout << "Moving along the axis y: ";
	cin >> y;
	cout << "Change the size to: ";
	cin >> size;
	cout << "How many degrees should the figure be rotated ? ";
	cin >> spin;
	cout << "The figure is a circle. Moved to " << x << " on the x-axis and on " << y << " on the y-axis";
	cout << "You have changed the size of the shape to " << size << " and turned the figure to " <<spin << " degrees";
}
void vsefiguri::setBoxFigura()
{
	int x, y, size, spin;
	cout << "Your figure is a box." << endl;
	cout << "Moving along the axis x:";
	cin >> x;
	cout << "Moving along the axis y:";
	cin >> y;
	cout << "Change the size to: ";
	cin >> size;
	cout << "How many degrees should the figure be rotated ? ";
	cin >> spin;
	cout << "The figure is a box. Moved to " << x << " on the x-axis and on " << y << " on the y-axis";
	cout << "You have changed the size of the shape to " << size << " and turned the figure to " << spin << " degrees";
}
void vsefiguri::setSquareFigura()
{
	int x, y, size, spin;
	cout << "Your figure is a square." << endl;
	cout << "Moving along the axis x:";
	cin >> x;
	cout << "Moving along the axis y:";
	cin >> y;
	cout << "Change the size to: ";
	cin >> size;
	cout << "How many degrees should the figure be rotated ? ";
	cin >> spin;
	cout << "The figure is a square. Moved to " << x << " on the x-axis and on " << y << " on the y-axis";
	cout << "You have changed the size of the shape to " << size << " and turned the figure to " << spin << " degrees";
}
