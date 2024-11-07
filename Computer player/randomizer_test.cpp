// randomizer test

#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
	int cnnt=10,random;
	
	srand(time(0));
		random = (rand()%(cnnt))+1; // randomizer
		cnnt=0;
	cout<<random;
}
