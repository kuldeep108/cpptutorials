#include<iostream>
using namespace std;

//how to add two complex numbers

class complex
{
 private:
 int a,b;

 public:

 void set_data(int x ,int y)
 {
 a=x; b=y;
 }

 void show_data()
 {
  cout<<"a="<<a<<" b="<<b;
 }

 complex add(complex c)
 {
  complex temp;
  temp.a=a+c.a;
  temp.b=b+c.b;
  return(temp);
 }
};


int main()
{
  complex c1,c2,c3;
  c1.set_data(3,4);
  c2.set_data(5,9);
  c3=c1.add(c2);
  c3.show_data();
}













/* #include<iostream>
using namespace std;

//making class and making private and public members

class complex
{
  private:
  int a,b;
  
  public:
  void set_data(int x ,int y)
  {a=x;  b=y;}
 void show_data()
 {
  cout<<"a="<<a<<" b="<<b;
 }
};




int main ()
{
  complex c1;   //c1 will be called as an object
  c1.set_data(3,5);
  c1.show_data();
}
*/






/*
//eg of making function inside the structure
struct book
{
  int bookid;
  char title[20];
  float price;
  
  void input()    //pronounced as member function
  {
    cout<<"enter bookid title and price of book";
    cin>>bookid>>title>>price;
  }

  void display()  //member function
  {
    cout<<"\n"<<bookid<<" "<<title<<" "<<price;
  }
};

int main()
{
  book b1;
  b1.input();  //calling memberfunction with the help of .operator
  b1.display();
  */







/*struct book
{
  int bookid;
  char title[20];
  float price;
};
book input();
void display(book);

int main()
{
  book b1;
  b1=input();
  display(b1);

}

void display(book b)
{
  cout<<b.bookid<<" "<<b.title<<" "<<b.price;
}
book input()  //function returning structure
{
  book b;
 cout<<"Enter bookid , title and price of book";
 cin>>b.bookid>>b.title>>b.price;
 return(b);
}*/