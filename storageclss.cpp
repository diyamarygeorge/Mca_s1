#include <stdio.h>


int globalVar = 10;

void testStatic() {
    static int staticVar = 1;  
    printf("Static Variable: %d\n", staticVar);
    staticVar++;
}

void testRegister() {
    register int regVar = 5;   
    printf("Register Variable: %d\n", regVar);
}

void localAndGlobal() {
    int localVar = 100;  
    printf("Local Variable: %d\n", localVar);
    printf("Global Variable : %d\n", globalVar);
}

int main() {
    
    printf("Calling localAndGlobal:\n");
    localAndGlobal();

    printf("\nCalling testStatic multiple times:\n");
    testStatic();  
    testStatic();  
    testStatic();  

    printf("\nCalling testRegister:\n");
    testRegister();

    printf("\nAccessing global variable directly in main: %d\n", globalVar);

    return 0;
}




