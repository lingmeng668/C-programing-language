//储存类--存储类定义 C 程序中变量/函数的存储位置、生命周期和作用域 


//auto 类型 这个指的是局部变量默认储存，首先会在函数开始时被创建 并且 在函数结束后 该储存会被破坏
{
   int mount;
   auto int month;
}
//auto 只能修饰局部变量

//register 类型 这个是储存在寄存器中的
{
   register int  miles;
}
//且register使用可以提高程序运行速度
//！！！！！！使用register不代表在寄存器中 代表可以被储存 是否储存要看硬件


//static  修饰局部变量  不再会被重置


#include <stdio.h>
 
/* 函数声明 */
void func1(void);
 
static int count=10;        /* 全局变量 - static 是默认的 */
 
int main()
{
  while (count--) {
      func1();
  }
  return 0;
}
 
void func1(void)
{
/* 'thingy' 是 'func1' 的局部变量 - 只初始化一次
 * 每次调用函数 'func1' 'thingy' 值不会被重置。
 */                
  static int thingy=5;
  thingy++;
  printf(" thingy 为 %d ， count 为 %d\n", thingy, count);
}


//extern 储存 获取其他文件的变量

//eg

//a.c
#include <stdio.h>
 
int count ;
extern void write_extern();
 
int main()
{
   count = 5;
   write_extern();
}

//b.c
#include <stdio.h>
 
extern int count;
 
void write_extern(void)
{
   printf("count is %d\n", count);
}

/*
auto 是局部变量的默认存储类, 限定变量只能在函数内部使用；

register 代表了寄存器变量，不在内存中使用；

static是全局变量的默认存储类,表示变量在程序生命周期内可见；

extern 表示全局变量，即对程序内所有文件可见，类似于Java中的public关键字；
*/






//运算符 笔记
/*
-相减
+相加
*相乘
/分子除以分母
%获得整数
++自加
--自减
*/

//a++ 与 ++a区别
/*
#include <stdio.h>
 
int main()
{
   int c;
   int a = 10;
   c = a++; 
   printf("先赋值后运算：\n");
   printf("Line 1 - c 的值是 %d\n", c );
   printf("Line 2 - a 的值是 %d\n", a );
   a = 10;
   c = a--; 
   printf("Line 3 - c 的值是 %d\n", c );
   printf("Line 4 - a 的值是 %d\n", a );
 
   printf("先运算后赋值：\n");
   a = 10;
   c = ++a; 
   printf("Line 5 - c 的值是 %d\n", c );
   printf("Line 6 - a 的值是 %d\n", a );
   a = 10;
   c = --a; 
   printf("Line 7 - c 的值是 %d\n", c );
   printf("Line 8 - a 的值是 %d\n", a );
 
}
*/
