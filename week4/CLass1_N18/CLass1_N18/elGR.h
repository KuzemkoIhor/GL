#include <iostream>
#include <ctype.h>
//#include "GrArray.h"
using namespace std;
#define k 15

enum gend {male=1, female};

class elGR {


private:
	//========================DATA==================================
	char name[k];
	gend gender;
	int heigth;
	char *ch;
	//==========================FUNCTION============================
	void setName(char &n);	// Set name
	void setGender(int i);	// Set gender by int value (1 - male, 2 - female)
	void setGender(gend i);	// Set gender by enum ("male", "female")
	void setHeight(int x);	// Set height by int value in centimeters 
	//==============================================================


public:
	//==========================FUNCTION============================
	elGR();		//Constructor without parameters, all data input from console
	elGR(char* n,gend s,int h);	//Contructors with parametrs
	elGR(elGR &a);	//Copy constructor

	~elGR(); //Destructor

	void getName(char *x);//return copy of the name

	gend getGender(); //return gender (1 - male, 2 - female)

	int getHeight(); //return height value in centimetres

	void Print();	//Print all information into console
	
	//==============================================================

};

//==============================================================

struct GrArray 
{
	elGR *data;
	GrArray *next;
};

//==============================================================

class arrGR {
private:
	//========================DATA==================================
	GrArray *arr;	//List iterotor
	GrArray *root;	//Pointer to the root node
	//==============================================================


public:
	//==========================FUNCTION============================
	arrGR(); //Default constructor

	int AddGrEl(elGR &x);	//Add element to the list

	void PrintGrAr();	//Print list into console

	double MiddleHeightFemale();	//Calculate middle height between womens

	elGR* HighestMan();		//Find highest man in the list
	
	int SameHeight();

	void DestArr(GrArray *a);
	~arrGR();
	//==============================================================

};