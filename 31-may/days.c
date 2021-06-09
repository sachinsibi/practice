#include<stdio.h>
#include<cs50.h>
#include<math.h>

void split();
int main(void) {
int days = get_int("Enter numberof days ");
split(days);
}

void split(int days) {
int years;
int months;
years = (int)((float)days/365);
printf("Years: %i\n",years);
days = days%365;
months = (int)((float)days/30);
printf("Months: %i\n",months);
days = days%30;
printf("Days: %i\n",days); 
}
