#include <stdio.h>//ϳ��������� �������

 
main()
{
    int num, last ;
    printf("Enter number: ");//��� �����
    scanf("%d", &num);
 
    last = num%10;
    printf("Last digit of the number: %d\n", last); //������� �����
 
    while(num>=10)
    {
        num = num/10;
    }
 
    printf("First digit of the number: %d\n", num); //����� �����
}
