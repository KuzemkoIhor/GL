#include "Matr.h"


void main()
{

	Matr a;
	a.PrintMatr();
	cout << "Rezult task6: " << a.Task6() << endl;
	cout << "Rezult task7: " << a.Task7() << endl;
	cout << "Rezult task8: " << a.Task8() << endl;
	cout << "Rezult task9: " << a.Task9() << endl;
	system("pause");

	Matr b(4);
	b.PrintMatr();
	system("pause");
	
	Matr c=a;
	c.PrintMatr();
	system("pause");


	Matr d(-5);	
	d.PrintMatr();
	system("pause");

	



}