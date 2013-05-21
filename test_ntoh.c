#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

static void test_ispunct();
static void test_ntoh();

static void test_ispunct()
{
    char str[]="12_3c@ #FDsP[e?";
    int i;
    for(i=0;str[i]!=0;i++)
  if(ispunct(str[i])) printf("%c\n",str[i]);
}

static void test_ntoh()
{
    char *p = "192.168.216.66";
    uint32_t a1 = inet_addr(p);
    uint32_t a2 = ntohl(a1);
    uint32_t a3 = htonl(a2);
    uint32_t a4 = htonl(a3);
    uint32_t a5 = ntohl(a4);
    uint32_t a6 = htonl(a4);
        
    printf("a1: %u\n", a1);
    printf("a2: %u\n", a2);
    printf("a3: %u\n", a3);
    printf("a4: %u\n", a4);
    printf("a5: %u\n", a5);
    printf("a6: %u\n", a6);
    printf("a7: %s\n", inet_ntoa(a1));
    printf("a8: %s\n", inet_ntoa(a2));
}

main()
{
    //test_ispunct();

    test_ntoh();
}
