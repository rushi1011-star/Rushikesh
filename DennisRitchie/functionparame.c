// function with return type and with parameters 
// function with return type and without parameters 
// function without return type and with parameters 
// function without return type and without parameters 

// function with return type and with parameters 
#include<stdio.h>
int calculatearea();
int main()
{
    int base,height;
    float area;
    printf("Enter the base and height:");
    scanf("%d%d",&base,&height);
    area=calculatearea(base,height);
    printf("area of triangle is:%f",area);
}
int calculatearea(int b,int h)
{
    int ans=0.5*b*h;
    return ans;
}

// function with return type and without parameters 
#include<stdio.h>
int calculatearea();
int main()
{
    int b,h;
    float area;
    area=calculatearea();
    printf("area of triangle is:%f",area);
    return 0;
}
int calculatearea()
{
    int base,height;
    printf("Enter the base and height:");
    scanf("%d%d",&base,&height);
    return (0.5*base*height);
}

// function without return type and with parameters 
#include<stdio.h>
void calculatearea();
int main()
{
    int b,h;
    printf("Enter the base and height:");
    scanf("%d%d",&b,&h);
    calculatearea(b,h);
    return 0;
}
void calculatearea(int b,int h)
{
    printf("area of triangle is:%f",0.5*b*h);
}

// function without return type and without parameters 
#include<stdio.h>
void calculatearea();
int main()
{
    calculatearea();
    return 0;
}
void calculatearea()
{
    int base,height;
    printf("Enter the base and height:");
    scanf("%d%d",&base,&height);
    printf("area is triangle:%f",0.5*base*height);
}