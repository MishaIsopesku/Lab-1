#include <stdio.h>//Підключення бібліотек

 
main()
{
    int num, last ;
    printf("Enter number: ");//Ввід числа
    scanf("%d", &num);
 
    last = num%10;
    printf("Last digit of the number: %d\n", last); //Послідня цифра
 
    while(num>=10)
    {
        num = num/10;
    }
 
    printf("First digit of the number: %d\n", num); //Перша цифра
}
