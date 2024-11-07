// Multiplayer_from_scratch

// elemination of break

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<cstdlib>
using namespace std;

int main()
{
	// player 0, computer 1
	//empty display [display = == = == = = 
	int i, j,arr[3][3],pmove;
	int score=0; // boolean
	int random=0,emptyblocks=9;
// pmove =player move

	
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      arr[i][j] = -1;
      if (j < 2)
      cout<<" \t|";
      else
      cout<<"  \t";
    }
    cout<<endl;
    if (i < 2) {
      cout<<"--------------------------"<<endl;     // <-----------------------
    }
  }
	
while(1)
{
	cout<<"Enter Your move at empty index :";
	cin>>pmove;
	arr[pmove/3][(pmove%3)-1]=0;
	emptyblocks--;

//// for checking if player scored ==== = == = = = = == = = ===	
    for (i = 0; i < 3; i++) {
    	if((arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])&&(arr[i][0]>-1&& arr[i][1]>-1&& arr[i][2]>-1))
    	{
    		score=1;
		}
		if((arr[0][i] == arr[1][i]&&arr[1][i] == arr[2][i])&&(arr[0][i] >-1&& arr[1][i]>-1&& arr[2][i]>-1))
		{
			score=1;
		}
    }
    if ((arr[0][0] == arr[1][1]&&arr[1][1] == arr[2][2])&&(arr[0][0]>-1 && arr[1][1]>-1 && arr[2][2]>-1))
    {
    	score = 1;
	}
	if((arr[0][2] == arr[1][1]&&arr[1][1] == arr[2][0]) && (arr[0][2]> -1 || arr[1][1]> -1 || arr[2][0]> -1))
	{
		score=1;
	}
	
	if (score==1)
	{
		cout<<"You won ! Congrates.......";
		exit(0);
	}
	
	//computer's turn
	  // check if there is place to win !!
	  int pblockchk=0,cblockchk=0;
	  int pblockchk2=0,cblockchk2=0;
	  
	  int spaceicopied=0,spacejcopied=0;
	  int space2icopied=0,space2jcopied=0;
	  int spacescore=0;
	  int spacei,spacej,space2i,space2j,marked=0;
	  
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]==1)   // logic, to win or place for loose, there must be two our symbol and one empty
			{
				cblockchk+=1;
			}
			else if(arr[i][j]==0)  // check if there is place due to which he can win
			{
				pblockchk+=1;
			}
			else
			{
				spacei=i;
			    spacej=j;
			}
			
			
			if(arr[j][i]==1)   // logic, to win or place for loose, there must be two our symbol and one empty
			{
				cblockchk2+=1;
			}
			else if(arr[j][i]==0)  // check if there is place due to which he can win
			{
				pblockchk2+=1;
			}
			else
			{
				space2i=i;
			    space2j=j;
			}
		}
		if((cblockchk==2&&pblockchk==0)||(cblockchk2==2&&pblockchk2==0))
		{
			// we will win by putting 1 in arr[spacei,spacej]
			cout<<"You Loose !!!!";
			exit(0);
		}
		else if(pblockchk==2&&cblockchk==0)
		{
			arr[spacei][spacej]=1;
			marked=1;
			break;
//			danger++;
//			int dangeri=spacei;  // providing coords of danger
//			int dangerj=spacej;
		}
		else if(pblockchk2==2&&cblockchk2==0)  ///////////////here, change is done inside the loop, do this shit outside
		{
			arr[space2j][space2i]=1;
			marked=1;
			break;
		}
		
		
		pblockchk=cblockchk=0;
		cblockchk2=pblockchk2=0;
	}
	  
	  if(marked==0)
	  {
	  	srand(time(0));
		random = (rand()%(emptyblocks)+1); // randomizer
//		arr[randompmoverandom/3][(pm1;ve%3)-1]=0
	  }
	
	int counthere=1;
	for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
      	
      	if(marked==0)
        {
        	if(arr[i][j]!=0&&arr[i][j]!=1)
        {
        	if(counthere==random)
			arr[i][j]=1;
			counthere++;
		}
		}
      	
        if (arr[i][j] == -1) {
          if (j < 2)
            printf(" \t|");
          else
            printf(" \t");
        } else {
          if (j < 2)
            printf("   %d   |", arr[i][j]);
          else
            printf("   %d     ", arr[i][j]);
        }
        
        
        
      }
      printf("\n");
      if (i < 2) {
        printf("--------------------------\n");
      }
      
    }
	emptyblocks--;
}
	//place to the player  [display]
	//process if player wins or where to land the short to win
	//place to computer [display]
}
