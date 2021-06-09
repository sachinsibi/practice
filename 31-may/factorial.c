#include<stdio.h>
#include<cs50.h>

int factorial(int);
int factorial2(int);

int main(void) {
 int v = get_int("Enter number ");
 printf("1 %i\n", factorial(v));
 printf("2 %i\n", factorial2(v));
 }

int factorial(int x) {
 int ret = 1;
 for(int i=1; i<=x; i++) {
  ret = ret*i;
  }
 return ret;
 }
int factorial2(int x) {
 if (x==0) {
  return 1;
  }
 else {
 return x * factorial2(x-1);
 }
}   
 
