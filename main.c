#include<stdio.h>
#include<windows.h>
int main()
{
    printf("Cre: Binh Duc\n\n");
char a[20],b[20];
printf("ghi ten vao di nao :");
gets(a);
printf("Nhap ngay sinh :");
gets(a);
printf("\nTuyet voi =>>\n");
for(int i=0;i<=100;i++)
{
printf("Dang xu ly %d%%\n",i);
Sleep(10);
}
char s[1000];
FILE* f = fopen("input.txt", "r");
while (!feof(f))
 {
fgets(s, sizeof(s), f);
printf("%s", s);
Sleep(100);
}
}
