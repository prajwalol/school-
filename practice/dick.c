#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    
    int size = 1, max = 5, min = 1, i, flag = 1;

    while(1) {
        Sleep(50);
        system("cls");  

        printf("8");
        for(i = 0; i < size; i++)
            printf("%c",'=');
        printf("D");
        
        if(flag == 1)
            size++;
        if(flag == 0)
            size--;
        if(size == max || size == min)
            flag = !flag;
    }
 
    return 0;
}