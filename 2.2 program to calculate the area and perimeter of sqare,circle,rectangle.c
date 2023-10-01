#include<stdio.h>
void main() {
  int L,b;
  printf("Enter the value of Lenghth of rectangle:");
 scanf("%d",&L);
 printf("Enter the value of breadth of recatngle:");
 scanf("%d",&b);
 int side;
 printf("Enter the value of side of square:");
 scanf("%d",&side);
 float radius;
 printf("\n Enter the value of radius of circle:");
 scanf("%f",&radius);
 printf("\n Perimeter of circle:%f",2*3.14*radius);
 printf("\n Area of circle:%f",radius*radius*3.14);
 printf("\n Perimeter of square:%d",4*side);
 printf("\n Area of square:%d",side*side);
 printf("\n Perimeter of rectangle:%d",2*(L+b));
 printf("\n Area of rectangle:%d",L*b);
}