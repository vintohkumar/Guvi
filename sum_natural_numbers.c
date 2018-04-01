#include<stdio.h>

int main(){
   int i,lenght,sum=0;
   scanf("%d",&lenght);
   for (i=0;i<=lenght;i++){
     sum=sum+i;
   }
   printf("%d",sum);
}
