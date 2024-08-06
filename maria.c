#include <stdio.h>

void positive_or_negative(int num)
{
    if (num > 0)
    {
        printf("positive");
    }
    if (num == 0 || num < 0)
    {
        printf("non positive");
    }


}


int main()
{
    positive_or_negative(0);

    return(0);
}