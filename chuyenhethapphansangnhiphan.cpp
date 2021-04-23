/*
    Chuy?n s? nh? phân sang th?p phân.
        H? th?p phân: 1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0
        H? nh? phân: 101 = 1 * 2^2 + 0 * 2^1 + 1 * 2^0
 
    Cách chuy?n:
        n = 8
        0, 4 => 8 % 2 * 10 ^ 0
        0, 2 => 4 % 2 * 10 ^ 1
        0, 1 => 2 % 2 * 10 ^ 2
        1, 0 => 1 % 2 * 10 ^ 3
        int kq = 1000
 */
 
#include <stdio.h>
#include <math.h>
 
long long Dec2Bin(int decimalNumber) // Ctrl H => find & replace
{
    long long binaryNumber = 0;
    int p = 0;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, p);
        ++p;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
 
int main()
{
    int decimalNumber;
    printf("\nNhap so thap phan: ");
    scanf("%d", &decimalNumber);
    printf("Bin = %d", Dec2Bin(decimalNumber));
}
