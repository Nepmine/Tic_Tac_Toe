// GAME- TIK TAK TOE

#include<stdio.h>

int main() {
  int i, j, arr[3][3], score = 0, input, index, player;

  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      arr[i][j] = -1;
      if (j < 2)
        printf(" \t|");
      else
        printf("  \t");
    }
    printf("\n");
    if (i < 2) {
      printf("--------------------------\n");
    }
  }
  // -----------------------------------------------Starting----------------------------------------------------
  for (index = 0; index < 9; index++) {
    player = (index % 2);
    //printf("%d\n",player);
    (player == 0) ? printf("Player-1: Enter any non empty idex :: "): printf("Player-2: Enter any non empty idex :: ");
    scanf("%d", & input);
    if (input > 0 && input <= 9) {
      if (input <= 3)
        arr[0][input - 1] = player;
      if (input > 3 && input <= 6)
        arr[1][input - 3 - 1] = player;
      if (input > 6)
        arr[2][input - 6 - 1] = player;
    } else {
      printf("Invalid Input");
      i -= 1;
      continue;
    }
    //-----------------------------------------------Checking score-----------------------------------------------
    for (i = 0; i < 3; i++) {
    	if((arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])&&(arr[i][0]>-1&& arr[i][1]>-1&& arr[i][2]>-1))
    	{
    		score=1;
		}
		if((arr[0][i] == arr[1][i]&&arr[1][i] == arr[2][i])&&(arr[0][i] >-1&& arr[1][i]>-1&& arr[2][i]>-1))
		{
			score=1;
		}
//      if (((arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) || (arr[0][i] == arr[1][i]&&arr[1][i] == arr[2][i])) && (arr[i][0]>-1|| arr[i][0]>-1|| arr[i][0]>-1)) 
//{
//        score = 1;
//      }

    }
    if ((arr[0][0] == arr[1][1]&&arr[1][1] == arr[2][2])&&(arr[0][0]>-1 && arr[1][1]>-1 && arr[2][2]>-1))
    {
    	score = 1;
	}
	if((arr[0][2] == arr[1][1]&&arr[1][1] == arr[2][0]) && (arr[0][2]> -1 || arr[1][1]> -1 || arr[2][0]> -1))
	{
		score=1;
	}
//    if (((arr[0][0] == arr[1][1]&&arr[1][1] == arr[2][2]) && (arr[0][0]>-1 && arr[1][1]>-1 && arr[2][2]>-1)) || ((arr[0][2] == arr[1][1]&&arr[1][1] == arr[2][0]) || (arr[0][2]> -1 || arr[1][1]> -1 || arr[2][0]> -1))) 
//	{
//      score = 1;
//    }
    
    //-----------------------------------------------//Display Output//-----------------------------------------------
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        if (arr[i][j] == -1) {
          if (j < 2)
            printf(" \t|");
          else
            printf(" \t");
        } else {
          if (j < 2)
            printf("   %d    |", arr[i][j]);
          else
            printf("   %d     ", arr[i][j]);
        }
      }
      printf("\n");
      if (i < 2) {
        printf("--------------------------\n");
      }
    }	
    if (score >= 1) {
      printf("\nYou Scored\n");
      break;
    }
  }
  if (score == 0)
    printf("\n Draw");
}
