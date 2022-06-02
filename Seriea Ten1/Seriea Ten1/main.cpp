
#include <iostream>
using namespace std;

struct date_t
{
    double made_date;
    double buy_date;

    void scan_date_t()

    {
        printf("made date: ");
        scanf_s("%d", &made_date,50);
        printf("buy date: ");
        scanf_s("%d", &buy_date,50);
    }
    void print_date_t()
    {
        printf("made date: %d \n", made_date);
        printf("buy date: %d \n", buy_date);
    }
};

struct tank_t
{

    float max_capacity; //maximum tank size
    float capacity; //current tank size
    float flow; //thank flow

    void scan_tank_t()
    {
        printf("max capacity:");
        scanf_s("%f", &max_capacity,50);
        printf("capacity: ");
        scanf_s("%f", &capacity,50);
        printf("flow:");
        scanf_s("%f", &flow,50);

    }
    void print_tank_t()
    {
        printf("max capacity: %f \n", max_capacity);
        printf("current capacity: %f \n", capacity);
        printf("flow: %f \n", flow);
    }
};

struct auto_t
{
    char x;
    char factory[100];// manufacturer
    char model[100]; // model
    float odometer; //odometer

    struct date_t inst1;
    struct tank_t inst2;
    void scan_auto()
    {
        printf("factory name: ");
        scanf_s("%s", &factory,50);
        printf("model: ");
        scanf_s("%s", &model,50);
        printf("odometer: ");
        scanf_s("%d", &odometer,50);
    }
    void print_auto()
    {
        printf("factory name: %s \n", &factory);
        printf("model: %s \n", &model);
        printf("odometer: %d \n", &odometer);

    }
    void driver()
    {
        while ((x = getchar()) != EOF)
        {
            printf("driver:", &x);
        }
    }
};

int main()
{
    struct auto_t instances[2];

    for (int i = 0; i < 2; i++)
    {
        instances[i].scan_auto();
        instances[i].inst1.scan_date_t();
        instances[i].inst2.scan_tank_t();
    }

    for (int i = 0; i < 2; i++)
    {
        printf("car %d:", &i);
        instances[i].print_auto();
        instances[i].inst1.print_date_t();
        instances[i].inst2.print_tank_t();
    }


    system("pause");
    return 0;
}