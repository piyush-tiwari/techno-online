#include <iostream.h> //edited the first and the second problems
#include<string.h>    //to rectify my mistake of just asking for numerator and denominators.
#include<math.h>

using namespace std;

class fract
{
  public:
    int num;
    int den;


    fract()
    {
        cout<<"input a fraction in the form a/b"<<endl;
        string s;
        cin>>s;
        int n = s.size();
        int t=0;
        for(int i=0;i<n;i++)
        {
            if (s.at(i)=='/')
                t=i;
        }
        num=0;
        den=0;
        for(int i=t-1;i>=0;i--)
        {
            num=num + pow(10,(t-1-i))*(s.at(i)-'0');
        }
        for(int i=t+1;i<n;i++)
        {
            den= den + pow(10,n-1-i)*(s.at(i)-'0');
        }
        if(den==0)
        {
           cout<<"denominator can't be zero"<<endl;
           fract b;
           num=b.num;
           den=b.den;
        }


    }
    fract (int a)
    {

    }
    void disp()
    {
        cout<<num<<"/"<<den<<endl;
    }
    void inv()
    {
       fract a(1);
       a.num=den;
       a.den=num;
       if (num==0)
       {
           cout<<"inverse does not exist";
       }
       else
       {
           cout<<"the inverse is : ";
           a.disp();
       }
    }
};
int main()
{

    fract f;
    f.inv();
    return 0;
}
