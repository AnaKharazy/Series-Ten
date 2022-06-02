
#include <iostream>
#include <string.h>
using namespace std;

struct address_t
{
    int num1, num2, num3, num4;
    char nickname[10];

    void scan()

    {
        printf("num1: ");
        scanf_s("%d", &num1,50);
        printf("num2: ");
        scanf_s("%d", &num2, 50);
        printf("num3: ");
        scanf_s("%d", &num3, 50);
        printf("num4: ");
        scanf_s("%d", &num4, 50);
        printf("nickname: ");
        scanf_s("%s", &nickname, 50);



    }
    void print()
    {
        printf("address: %d.%d.%d.%d  nickname: %s \n", num1,num2,num2,num2,nickname);
    }
    int local_address(struct address_t ad1, struct address_t ad2)
    {
        if (ad1.num1 == ad2.num1 && ad1.num2 == ad2.num2 )
            return 1;
        else
            return 0;
    }
};


int main()
{
    int i = 0;
    struct address_t ad[100];
    while (1)
    {
        ad[i].scan();
        if ( ad[i].num1 == 0 && ad[i].num2==0 && ad[i].num3==0 && ad[i].num4==0)
            break;
        i++;
    }

    for (int k=0;k<i;k++)
        for (int j = k+1; j < i; j++)
            if (ad[k].local_address(ad[k], ad[j]))
                printf("The machines %s and %s are on the same local network \n", ad[k].nickname, ad[j].nickname);

    system("pause");
    return 0;
}