#include "elGR.h"

//=====================================================

arrGR::arrGR()
{
	arr=new GrArray;
	root=arr;
	arr->next=NULL;
	arr->data=NULL;
	//arr=arr->next;

}

//=====================================================

int arrGR::AddGrEl(elGR &x)
{
	arr->data=&x;
	
	arr->next=new GrArray;
	arr=arr->next;
	arr->next=NULL;
	arr->data=NULL;
	
	return 1;
}

//=====================================================

void arrGR::PrintGrAr()
{
	arr=root;
	cout << "\n==========All colection==========\n";
	while (arr->next!=NULL)
	{
		arr->data->Print();
		arr=arr->next;
	}	
}

//=====================================================

double arrGR::MiddleHeightFemale()
{
	arr=root;
	if (arr->next!=NULL) 
	{
		double amount=0;
		double rez=0;
		while (arr->next!=NULL)
		{
			if(arr->data->getGender()==female)
			{
					amount++;
				rez+=arr->data->getHeight();
			}
			arr=arr->next;
		}
		if(amount!=0)
		{
			rez=rez/amount;
			cout << "\n\n======Middle female height=======\n" << rez << " centimetres\n\n "<<endl;
			return rez;
		}
		else
		{
			cout << "\nNo women in the list!\n"; 
			return 0;
		}
		
	}
	cout << "\nEmpty list!\n"<< endl;
	return 0;
	
}

//=====================================================

elGR* arrGR::HighestMan()
{
	arr=root;
	if (arr->next!=NULL) 
	{
		int max=0;
		elGR *rez=NULL;
		while (arr->next!=NULL)
		{
			if(arr->data->getGender()==male)
			{
				if(arr->data->getHeight()>max)
				{
					max=arr->data->getHeight();
					rez=arr->data;
				}		
			}
			arr=arr->next;
		}
		if(rez!=NULL)
		{
			cout << "\n\n=========Highest man:============"<< endl;
			rez->Print();
			return rez;
		}
		else
			cout << "\n\nNo men in the list!\n\n";
	}
	return NULL;
}

//=====================================================

int arrGR::SameHeight()
{
	arr=root;
	GrArray * temp=arr;
	if (arr->next!=NULL) 
	{
		while(temp->next!=NULL)
		{
			arr=temp->next;
			while (arr->next!=NULL)
			{
				if(temp->data->getHeight()==arr->data->getHeight())
					return 1;
				else
					arr=arr->next;
			}
			temp=temp->next;
		}
	}
	return 0;
}


//=====================================================

void arrGR::DestArr(GrArray *a)
{
	cout <<(a->next==NULL) << endl;
	if (a->next==NULL) 
	{
		a->data->Print();
		delete a;
		a=NULL;
	}
	else
	{
		a=a->next;
		DestArr(a);
	}
}

//=====================================================

arrGR::~arrGR()
{
	cout <<"\n===========Start delete==========\n\n";
	arr=root;
	DestArr(arr);
	cout <<"\n============End delete===========\n\n";
}

//=====================================================