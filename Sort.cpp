//LinearSorting
//Its not linear now, will have to change to Linear Sort
//In Linear Sorting first a minimun has to be found which is swapped. then again 2nd minimum
//Define a minimum function and call it to fing minimum and use it for doing the task

#include <iostream>
using namespace std;
void sort(int []);
void display(int []);
int main()
{
	int age [5]={9,5,7,8,6};
	sort(age);
	return 0;
} 

void sort(int Arr[5])
{
	int temp,i,j;
	for(i=0;i<=4;i++)
	{
		for(j=i;j<=4;j++)
		{
			if(Arr[i]>Arr[j])
			{
				temp=Arr[j];
				Arr[j]=Arr[i];
				Arr[i]=temp;
			}	
			else continue;
		}
	
	}
	display(Arr);
}

void display(int newarr[5])
{
	cout<<"The sorted Array is as :";
	int k;
	for(k=0;k<=4;k++)
	{
		cout<<newarr[k]<<" ";
	}
}
