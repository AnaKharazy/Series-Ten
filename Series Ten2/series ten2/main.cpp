
#include <iostream>
#include <string.h>
using namespace std;

struct employee
{
    char name[100];
    double national_code;
    int age;
    char city[100];
    double phone;
    int department_code;
    float salary;

    void scan()

    {
        printf("name: ");
        scanf_s("%s", &name,50);
        printf("mellicode: ");
        scanf_s("%d", &national_code,50);
        printf("age: ");
        scanf_s("%d", &age, 50);
        printf("city: ");
        scanf_s("%s", &city, 50);
        printf("phone: ");
        scanf_s("%d", &phone, 50);
        printf("department code: ");
        scanf_s("%d", &department_code, 50);
        printf("salary: ");
        scanf_s("%f", &salary, 50);


    }
    void print()
    {
        printf("name: %s \n", name);
        printf("mellicode: %d \n ", national_code);
        printf("age: %d \n",  age);
        printf("city: %s \n ", city);
        printf("phone: %d \n", phone);
        printf("department code: %d \n",department_code);
        printf("salary: %f \n" ,salary);
    }
};


int main()
{
    struct employee emp[3];
    for (int i = 0; i < 3; i++)
    {
        printf("employee %d \n", i);
        emp[i].scan();
    }

    struct employee temp;
    for ( int i=0;i<3;i++)
        for (int j = i; j < 3; j++)
        {
            if (strcmp(emp[i].city, emp[j].city) > 0)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    for (int i = 0; i < 3; i++)
    {
        printf("employee %d \n", i);
        printf("city: %s \n", emp[i].city);
    }
    system("pause");
    return 0;
}