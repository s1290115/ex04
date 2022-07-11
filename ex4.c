#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int i,countt=0,countf=0;

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
    if(countt>countf) printf("You won!\n");
    else printf("You lost\n");

    return 0;
  }
  

