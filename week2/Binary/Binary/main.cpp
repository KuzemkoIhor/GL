//#include <head.h>

#include <iostream>
using namespace std;

//Print Int in Binary
void BinaryPrintInt(unsigned int x)
{
	int arr[32];
	for (int i=0; i<32; i++)
	{	arr[i]=0; }
	arr[0]=x%2;
	int i=1;
	while(x>1)
	{
		x=x/2;
		arr[i]=x%2;
		i++;
	}
	for (int j=31; j>=0; j--)
	{	cout << arr[j]; }
	cout << endl;

}
// Print Char in binary
void BinaryPrintChar(unsigned char x)
{
	int arr[8];
	for (int i=0; i<8; i++)
	{	arr[i]=0; }
  
	arr[0]=x%2;
	int i=1;
	while(x>1)
	{
		x=x/2;
		arr[i]=x%2;
		i++;
	}
	for (int j=7; j>=0; j--)
	{	cout << arr[j]; }
	cout << endl;

}



//1 zadacha - bitovi operatsiyi
int numb1(unsigned int x)
{
	unsigned temp=x%2;
	temp=x+(temp^1)+1;
	cout << temp << endl;
	return temp;

}


//7 zadacha - bitovi operatsiyi dlya int
int numb7Int(unsigned int x)
{
	unsigned int max=2147483648;
	unsigned int temp,temp1;
	temp=(x<<1);
	temp1=x|max;
	temp1=temp1>>31;
	temp=temp1+temp;
	return temp;
}



// 7 zadacha - bitovi operatsiyi
int numb7Char(unsigned char x)
{
	unsigned char max=128;
	unsigned char temp,temp1;
	temp=(x<<1);
	temp1=x|max;
	temp1=temp1>>7;
	temp=temp1+temp;
	return temp;
}



//Poshuk pershogo "0"
unsigned char Max0(unsigned char x)
{
	unsigned char Prot;
	unsigned char Zsuv;
	unsigned char ZsuvProt;
	unsigned char Porivn;

	//1 - zsuv
	Prot=~x;
	Zsuv=Prot>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//2 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//3 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//4 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//5 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	// 6 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	// 7 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv>>1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	return Porivn;

}


//Poshuk ostan'ogo "0"
unsigned char Min0(unsigned char x)
{
	unsigned char Prot;
	unsigned char Zsuv;
	unsigned char ZsuvProt;
	unsigned char Porivn;

	//1 - zsuv
	Prot=~x;
	Zsuv=Prot<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//2 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//3 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//4 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	//5 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	// 6 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	// 7 - zsuv
	Prot=Porivn;
	Zsuv=Zsuv<<1;
	ZsuvProt=~Zsuv;
	Porivn=Prot&ZsuvProt;

	return Porivn;

}
//Poshuk pershoyi "1"
unsigned char Max1(unsigned char x)
{
	unsigned char temp;
	temp=~x;
	return Max0(temp);
}
//Poshuk ostan'oyi "1"
unsigned char Min1(unsigned char x)
{
	unsigned char temp;
	temp=~x;
	return Min0(temp);
}

//8 zadacha - bitovi operatsiyi
unsigned char numb8Char(unsigned char x)
{
	unsigned char temp;
	temp=Max0(x);
	return temp;
}

//9 zadacha - bitovi operatsiyi
unsigned char numb9Char(unsigned char x)
{
	unsigned char temp;
	temp=Min0(x);
	return (temp|x);
}

//10 zadacha - bitovi operatsiyi
unsigned char numb10Char(unsigned char x)
{
	unsigned char temp;
	temp=Max1(x);
	temp=~temp;
	return (x&temp);
}

//11 zadacha - bitovi operatsiyi
int numb11Char(unsigned char x)
{
	unsigned char temp;
	temp=Min1(x);
	if (temp&1)
		return 1;
	if (temp&2)
		return 2;
	if (temp&4)
		return 3;
	if (temp&8)
		return 4;
	if (temp&16)
		return 5;
	if (temp&32)
		return 6;
	if (temp&64)
		return 7;
	if (temp&128)
		return 8;
	return 0;
}

//12 zadacha - bitovi operatsiyi
unsigned char numb12Char(unsigned char x)
{
	unsigned char max=128;
	unsigned char temp,temp1;
	temp=(x<<2);
	temp1=x|max;
	temp1=temp1>>6;
	temp=temp1+temp;
	return temp;
}

//13 zadacha - bitovi operatsiyi
int numb13Char(unsigned char x)
{
	int rez=0;
	unsigned char temp;
	// 1
	temp=x;
	rez+=temp&1;
	// 2
	temp=temp>>1;
	rez+=temp&1;
	// 3
	temp=temp>>1;
	rez+=temp&1;
	// 4
	temp=temp>>1;
	rez+=temp&1;
	// 5
	temp=temp>>1;
	rez+=temp&1;
	// 6
	temp=temp>>1;
	rez+=temp&1;
	// 7
	temp=temp>>1;
	rez+=temp&1;
	// 8
	temp=temp>>1;
	rez+=temp&1;
	
	return rez;
}




//main
int main ()
{
	
    unsigned int  a;
	unsigned char c;
	cin >>a;
	c=char(a);
	//cout <<"char : " << c << endl;
	cout << "binary : ";
	BinaryPrintChar(c);
	cout  << "binary rezult: " ;
	c=numb13Char(c);
	cout << "c= " << (int)c << endl;
	BinaryPrintChar(c);
	return 0;
}


