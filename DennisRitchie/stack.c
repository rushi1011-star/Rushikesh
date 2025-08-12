#include<stdio.h> 
 
int stack[100], choice, n, top, x, i; 

void push(); 
void pop(); 
void display(); 
void peek(); 

int main() 
{ 
    top = -1; 
    printf("\n\t ENTER SIZE OF STACK : "); 
    scanf("%d", &n); 
    printf("\n\t STACK OPERATIONS USING ARRAY"); 
    printf("\n\t--------------------------------"); 
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK \n\t 5.EXIT"); 

    do 
    { 
        printf("\n\t ENTER THE CHOICE : "); 
        scanf("%d", &choice); 
        switch(choice) 
        { 
            case 1: push(); break; 
            case 2: pop(); break; 
            case 3: display(); break; 
            case 4: peek(); break; 
            case 5: printf("\n\t EXIT POINT "); break; 
            default: printf ("\n\t PLEASE ENTER VALID CHOICE (1/2/3/4)");                  
        } 
    } 
    while(choice != 5); 
    return 0; 
} 
 
void push() 
{ 
    if(top >= n-1) 
    { 
        printf("\n\t STACK IS OVERFLOW "); 
    } 
    else 
    { 
        printf("\n\t ENTER ELEMENT TO BE PUSH : "); 
        scanf("%d", &x); 
        top++; 
        stack[top] = x; 
        printf("\n\t\t %d IS INSERTED IN STACK ", x); 
    } 
} 

void pop() 
{ 
    if(top <= -1) 
    { 
        printf("\n\t STACK IS UNDERFLOW "); 
    } 
    else 
    { 
        printf("\n\t %d IS POPPED FROM STACK ", stack[top]); 
        top--; 
    } 
} 

void display() 
{ 
    if(top >= 0) 
    { 
        printf("\n STACK ELEMENTS ARE \n"); 
        for(i = top; i >= 0; i--) 
            printf("\n\t %d", stack[i]); 
    } 
    else 
    { 
        printf("\n\t STACK IS EMPTY "); 
    } 
} 
 
void peek() 
{ 
    if(top <= -1) 
    { 
        printf("\n\t STACK IS EMPTY (TOP IS -1) "); 
    } 
    else 
    { 
        printf("\n\t Top position: %d, Value: %d", top, stack[top]);
    } 
}
