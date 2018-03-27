#include<stdio.h>
int main(){
  char letter;
  scanf("%c",&letter);
  (letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U')?printf("Vowel"):printf("Consonant");
  return 0;
}
