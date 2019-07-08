//Added new function to try game again

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int d1,d2,total;
  char name[32];
  char ans;
  srand((unsigned int)time(NULL));
  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  do{
    printf("Rolling the dice...\n");
    d1=rand()%6+1;
    d2=rand()%6+1;
    total=d1+d2;
    printf("Die 1: %d\n",d1);
    printf("Die 2: %d\n",d2);
    printf("Total value : %d\n",total);
    if(total>7){
      printf("%s won!\n",name);
    }else{
      printf("%s lost!\n",name);
    }
    ans=0;
    while(1){
      printf("Try again? (y/n):");
      scanf("%c",&ans);
      if(ans=='n' || ans=='y') break;
    }
    if(ans=='n') break;
  }while(1);
  return 0;
}
