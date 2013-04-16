#include<stdio.h>
#define ERROR -1

int foo (int a, int b){
    printf("Foo received a=%d and b=%d\n",a,b);
    return a*b;
}


int main(int argc, char** argv)
{
    if(argc < 3){
        printf ("This program needs 2 parameters as input\n");
        return  ERROR;
    }
    int a = foo(atoi(argv[1]), atoi(argv[2]));
    printf("The return value is %d\n",a);
    return a;
}
