//c语言是一门结构化的语言  顺序结构 选择结构 循环结构
//分支语句 if switch
//循环语句 while for   do while    for循环 while循环 do while循环
//c语言中用；隔开的就是一个语句
/*
int main()
{
  int a = 0;
  ;
  return 0;
}

三个语句 第二行为空语句
！！！！会用到
*/

分支语句（选择语句）
/*
 if(表达式)
   表达式为真则执行

if*()
  语句1;
  else
  语句2；
  为真执行1 为假执行2

  if()
    语句1
    else if()
    语句2；
    else
    语句3
    1不成立执行语句2 表达式2不成立执行3
  */

int main()
{
  int age = 10;
  if(age < 18)
    printf("年龄小于18岁,年龄为%d",age)
      else if(age > 18 && age <38)
      printf("青年")
  return 0;
}

//0为假 非0一切全为真。
//else 只与最近的if匹配 就近原则
/*
int a = 0;
int b =2;
if(a == 1)
  if( b == 2)
  printf("aa");
else
    printf("bb");
*/
//不打印任何信息 第一个if不满足

int main()
{
  int num = 10
  if (num % 2 ==1){
    printf("zhishu")
  }
  return 0;
}


//循环语句
//打印奇数
#include <stdio.h>

int main()
{
  int a;
  for(a=1;a<100;a++)
    {
      if(a % 2 == 1)
      {
        printf("%d\n",a);
      }
    }
}

int main ()
{
  int a;
  while(a <= 100)
    {
      printf("%d\n",a)
      a+=2
    }
}
//上述两个程序功能一致 但是第二种效率更高 只执行更少循环
