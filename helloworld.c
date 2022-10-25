#include <stdio.h>

int main()
{
    // this is my first C code
    printf("Hello world\n");
    /*
    this
    is
    a
    comment
    */
    printf("My name is udoagwa chiemelie\n");
    // metrix
    printf("1\t2\t3\n");
    printf("4\t5\t6\n");
    printf("7\t8\t9\n");

    int x = 10; // initialization and decoration
    int y;      // decoration
    y = 2;      // initialization
    int age = 21; // this is a number and to print you need %d
    char name[] = "mario neirus"; // array character and to print you need %s
    char grade = 'A';// this is a character and to print you need %c
    float percentage = 89.9; // thsi is a float and to print you need %f
    printf("hello %s\n", name);
    printf("you are %d years old\n", age);
    printf("your grade is '%c'\n", grade);
    printf("percentage = %f\n", percentage);
    printf("What a nice result %s\n",name);

    //prices of textbooks i used to study
    
    float english = 50.00;
    float maths = 100.00;
    float sureguid =5.00;

    //to insert a dollar sign you  will first add ":"

    printf("sureguid=: $%-8.2f\n",sureguid);
    printf("englis=: $%-8.2f\n",english);
    printf("maths=: $%-8.2f\n",maths);

    //to declear a constant 

    const float PI= 3.14159;
    printf("%f",PI);
    return 0;
}