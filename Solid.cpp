#include "Solid.h"
#include <iostream>

using std::cout;
using std::endl;


double CBall::Volume() const
{
	return (4 * Pi * m_Radius * m_Radius * m_Radius) / 3;
}

double CBall::Surface_Area() const
{
	return 4 * Pi * m_Radius * m_Radius;
}

void CBall::Show_Info() const
{
	cout << endl << endl
		<< "Ball : R = " << m_Radius
		<< endl
		<< "V = " << Volume()
		<< ", S = " << Surface_Area();

	return;
}



double CRectParallelepiped::Volume() const
{
	return m_Length * m_Width * m_Height;
}

double CRectParallelepiped::Surface_Area() const
{
	return 2 * (m_Length * m_Width + m_Width * m_Height + m_Height * m_Length);

}

void CRectParallelepiped::Show_Info() const
{
	cout << endl << endl
		<< "Rectangular parallelepiped : a = " << m_Length
		<< ", b = " << m_Width
		<< ", c = " << m_Height
		<< endl
		<< "V = " << Volume()
		<< ", S = " << Surface_Area();

	return;
}
