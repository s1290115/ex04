#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,countt=0,countf=0;
  char name[20];
  printf("who are you?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  srand((int)time(NULL));
  printf("Tossing a coin...\n");
  for(i=1;i<=3;i++){
    if(rand() %2 ==0){
    printf("Round %d: Tails\n",i);
    countf++;
    }else { printf("Round %d: Heads\n",i);
      countt++;
    }
  }
    printf("Heads: %d, Tails: %d\n",countt,countf);

    return 0;
  }
  

