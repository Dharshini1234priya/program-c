#include <stdio.h>

int* getStaticValue() {
    static int num = 10; 
    num++;                
    return &num;           
}

int main() {

    int* ptr1 = getStaticValue();
    printf("Value from first call: %d\n", *ptr1);
    
    int* ptr2 = getStaticValue();
    printf("Value from second call: %d\n", *ptr2);
    
    int* ptr3 = getStaticValue();
    printf("Value from third call: %d\n", *ptr3);
    
    return 0;
}

