#include<stdio.h>
int main(){
  char ch[100];
  fgets(ch,100,stdin);
  fputs(ch, stdout);
}