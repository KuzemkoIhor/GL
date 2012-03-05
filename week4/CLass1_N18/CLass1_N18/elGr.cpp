#include "elGR.h"


//=====================================================

elGR::elGR()
{
	int g;
	ch=new char();
	cout <<"Enter Name" << endl;
	cin >>ch;
	setName(*ch);
	cout <<"Enter gender (1-male, 2-female)" << endl;
	cin >>g;
	setGender(g);
	cout <<"Enter height int centimetres :" << endl;
	cin >>g;
	setHeight(g);
}

//=====================================================

elGR::elGR(char *n, gend g,int h)
{
	setName(*n);
	setGender(g);
	setHeight(h);
}

//=====================================================

elGR::elGR(elGR &a)
{
	ch=new char;
	a.getName(ch);
	setName(*ch);

	setGender(a.getGender());

	setHeight(a.getHeight());
}
//=====================================================

elGR::~elGR()
{
	//delete ch;
	//ch=NULL;
	cout << "Delete all" << endl;	
}

//=====================================================

void elGR::setName(char &n)
{
	if(strlen(&n)<k)
	{
		strcpy(name,&n);
	}
	else 
	{
		cout <<endl << "Too long name" << endl;
	}
}

//=====================================================

void elGR::getName(char *n)
{
	strcpy(n,name);
}

//=====================================================

void elGR::setGender(int i)
{
	if (i==1)
	{
		gender=male;
		return;
	}	
	if (i==2)
	{
		gender=female;
		return;
	}
	cout <<endl <<  "Incorrect gender status!!!\n Set default value 'male' " << endl;
	gender=male;
}

//=====================================================

void elGR::setGender(gend i)
{
	
	int rez=i;
	setGender(rez);
}

//=====================================================

gend elGR::getGender()
{
	return gender;
}

//=====================================================

void elGR::setHeight(int x)
{
	if((x>0))
		heigth=x;
}

//=====================================================

int elGR::getHeight()
{
	return heigth;
}

//=====================================================

void elGR::Print()
{
	//cout << "==========================" << endl;

	cout <<"name : " << name << endl;

	if (gender==1)
		cout <<"gender : male" << endl;
	if (gender==2)
		cout <<"gender: female" << endl;

	cout << "heigth : " << getHeight() << endl;

	cout << "=================================" << endl;
}


//=====================================================