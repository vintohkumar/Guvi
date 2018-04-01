#include<stdio.h>
int findLarge(int,int,int);
int main(){
  int a,b,c,large;
  scanf("%d%d%d",&a,&b,&c);
  large=findLarge(a,b,c);
  printf("%d",large);
}
int findLarge(int x,int y,int z){
    if(x<y){
        if(y>z){
           return y;
        }else{
            return z;
        }
    }else if(x>z){
        return x;
    }
}
