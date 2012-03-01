#include "Matr.h"

//================================================================================

int Matr::memAllocate(int colNumb)
{
	if(Matr::setColAm(colNumb))
	{
		//Initialise for random
		srand( (unsigned)time( NULL ) );

		try		//Allocate memory for matrix like array
		{
			matrix=new int[n*m];
		}
		catch (exception e)
		{	
			cout <<endl << "Cant allocate memory to matrix (Matr()) "<< endl;
			return 0;
		}
		for (int i=0; i<n*m; i++)
		{
			matrix[i] = 0;//initialise array with 0
		}

		return 1;
	}
	m=0;
	matrix=NULL;
	return 0;
}

//==================================================================================

Matr::Matr()
{
	//Allocate memory and initialise matrix
	if(Matr::memAllocate(3)&&(matrix!=NULL))
	{
		for (int i=0; i<n*m;i++)
		{
			matrix[i]=rand()%10;//random 0..10 initialise
		}
	}
}

//====================================================================================

Matr::Matr(int x)
{
	//Allocate memory and initialise matrix
	if(Matr::memAllocate(x)&&(matrix!=NULL))
	{
		for (int i=0; i<n*m;i++)
		{
			matrix[i]=rand()%10;//random 0..10 initialise
		}
	}

}

//=======================================================================================

Matr::Matr(Matr& a)
{
	//Allocate memory and initialise matrix
	if(Matr::memAllocate(a.m)&&(matrix!=NULL))
	{
		matrix=a.ReturnMatr();	
	}
}

//========================================================================================

int Matr::setColAm(int x)
{
	//Number of columns should be >=0
	if(x<=0)
	{	
		cout << "\nIncorrect columns amount!!!\n ";
		return 0;
	}
	m=x;
	return 1;
}

//========================================================================================

int* Matr::ReturnMatr()
{
	int *rez;//Define copy matrix
	try 
	{
		rez=new int[n*m];
	}
	catch (exception e)
	{
		cout << "\nCant allocate memory to copy of matrix! (ReturnMatr)\n ";
	}
	for (int i=0; i<n*m; i++)
	{
		rez[i]=matrix[i];//Copy each element in rez
	}
	return rez;
}


//========================================================================================
int Matr::Task6()
{
	int k=(m>n?n:m);//Find min between m and n
	int sum=0;//Initialize sum
	for (int i=0; i<k; i++)
	{
		sum+=matrix[i*m+i]*matrix[(i+1)*(m-1)];//count dot product
	}
	return sum;
}

//========================================================================================

int Matr::Task7()
{
	int k=(m>n?n:m);//Find min between m and n
	int sum=0;//Initialize sum
	for (int i=0; i<k; i++)
	{
		sum+=matrix[i*m]*matrix[i];//count dot product
	}
	return sum;
}

//==========================================================================================

int Matr::Task8()
{
	int k=(m>n?n:m);//Find min between m and n
	int sum=0;//Initialize sum
	for (int i=0; i<k; i++)
	{
		sum+=matrix[i*m+i]*matrix[i*m];//count dot product
	}
	return sum;
}

//==========================================================================================

int Matr::Task9()
{
	int k=(m>n?n:m);//Find min between m and n
	int sum=0;//Initialize sum
	for (int i=0; i<k; i++)
	{
		cout << endl <<i*m+i;
		sum+=matrix[i*m+i]*(matrix[i*m+i]%n);//count dot product
	}
	return sum;
}


//==========================================================================================

void Matr::PrintMatr()
{
	if(matrix!=NULL)
	{
		cout << endl;
		for (int i=0; i<n;i++)
		{
			for (int j=0; j<m;j++)
			{
				cout << matrix[i*m+j] << "  " ;
			}
			cout << endl;
		}
	}
	
}

//=============================================================================================

Matr::~Matr()
{
	if(matrix!=NULL)
	{
		delete[] matrix;
		matrix=NULL;
		cout << "\nAll data is deleted" <<endl;
	}
}

//==============================================================================================

