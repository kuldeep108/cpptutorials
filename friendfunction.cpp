#include <iostream>
#include<conio.h>
using namespace std;

//overloading of operator as a friend function.
class complex
{
  private:
   int a,b;
  public:
   void setData(int x ,int y)
   {a=x; b=y;}

   void showData()
   { cout<<"a="<<a<<"b="<<b; }

  friend complex operator +(complex ,complex);  //decleratrion of friend function.
   
};
complex operator +(complex X,complex Y)
{
    complex temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return(temp);

}

int main()
{
  complex c1,c2,c3;
  c1.setData(3,4);
  c2.setData(5,6);
  c3=c1+c2;
  c3.showData();
}











/*
friend function becoming friend with more  than one class

class B;  //this is called forward decleration

class A
{
  private:
   int a;
  public:
   void setData(int x)
   {a=x;}
   friend void fun(A,B);
};

class B
{
  private:
   int b;
  public:
  void setData(int y)
  {
   b=y;
  }
   friend void fun(A,B);  //Declaring friend function
  };

void fun (A o1, B o2)   //defining friend function , argument pass kiya A type ka variable name o1 same as B
{
  cout<<"sum is "<<o1.a+o2.b;
} 
int main()
{
 A c1;
 B c2;
 c1.setData(2);
 c2.setData(3);
 fun(c1,c2);
*/