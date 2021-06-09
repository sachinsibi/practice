#include<stdio.h>
#include<cs50.h>

void print_spc(int n) {
 for (int i=0; i<n; i++) {
  printf(" ");
 }
}

void hanoi(int num, int from, int to, int other) {
 print_spc(num);
 //printf("I have been requested to move ring %i from %i to %i\n", num, from, to);
 if  (num == 1) {
  printf("Move %i from %i to %i\n", num, from, to);
 }
 else {
  hanoi(num-1, from, other, to);
  printf("Move %i from %i to %i\n", num, from, to);
  hanoi(num-1, other, to, from);
 }
}
int main(void) {
 int n = get_int("Enter number of rings ");
 int f = get_int("Enter from ");
 int t = get_int("Enter to ");
 int o = get_int("Enter other ");
 hanoi(n, f, t, o);
}
    
