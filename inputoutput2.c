/*
        1.  Character Format Specifier ==> %c in C
                The %c is the format specifier for the char
                data type in C language. 



        2.  Integer Format Specifier (signed) – %d in C
                The %d is the format specifier for the signed 
                integer data type in c language.

                The int type in C is a signed integer, 
                which means it can represent both negative and positive numbers. 

                A signed integer is a 32-bit data that encodes an integer in the
                range [-2147483648 to 2147483647]. 



        3.  unsigned Interger Format Specifier -%u in c
                The %u is the format specifier for the unsigned
                integer data type in c language.

                This is in contrast to an unsigned integer 
                (which can be used by declaring a variable unsigned int),
                which can only represent positive numbers.
    
                An unsigned integer is a 32-bit datum that encodes a 
                nonnegative integer in the range [0 to 4294967295]. 



        4.  floating-point Format Specifier ==> %f in C
                The %f is the format specifier for the float
                data type in C language. 



*/

#include <stdio.h>

int main(){

    char ch;
    printf("Enter your character :");
    scanf("%c",&ch);
    printf("You have entered a charater :%c\n\n",ch);


    int signed_int;
    printf("Enter a number :");
    // %d or %i both are use in the scanf function.
    scanf("%d",&signed_int);
    printf("you have entered a number %d \n\n",signed_int);


    int unsigned_int;
    printf("Enter a number :");
    // %d or %i both are use in the scanf function.
    scanf("%u",&unsigned_int);
    printf("you have entered a unsigned number %u \n",unsigned_int);


    float decimal_number;
    printf("Enter a decimal number :");
    //%f,%e,%E are use in the scanf function.
    scanf("%f",&decimal_number);       
    printf("You have entered a decimal number %f\n",decimal_number);
    return 0;
}