#include <stdio.h>
#include <stdlib.h>

int main(void)
{
     // Question 1
     printf("Hello\nand\nwelcome\nto\nC\n\n");

     // Question 2
     printf("Engineering is an important and learned profession.\nAs members of this profession,\nengineers are expected to exhibit the highest standards of honesty and integrity.\n\n");

     // Question 3
     printf("Facts about computer: \n");
     printf("The first modern computer was basically a giant calculator. \n");
     printf("Computers work through special instructions called programs. \n");
     printf("Over 6000 computer viruses are released each month. \n\n");

     // Question 4
     char firstName[] = "Bob";
     char lastName[] = "Jones";
     printf("%s\n", firstName);
     printf("%s\n\n", lastName);
   
     // Question 5
     char manName[20];
     int age;
   
     printf("Input the mans name\n");
     scanf("%s", manName);

     printf("Input the mans age\n");
     scanf("%d", &age);
   
     printf("There once was a man named \"%s\", he was \"%d\" years old. He liked the name \"%s\" but did not like being \"%d\" years old.\n\n", manName, age, manName, age);

     // Question 6

      char Name[6] = "Thito";
      int Age = 30;
      int IQ = Age;

      printf("Value of Name is : %s and the age is : %d wihtout skipping a new line and.. \n the value of IQ is : %d\n\n",Name, Age, IQ);

    // Question 7

      int base, height;

      printf("Please enter the base of the triangle: ");
      scanf("%d", &base);
      printf("Please enter the height of the triangle: ");
      scanf("%d", &height);

      float area;
      area = 0.5 * base * height;

      printf("The area of the triangle is : %f\n\n", area);

    // Question 8

      int radius;
      float pi = 3.142;

      printf("Please enter the radius of the circle to calculate the distance of the circumference\n");
      scanf("%d", &radius);
    
      int circumference = 2 * pi * radius;
      printf("The circumference of the circle is: %d\n\n", circumference);

    // Question 9
      int A, B, C;
    
      printf("please enter three numbers you would like to add up\n");
      scanf("%d", &A);
      scanf("%d", &B);
      scanf("%d", &C);
    
      int sum = A + B + C;
      printf("The sum of the three numbers is: %d\n\n", sum);

     // Question 10
     /*
     INCORRECT CODE
     1.   include<stdio.h> 

     2. 

     3.   /* function main begins program execution /* 

     4.   int_main(void){ 

     5.       printf("Welcome to C! n"); 

     6.   } */

     /*CORRRECT 
    
     #include<stdio.h>

     int main(void){
         printf("Welcome to C!\n");
     }

     corrected: 
     1. # by include
     2. removed _ between int and main(void)
     3. added \ next to n 
     */

}