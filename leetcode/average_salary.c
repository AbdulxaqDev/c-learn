#include <stdio.h>

double average(int *salary, int salarySize)
{

    int i, max = 0;
    int min = 0;
    int total = 0;

    for (i = 1; i < salarySize; i++)
    {
        if (salary[max] < salary[i])
            max = i;
        if (salary[min] > salary[i])
            min = i;
    }
    for (i = 0; i < salarySize; i++)
    {
        if (i != max && i != min)
        {
            total += salary[i];
        }
    }

    printf("max: %d, min: %d\n", salary[max], salary[min]);

    return total /
           (salarySize - 2.0);
}

int main()
{

    int salarySize = 20;
    int salary[] = {48000, 59000, 99000, 13000, 78000, 45000, 31000, 17000, 39000, 37000, 93000, 77000, 33000, 28000, 4000, 54000, 67000, 6000, 1000, 11000};

    printf("%.5lf", average(salary, salarySize));

    return (0);
}
