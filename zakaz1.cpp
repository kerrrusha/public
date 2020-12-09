#include <iostream>
#include <math.h>
using namespace std;

double m, degree, alpha, v, duration;
const double g = 9.81;				//ускорение 
double x = 0, y = 0;


int main()
{
	cout << "Enter mass: ";			//масса кг
	cin >> m;
	
	cout << "Enter angle (degrees): ";			//угол			
	cin >> degree;

	cout << "Enter speed (m/sec): ";	//скорость м/c
	cin >> v;

	alpha = degree * 3.14159265358979323846 / 180;		//угол в радианах
	duration = 2*(v * sin(alpha)) / g;					//время полета

	int lenght = 10*floor(duration);						//высота массива
	
	double *coordsX = new double[lenght];
	double *coordsY = new double[lenght];

	for (int i = 0; i < lenght; i++)
	{
		x = v * cos(alpha) * i;
		if (i <= lenght / 2)
		{
			y = (pow((v * sin(alpha) - g * i), 2) - pow((v * sin(alpha)), 2)) / -2 * g;
		}
		else
		{
			y = pow((g * i), 2) / 2 * g;
		}
		*(coordsX + i) = x;
		*(coordsY + i) = y;
	}
	


	cout << endl << endl<< "=============" <<endl<< "Your coords:" <<endl<<"============="<< endl;
	cout << "   x   |   y" << endl << "-----------" << endl;
	
	for (int i = 0; i < lenght; i++)
	{
		printf(" %.2f | %.2f\n", *(coordsX + i), *(coordsY + i));
	}


	delete[] coordsX;
	delete[] coordsY;
	return 0;
}
