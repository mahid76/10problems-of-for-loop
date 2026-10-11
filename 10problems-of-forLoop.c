////01.Sum of Odd Numbers (1 to N)
//#include<stdio.h>
//int main()
//{
//    int i ,n, sum=0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    for(i=1; i<=n; i+=2)
//    {
//        sum+=i;
//    }
//    printf("The sum is: %d\n", sum);
//}



////02. print even number
//#include<stdio.h>
//int main()
//{
//    int i ,n;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    for(i=2; i<=n; i+=2)
//    {
//        printf("%d\n", i);
//    }
//}



////03 Write a program that will print following series upto Nth terms.
////1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, .......
//#include<stdio.h>
//int main()
//{
//    int i ,n, count=1;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    for(i=0; i<n; i++)
//    {
//        printf("%d ", count);
//        count =i%2;
//    }
//}



////04. Write a program that will take N numbers as inputs and compute their average.
//#include<stdio.h>
//int main()
//{
//    int i ,n;
//    float num,avg=0,total=0;
//    printf("how many number you want to avg: ");
//    scanf("%d",&n);
//    for(i=1; i<=n; i++)
//    {
//        printf("%d : ", i);
//        scanf("%f", &num);
//        total+=num;
//    }
//    avg=total/n;
//    printf("Avg is:%f", avg);
//}



////05. Find the factorial of a given number N.
//#include<stdio.h>
//int main()
//{
//    int i ,n, factorial=1;
//    printf("Enter a number: ");
//    scanf("%d",&n);
//    for(i=1; i<=n; i++)
//    {
//        factorial*=i;
//    }
//
//    printf("factorial is: %d", factorial);
//}




////06. Power of a Number
//#include<stdio.h>
//int main()
//{
//    int i ,n,p,result=1;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    printf("Enter power: ");
//    scanf("%d", &p);
//
//    for(i=1; i<=p; i++)
//    {
//        result*=n;
//    }
//
//    printf("result is: %d", result);
//}




////07. Fibonacci Series
////0, 1, 1, 2, 3, 5, 8, 13, 21, 34
//#include<stdio.h>
//int main()
//{
//    int i ,n,countOne=0,countTwo=1, next;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    for(i=0; i<n; i++)
//    {
//        printf("%d, ", countOne);
//        next=countOne+countTwo;
//        countOne=countTwo;
//        countTwo=next;
//    }
//}


////08.Multiplication Table
//#include<stdio.h>
//int main()
//{
//    int i ,n,total;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    for(i=0; i<=10; i++)
//    {
//        total=n*i;
//        printf("%d * %d = %d\n", n,i,total);
//    }
//}



////09.Count Digits
//#include<stdio.h>
//int main()
//{
//    int n,digit=0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//
//    for( ; n>0; n/=10)
//    {
//        digit++;
//    }
//        printf("%d", digit);
//}



////10.Sum of even Numbers (1 to N)
//#include<stdio.h>
//int main()
//{
//    int i ,n, sum=0;
//    printf("Enter a number: ");
//    scanf("%d", &n);
//    for(i=2; i<=n; i+=2)
//    {
//        sum+=i;
//    }
//    printf("The sum is: %d\n", sum);
//}
