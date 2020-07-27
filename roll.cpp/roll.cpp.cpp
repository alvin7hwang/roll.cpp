// First.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>
#include <string.h>
#define MAP_WIDTH 10
#define MAP_HEIGHT 10

#define WALL 2
#define GEM 1
#define ROAD 0
//2020 07 20
int Sum(int a, int b);
//void Add();
int Input(int a, int b);
int Output(int a, int b, int sum);


int main()
{
    /*char age = 20;
    float height = 10;
    float weight = 10;
    int mon_hp = 10;
    int atk_player = 2;
    char ch = 'a';
    char name[11] = "Um Jun Sik";
    mon_hp = mon_hp - atk_player;
    printf("%d \n", mon_hp);
    printf("제 나이는 %d 입니다. 키는 %.1f이고 몸무게는 %.1f입니다.", age, height ,weight);
 }*/

 /*int num = 123;

 printf("[%-8s]  [%4s]   [%10s]\n", "이름", "나이", "주소");
 printf("[%-8s]  [%4s]   [%10s]\n", "황윤재", "20", "서울특별시");
 printf("[%-8s]  [%4s]   [%10s]\n", "원빈", "41", "수원시");
 printf("[%-8s]  [%4s]   [%10s]\n", "제갈공명", "202", "인천광역시");

 printf("%.10d\n", num);
 printf("%.2f\n", 3.14);
 printf("%.5s\n", "hello world");
}*/

/*int a = 0, b = 0;
printf("first sum = ");
scanf("%d", &a);
printf("first sum: %d\n", a);

printf("second sum = ");
scanf("%d", &b);
printf("second sum: %d\n", b);



printf("a + b = %d\n", a + b);

return 0;
}*/

/* int age = 0;
 float height = 0;
 float weight = 0;
 char name[11] = { 0 };

 printf("이름을 입력하세요(한글 5자,영문10자)\n");
 scanf("%s", name);

 printf("나이를 입력하세요\n");
 scanf("%d", &age);

 printf("키를 입력하세요\n");
 scanf("%f", &height);

 printf("몸무게를 입력하세요\n");
 scanf("%f", &weight);

 printf("이름 : %s 나이 : %d 키 : %f 몸무게 :%f ", name, age, height, weight);

 return 0;
}*/

/*int num1;
int num2;

printf("정수 두 개를 입력하세요\n");
scanf("%d%d", &num1, &num2);

if (num1 > num2)
{
    printf("%d가 더 큰 수 입니다.", num1);
}
else
{
    if (num1 == num2)
        printf("%d와 %d는 같은 수 입니다", num1, num2);

    else
    {
        printf("%d가 더 큰 수 입니다", num2);
    }
}

return 0;

}*/

/*int num1;
int num2;
int num3;

printf("정수 세 개를 입력하세요\n");
scanf("%d%d%d", &num1, &num2, &num3);

if (num1 > num2)
{
    if (num1 > num3)
    {
        if (num2 > num3)
        {
            printf("%d, %d, %d", num1, num2, num3);
        }
        else
        {
            printf("%d, %d, %d", num1, num3, num2);
        }
    }
    else
    {
        printf("%d, %d, %d", num3, num1, num2);
    }
}
else
{
    if (num2 > num3)
    {
        if (num1 > num3)
        {
            printf("%d, %d, %d", num2, num1, num3);
        }
        else
        {
            printf("%d, %d, %d", num2, num3, num1);
        }
    }
    else
    {
        printf("%d, %d, %d", num3, num2, num1);
    }
}

return 0;
}*/

/*int score;

printf("점수를 입력하세요(100-0)\n");
scanf("%d", &score);

if ((score > 100) || (score < 0))
{
    printf("입력 범위를 벗어났습니다");
}
else if (score >= 90)
{
    printf("A");
}
else if (score >= 80)
{
    printf("B");
}
else if (score >= 70)
{
    printf("C");
}
else if (score >= 60)
{
    printf("D");
}
else
{
    printf("F");
}

return 0;


}*/

/*int score;

printf("점수를 입력하세요\n");
scanf("%d", &score);

if ((score > 100) || (score < 0))
{
    printf("입력 범위를 벗어났습니다");
}
else
{
    switch (score / 10)
    {
    case 10:
    case 9:
        printf("A");
        break;
    case 8:
        printf("B");
        break;
    case 7:
        printf("C");
        break;
    case 6:
        printf("D");
        break;
    default:
        printf("F");
        break;
    }
}

return 0;
}*/

/*char name[11] = { 0, };
int gender = 0;
float height = 0.0;
float weight = 0.0;
float bmi = 0.0;

printf("이름을 입력하세요\n");
scanf("%s", name);

printf("성별을 입력하세요(남자 1, 여자 2)\n");
scanf("%d", &gender);

printf("키를 입력하세요\n");
scanf("%f", &height);

printf("몸무게를 입력하세요\n");
scanf("%f", &weight);

bmi = weight / ((height / 100.0f) * (height / 100.f));

if (bmi < 18.5)
{
    printf("%s님의 bmi지수는 %f이고, 저체중입니다.", name, bmi);
}
else if (bmi >= 18.5 && bmi < 23)
{
    printf("%s님의 bmi지수는 %f이고, 정상체중입니다.", name, bmi);
}
else if (bmi >= 23 && bmi < 25)
{
    printf("%s님의 bmi지수는 %f이고, 과체중입니다.", name, bmi);
}
else if (bmi >= 25 && bmi < 30)
{
    printf("%s님의 bmi지수는 %f이고, 비만입니다.", name, bmi);
}
else
{
    printf("%s님의 bmi지수는 %f이고, 고도비만입니다.", name, bmi);
}
return 0;
}*/

/*int num = 0;
int sum = 0;

printf("정수를 입력하세요\n");
scanf("%d", &num);

for (int i = 0; i <= num; i++)
{
    sum += i;
}

printf("1부터 %d까지의 정수의 합은 %d입니다", num, sum);

return 0;
}*/

/*char name[] = "Welcome to SBS Games Academy";
for (int i = 0; i < strlen(name); i++)
{
    printf("%c%d\n", name[i], i);
}
return 0;
}*/

/*int line = 0;

printf("정사각형의 변의 길이를 입력하세요\n");
scanf("%d", &line);

for (int i = 0; i < line; i++)
{
    for (int j = 0; j < line; j++)
    {
        putchar('*');
    }
    putchar('\n');
}
return 0;
}*/

/*int line = 0;

printf("삼각형의 높이를 입력하세요\n");
scanf("%d", &line);


    for (int i = 0; i < line; i++)
    {
        line - i;
        for (int j = 0; j < line - i; j++)
        {
            putchar(' ');
        }
        for (int j = 0; j <= 2*i; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }

return 0;
}*/

/*int num = 0;
int sum = 0;
int i = 0;

printf("정수를 입력하세요\n");
scanf("%d", &num);

while (i <= num)
{
    sum += i;
    i++;
}

printf("1부터 %d까지의 정수의 합은 %d", num, sum);

return 0;
}*/

/*int i = 65;
while (i <= 122)
{
    printf("%5d - %c\t\t", i, i);
    i++;
}
printf("\n\n");
return 0;
}*/

/*int step = 0;
int num = 1;

while (true)
{
    printf("출력할 단을 입력하세요\n");
    scanf("%d", &step);
    if (step < 0 || step >9)
    {
        break;
    }
    while (num <= 9)
    {
        printf("%d * %d = %d\n", step, num, step * num);
        num++;
    }
    num = 1;
    putchar('\n');
}
return 0;
}*/

/*int students[5] = { 5 };

for (int i = 0; i < 5; i++)
{
    printf("%d번 학생 출석 확인(O,X)\n", i + 1);
    scanf("%c", &students[i]);

    while (getchar() != '\n');//입력 버퍼 삭제

}
putchar('\n');
for (int i = 0; i < 5; i++)
{
    printf("%d번 학생 출석 : %c\n", i + 1, students[i]);
}
return 0;
}*/

/*int num[5][7] = { 0, };
int count = 1;

for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 7; j++)
    {
        num[i][j] = i + 1 + j * 7;
    }
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%4d", num[i][j]);
    }
    putchar('\n');
}
return 0;
}*/

/*int num[5][7] = { 0, };
int count = 1;
for (int i = 0; i < 5; i++)
{
    if (i % 2 == 0)
    {
        for (int j = 0; j < 7; j++)
        {
            num[i][j] = count++;
        }
    }
    else
    {
        for (int j = 7 - 1; j >= 0; j--)
        {
            num[i][j] = count++;
        }
    }
}
for (int i = 0; i < 5; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%2d", num[i][j]);
    }
    putchar('\n');
}
return 0;
}*/

/*int map[MAP_HEIGHT][MAP_WIDTH] = { 0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
                                   0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                                   2, 2, 2, 2, 2, 2, 2, 0, 0, 2,
                                   2, 0, 0, 0, 0, 0, 2, 2, 0, 2,
                                   2, 0, 0, 1, 0, 0, 2, 2, 0, 2,
                                   2, 2, 2, 2, 2, 0, 2, 2, 0, 2,
                                   2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                                   2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                                   2, 0, 0, 0, 0, 0, 0, 0, 0, 2,
                                   2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };


for (int i = 0; i < MAP_HEIGHT; i++)
{
    for (int j = 0; j < MAP_WIDTH; j++)
    {
        if (map[i][j] == ROAD)
        {
            printf("=");
        }
        if (map[i][j] == GEM)
        {
            printf("*");
        }
        if (map[i][j] == WALL);
        {
            printf("ㅁ");
        }
    }
    printf("\n");
}
return 0;
}*/

/*int a, b;

printf("더할 두 수를 입력하세요\n");
scanf("%d%d", &a, &b);
printf("%d + %d = %d", a, b, Sum(a, b));
return 0;
}*/

/*for (int i = 0; i < 5; i++)
{
    Add();
}
return 0;
}
void Add()
{
    static int add;
    printf("현재 값 = %d\n", ++add);
}*/

    static int a, b, sum;
    Input(a, b);
    Sum(a, b);
    Output(a, b, sum);
    return 0;
}