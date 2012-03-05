#include "elGR.h"
//#include "GrArray.h"

void main()
{


	elGR b1("yyt",male,200);
	elGR b2("qqw1",male,20);
	elGR b3("qqq",female,150);
	elGR b5("isss",male,120);
	elGR b4("sss",male,190);
	elGR ff("amam",female,200);
	elGR d("dddd",female,160);

	elGR f=d;	

	cout << endl << endl;
	arrGR a1;
	a1.AddGrEl(b1);
	
	a1.AddGrEl(ff);
	a1.AddGrEl(b3);
	//a1.AddGrEl(d);
	/*a1.AddGrEl(b2);
	
	
	a1.AddGrEl(b4);
	a1.AddGrEl(b5);
*/
	a1.PrintGrAr();
	a1.MiddleHeightFemale();
	elGR *rez=a1.HighestMan();

	cout << "\nsame height	" << a1.SameHeight() <<"\n\n";
	//delete n;
	//delete b;
}