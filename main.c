#include <stdio.h>
#include <math.h>

int main(void)
{
    //Question 1
    int n1, n2;

    printf("Please enter 2 numbers to check for the maximum\n");
    scanf("%d%d", &n1, &n2);
    if (n1>n2){
        printf("%d is the maximum of the two numbers\n", n1);
    } else {
        printf("%d is the maximum of the two numbers\n\n", n2);
    }

    //Question 2
    int n3;

    printf("Please enter a number to check if it is positive, negative or zero\n");
    scanf("%d", &n3);
    if (n3>0){
        printf("%d is positive\n", n3);
    } else if (n3<0){
        printf("%d is negative\n", n3);
        n3=n3*-1;
    } else {
        printf("%d is zero\n", n3);
    }

    //Question 3
    if ((n3%2)==1){
        printf("The number in Question 2 is odd\n");
    } else {
        printf("The number in Question 2 is even\n\n");
    }

    //Question 4
    char c1;

    printf("Please enter a character to check if it is a vowel\n");
    scanf("%c", &c1);
    
    if (c1=='a' || c1=='e' || c1=='i' || c1=='o' || c1=='u'
    ||  c1=='A' || c1=='E' || c1=='I' || c1=='O' || c1=='U'){
        printf("The character in Question 4 is a vowel\n");
    } else {
        printf("The character in Question 4 is a consonant\n\n");
    }

    //Question 5
    char c2;
    
    printf("Please enter a character to check if it is an alphabet letter, a digit or a special character\n");
    scanf("%c", &c2);
    if (c2=='1' || c2=='2'|| c2=='3'|| c2=='4'|| c2=='5'|| c2=='6'|| c2=='7'|| c2=='8'|| c2=='9'|| c2=='0'){
        printf("You have entered a digit");
    } else if (c2=='a' || c2=='b' || c2=='c' || c2=='d' || c2=='e' || c2=='f' || c2=='g' || c2=='h' || c2=='i' || c2=='j' || c2=='k' || c2=='l' || c2=='m' || c2=='n' ||c2=='o' || c2=='p' || c2=='q' || c2=='r' || c2=='s' || c2=='t' || c2=='u' || c2=='v' || c2=='w' || c2=='x' || c2=='y' || c2=='z'){
        printf("You have entered an alphabet letter\n");
    } else {
        printf("You have entered a special character or a capital \n\n");
    }

    //Question 6
    int SP, CP;

    printf("Please enter the cost price and the selling price of the product\n");
    scanf("%d%d", &CP, &P);
    if (SP>CP){
        int profit = SP - CP;
        printf("The total profit is %d\n\n", profit);
    } else {
        int loss = CP - SP;
        printf("The total loss is %d\n\n", loss);
    }

    //Question 7
    int n4, n5, n6;

    printf("Please enter 3 numbers to check which one is the maximum of the three\n");
    scanf("%d%d%d", &n4, &n5, &n6);
    if (n4>n5 && n4>n6){
        printf("%d is the maximum\n\n",n4);
    } else if (n5>n6 && n5>n6){
        printf("%d is the maximum\n\n",n5);
    } else {
        printf("%d is the maximum\n\n",n6);
    }
}