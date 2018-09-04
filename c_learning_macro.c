/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>
/* Macro Expansion
 * General form: 
 * – #define   macro_template   macro_expansion
 * – #define   macro_name  char_sequence
 */
#define AND &&
#define OR ||
#define EXCELLENT (x>=75)
#define DUDLEY printf("Dudley!\n")
#define MIN 1
#define MAX 9
#define MIDDLE (MAX-MIN)/2
#define ISLOWER(y) (y>=97&&y<=122)
#define HLINE for(i=0;i<40;i++) \ 
                printf("_");         
#define PASTE(arg1,arg2) arg1##arg2

int main(int argc, char** argv) {

    int a=1, b=1, c=0, d, i, x=70;
    char ch='a';
    int value_1=1000;

    
    if(a==1 AND b==1) {
        printf("%d AND %d is true.\n",a,b);    
    }
    
    if(a==1 OR c==0) {
        printf("%d AND %d is true.\n",a,c);    
    }
    
    if(EXCELLENT)    {
        printf("Excellent!\n");
    }
    else {
        DUDLEY;
    }
    
    printf("Middle of %d and %d is %d\n",MIN,MAX,MIDDLE);
           
   if(ISLOWER(ch))    {
        printf("Lower case letter!\n");
    }
    else {
        printf("Not lower case letter!\n");
    }

    HLINE;
    
    printf("\nvalue_1 = %d\n", PASTE(value_,1));
    
    printf("\n\n");
    
    return (EXIT_SUCCESS);
}