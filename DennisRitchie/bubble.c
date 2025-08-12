#include<stdio.h>
int main()
{
    int num[30],i,j,temp,n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("is arrays element is:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(num[j]>num[j+1])
            {
                temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    printf("sorted arrays is:");
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
    return 0;
}





#include <stdio.h>

int main() {
    int arr[100], n, i, j, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Insertion Sort
    for(i = 1; i < n; i++) {
        key = arr[i];           // Current element to be inserted
        j = i - 1;

        // Shift elements greater than key to one position ahead
        while(j >= 0 && arr[j] > key) {                                      //insertion sort
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert key at the correct position
        arr[j + 1] = key;
    }

    printf("Sorted array is:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


// #include <stdio.h>

// int main() {
//     int arr[100], n, i, j, vacant, pos;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);

//     printf("Enter %d elements:\n", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);                             // with logic another insertion sort....
//     }

//     for(i = 1; i < n; i++) {
//         vacant = arr[i];   
//         pos = i;

//         for(j = i - 1; j >= 0; j--) {
//             if(arr[j] > vacant) {
//                 arr[j + 1] = arr[j]; 
//                 pos = j;
//             }
//             else 
//             {
//                 break; 
//             }
//         }

//         arr[pos] = vacant; 
//     }

//     printf("Sorted array is :\n");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }