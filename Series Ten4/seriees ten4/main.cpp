
#include <iostream>
#include <string.h>
using namespace std;

struct travel_data
{
    char target[100];
    float distance;
    float time;
    char direction;


    void scan_travel_data()

    {
        printf("target: ");
        scanf_s("%s", &target,50);
        printf("distance: ");
        scanf_s("%f", &distance, 50);
        printf("time: ");
        scanf_s("%f", &time, 50);
        printf("direction: ");
        scanf_s("%s", &direction, 50);

    }
    void print()
    {
        printf("target: %s \n", target);
        printf("distance:  %f \n", distance);
        printf("time: %f ", time);
        printf("direction: %c \n", direction);
    }



};

bool travel_data_compare(struct travel_data first, struct travel_data second)
{

    if (strcmp(first.target , second.target)==0 && first.distance == second.distance && first.time == second.time && first.direction == second.direction)
        return true;
    else
        return false;
}
void print_travel_data(struct travel_data x)
{
    printf("target: %s --- distance: %f --- time: %f --- direction: %c \n", x.target, x.distance, x.time, x.direction);
}
int main() {
    struct travel_data trd[3];
    for (int i = 0; i <= 2; i++) {
        printf("%d : \n", i);
        trd[i].scan_travel_data();
    }

    for (int i = 0; i <= 2; i++)
        for (int j = i + 1; j <= 2; j++)
            if (travel_data_compare(trd[i], trd[j]))
                printf("travel %d and %d are the same travel", i, j);

    system("pause");
    return 0;
}
