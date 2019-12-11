#include <bits/stdc++.h>

using namespace std;

class fract
{
  public:
    int num;
    int den;


    fract()
    {

    }
    fract(int a, int b)
    {
        num=a;
        den=b;
    }
    void disp()
    {
        cout<<num<<"/"<<den<<endl;
    }
    fract inv()
    {
       fract a;
       a.num=den;
       a.den=num;
       return a;
    }
};
int main()
{
    int a,b;
    cout<<"enter numerator"<<endl;
    cin>>a;
    cout<<"enter denominator"<<endl;
    cin>>b;
    while(b==0)
    {
        cout<<"enter a non zero denominator"<<endl;
        cin>>b;
    }
    fract f (a,b);
    fract c=f.inv();
    if(c.den==0)
    cout<<"the inverse does not exist";
    else
    {
         cout<<"the inverse is :";
         c.disp();
    }



    return 0;
}
