#include <iostream>
#include "Solid.h"

using std::cout;
using std::endl;

int main()
{
	CSolid* pSolid[] = { new CBall(),
			new CRectParallelepiped(),
			new CBall(2.0),
			new CRectParallelepiped(2.0, 3.0, 4.0),
       			new CBall(11.0),
			new CRectParallelepiped(9.0, 11.0, 15.0)};

	int nSolid = sizeof(pSolid) / sizeof(pSolid[0]);

	for(int i = 0; i < nSolid; ++i)
	{
		pSolid[i]->Show_Info();
	}


	for (int i = 0; i < nSolid; ++i)
		delete pSolid[i];

	cout << endl;

	return 0;
}
