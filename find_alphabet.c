#include<stdio.h>

int main(){
  char letter;
  scanf("%c",&letter);
  (letter>='a'&&letter<='z'||letter>='A'&&letter<='Z')?printf("Alphabet"):printf("NO");
  return 0;
}

