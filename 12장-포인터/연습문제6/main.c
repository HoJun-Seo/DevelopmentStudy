#include<stdio.h>
void arrInput(int* array, int i);

int main(void)
{
    int array[5] = {10, 20, 30, 40, 50};
    void (*pfunc)(int*, int);

    pfunc = arrInput;
    pfunc(array, 5);

    return 0;
}

void arrInput(int* array, int i){
    int k;
    for(k = 0; k < i; k++){
        printf("%d ", *(array + k));
    }
}