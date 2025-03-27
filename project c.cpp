#include<stdio.h>
int main(){
  int i,n;
  char type[10];
  printf("enter the type of room you want\n");
  scanf("%s",&type);
  printf("for how many days you want the room\n");
  scanf("&d",&n);
  int date;
  scanf("%d",date);
  printf("the booking of your room in our hotel is from %d-4-25\n to %d-4-25\n",date+n);
  int charges=n*1000;
  printf("charges for %s room for %d days is =%d days is =%d\n",type,charges);
float gst=(charges/100)*18;
printf("%f",gst);
float total;
total=charges+gst;
printf("total bill=%f\n",total);
} 
