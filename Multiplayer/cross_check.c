// Code for checking cross path

#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
				arr[i][j]=7;
		}
	}
	arr[0][0]=1;
	arr[1][1]=1;
	arr[2][2]=1;	
		if((arr[0][0]==arr[1][1]==arr[2][2] &&(arr[0][0] || arr[1][1] || arr[2][2])!=-1) || ((arr[0][2]==arr[1][1]==arr[2][0]) &&(arr[0][2] || arr[1][1] || arr[2][0])!=-1))
	{
		score=1;
	}
		printf("The score is :%d",score);

}
