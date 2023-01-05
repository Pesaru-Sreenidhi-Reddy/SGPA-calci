#include <iostream>
#include <string>
using namespace std;
    float t_gpa =0.0,c_sum =0.0;
class Subject
{
  string  grade;
  float credits;
  float sub_gpa;
public:
  void read()
  {
    cout<<"Enter grade:";
    cin>>grade;
    cout <<"Enter credits:";
    cin>> credits;
  }
  void calculate()
  {
  string str ="O";
     if (grade == str)
     {
      sub_gpa = 10*credits;
     }
    str ="A+";
     if (grade == str)
     {
      sub_gpa = 9*credits;
     }
     str ="A";
     if (grade == str)
     {
      sub_gpa = 8*credits;
     }
 str ="B+";
     if (grade == str)
     {
      sub_gpa = 7*credits;
     }
 str ="B";
     if (grade == str)
     {
      sub_gpa = 6*credits;
 str ="C";
     if (grade == str)
     {
      sub_gpa = 5*credits;
     }
 str ="F";
     if (grade == str)
     {
      sub_gpa = 0;
     }
     }

  }
  void sum()
  {
    t_gpa += sub_gpa ;
c_sum += credits;
  }
};

void display()
{  float sgpa;
  sgpa = t_gpa/c_sum;
  cout<<"\nSGPA:"<<sgpa;
}
int main()
{
  int i,n;
  Subject S[20];
  cout<<"Enter number of subjects:";
  cin>>n;
  for(i =0; i<n; i++)
  {
  S[i].read();
  S[i].calculate();
  S[i].sum();
  if(i==n-1)
  cout<<"\nGrade points:"<<t_gpa<<"\n"<<"Credit points:"<<c_sum;
}
display();
  return 0;
}
