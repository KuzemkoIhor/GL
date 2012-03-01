#include <time.h>
#include <iostream>
#include <math.h>
using namespace std;
#define n 3//rows amount default value

class Matr {
private:

	//=======================DATA=============================
	int *matrix;
	int m;	//columns amount
	//========================================================

public:

	//====================FUNCTION============================
	int memAllocate(int amount); //Allocate memory for dynamic data

	Matr();		//Constructor without parameters
	
	Matr(int x);	//Constructor with 1 parametr x - set amount of columns

	Matr(Matr& a);	//Copy constructor, copying maxtrix and amount of columns m
	
	int* ReturnMatr();		//Return copy of matrix 
	
	int Task6();		//Return dot product between main diagonals

	int Task7();		//Return dot product between first rows and first columns

	int Task8();		//Return dot product between main diagonal and main row
	
	int Task9();		//Return dot product between main diagonal and mod n from main diagonal
	
	void PrintMatr();	//Display matrix into console

	~Matr();	//Destuctor, reallocate memory

	int setColAm(int col); //Set amount of columns
	//========================================================
};