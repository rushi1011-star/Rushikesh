
// #include<stdio.h>
// #include<string.h>
//  int main(){
//     char str[20];
//     int i=0;
//     printf("enter the string name:");
//     gets(str);

//     while(str[i]!='\0'){
//         i++;
//     }
//     i--;
//     while(i>=0){
//         printf("%c",str[i]);
//         i--;
//     }
//    return 0;
//  }

// #include<stdio.h>
// int main(){
//     char str[100];
//     int i;
//     printf("enter your string:");
//     gets(str);
//     for(i=;str[i]!='\0';i++);
//     i--;
//     for(i>=0){
//         printf("%c",str[i]);
//         i--;    
//     }
//     return 0;


// }
// c program copy on another string without using string function


#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i;

    printf("Enter the string: ");
    gets(str1); 
    
    for(i = 0; str1[i] != '\0'; i++) {
        str2[i] = str1[i];
    }

    str2[i] = '\0'; 

    printf("Copied string is: %s\n", str2);

    return 0;
}

