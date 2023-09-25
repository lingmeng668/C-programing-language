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
