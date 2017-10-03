#include <iostream>
using namespace std;



void merge(int left[],int right[],int lenleft,int lenright)
{	
	int a,b,pos=0;
	int save[lenleft+lenright];
	
	while(a<lenleft && b<lenright)
	{
		if(left[a]<=right[b])
		{
			save[pos]=left[a];
			a=a+1;
		}
			else
			{
			save[pos]=right[b];
			b=b+1;
		}
		pos=pos+1;
	}
	
	while(a<lenleft)
	{
		save[pos]=left[a];
		a=a+1;
		pos=pos+1;
	}
	
	while(b<lenright)
	{
		save[pos]=right[b];
		b=b+1;
		pos=pos+1;
	}
	
}

void passvalue(int Parray [],int length)						//Passed the array as well as its size
{	
	int i,j;
	
	if(length<2)												//If only one element, no sorting required
		return;
	
	i=length/2;													//Defining size of left array as well as right array			
	if(length%2==0)
		j=length/2;
	else
		j=(length/2)+1;											//Size Defined
	
	
	int la [i];													//Initialized Left and Right array
	int ra [j];
	
	for(int fv=0;fv<length;fv++)								//Fillvariable
	{
		if(fv<(length/2))
			la[i]= Parray[fv];
		else
			ra[j] =Parray[fv];									//Left and right array saved
	}
	
	passvalue(la[],i);											//Recursively sorting left and right sublist
	passvalue(ra[],j);
	
	merge(la[i],ra[j],i,j);										//Call merge Function
	
}












int main()
{	
	int size;
	cout<<"Enter the size of Array";
	cin>>size;
	int l;
	int arr[size];
	
	cout<<"Enter array elements one by one :";
	for(l=0;l<size;l++)
	{
		cin>>arr[l];
	}
		cout<<"Array Stored";
		passvalue(arr[size],size);								//Function call
		
		for(l=0;l<size;l++)
		{
			cout<<"Sorted Array is as :"<<arr[l]<<" ";
		}
	return 0;
}