#include <stdio.h>

int main()
{
    short s = 0x0203;
    int i = 0x01020304;
    long int l = 0x0102030405060708;
    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14L;

    unsigned char *p;

    printf("Octets de short :\n");
    p = (unsigned char *)&s;
    for (int j = 0; j < sizeof(s); j++)
        printf("%02x ", *(p + j));
    printf("\n\n");

    printf("Octets de int :\n");
    p = (unsigned char *)&i;
    for (int j = 0; j < sizeof(i); j++)
        printf("%02x ", *(p + j));
    printf("\n\n");

    printf("Octets de long int :\n");
    p = (unsigned char *)&l;
    for (int j = 0; j < sizeof(l); j++)
        printf("%02x ", *(p + j));
    printf("\n\n");

    printf("Octets de float :\n");
    p = (unsigned char *)&f;
    for (int j = 0; j < sizeof(f); j++)
        printf("%02x ", *(p + j));
    printf("\n\n");

    printf("Octets de double :\n");
    p = (unsigned char *)&d;
    for (int j = 0; j < sizeof(d); j++)
        printf("%02x ", *(p + j));
    printf("\n\n");

    printf("Octets de long double :\n");
    p = (unsigned char *)&ld;
    for (int j = 0; j < sizeof(ld); j++)
        printf("%02x ", *(p + j));
    printf("\n");

    return 0;
}