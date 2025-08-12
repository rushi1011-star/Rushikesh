#include <stdio.h>
#include <string.h>
#include <math.h>

// Convert Binary to Decimal
int binaryToDecimal(long long bin) {
    int dec = 0, base = 1, rem;
    while (bin != 0) {
        rem = bin % 10;
        dec = dec + rem * base;
        bin = bin / 10;
        base = base * 2;
    }
    return dec;
}
// Convert Decimal to Binary
long long decimalToBinary(int dec) {
     long long bin = 0; 
    int rem, base = 1;
    while (dec > 0) {
        rem = dec % 2;
        bin = bin + rem * base;
        dec = dec / 2;
        base = base * 10;
    }
    return bin;
}
void decimalToHex(int dec) {
    char hex[20];
    sprintf(hex, "%X", dec);
    printf("Hexadecimal: %s\n", hex);
}

// Hexadecimal to Decimal
int hexToDecimal(char hex[]) {
    int dec;
    sscanf(hex, "%x", &dec);
    return dec;
}

// Binary to Hex
void binaryToHex(long long bin) {
    int dec = binaryToDecimal(bin);
    decimalToHex(dec);
}

// Hex to Binary
void hexToBinary(char hex[]) {
    int dec = hexToDecimal(hex);
    long long bin = decimalToBinary(dec);
    printf("Binary: %lld\n", bin);
}

int main() {
    int choice;
    do {
        printf("\n-- Number System Converter --\n");
        printf("1. Binary to Decimal\n");
        printf("2. Decimal to Binary\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Hexadecimal to Decimal\n");
        printf("5. Binary to Hexadecimal\n");
        printf("6. Hexadecimal to Binary\n");
        printf("7. Exit\n");

        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                long long bin;
                printf("Enter Binary number: ");
                scanf("%lld", &bin);
                printf("Decimal: %d\n", binaryToDecimal(bin));
                break;
            }
            case 2: {
                int dec;
                printf("Enter Decimal number: ");
                scanf("%d", &dec);
                printf("Binary: %lld\n", decimalToBinary(dec));
                break;
            }
            case 3: {
                int dec;
                printf("Enter Decimal number: ");
                scanf("%d", &dec);
                decimalToHex(dec);
                break;
            }                   
            case 4: {
                char hex[10];
                printf("Enter Hexadecimal number: ");
                scanf("%s", hex);
                printf("Decimal: %d\n", hexToDecimal(hex));
                break;
            }
            case 5: {
                long long bin;
                printf("Enter Binary number: ");
                scanf("%lld", &bin);
                binaryToHex(bin);
                break;
            }
            case 6: {
                char hex[10];
                printf("Enter Hexadecimal number: ");
                scanf("%s", hex);
                hexToBinary(hex);
                break;
            }
            case 7:
                printf("Goodbye!\n");
                break;
            default:
                printf("Wrong Option! Try again\n");
        }
    } while (choice != 7);

    return 0;
}