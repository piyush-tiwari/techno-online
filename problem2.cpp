#include<bits/stdc++.h>
using namespace std;

class fract
{
    int num,den;

public:
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
        cout<<num<<"/"<<den;
    }

    void reduce()
    {
        int a,b;
        if(num<den)
        {
            a=num;
            b=den;
        }
        else
        {
            b=num;
            a=den;
        }
        int gcd=a;
        while(!(a%gcd==0 && b%gcd==0))
        {
            gcd--;
        }
        num=num/gcd;
        den=den/gcd;
    }


    friend void create(fract*);
    friend fract add(fract,fract);
};

fract add(fract a, fract b)
{
    fract c;
    c.num = (a.num)*(b.den) + (a.den)*(b.num);
    c.den = (a.den)*(b.den);
    c.reduce();
    return c;
}

void create(fract *p)
{
    cout<<"Enter the primary matrix, separate the numerator and denominator by a space, columns by two spaces and rows by a line :"<<endl;
    int a,b;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a>>b;
            (*((p)+(3*i)+(j))).num=a;
            (*((p)+(3*i)+(j))).den=b;
        }
    }
}

void transpose(fract *p)
{
    cout<<"the transpose is :"<<endl;
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        {
            (*((p)+(j)+(3*i))).disp();
            cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void trace(fract *p)
{
    fract t;
    t=add((*p),(*((p)+(4))));
    t=add(t,(*((p)+(8))));
    cout<<"the trace is : ";
    t.disp();
}

int main()
{
    static fract A[3][3];
    fract *p;
    p=&A[0][0];
    create(p);
    cout<<endl;
    transpose(p);
    trace(p);
    return 0;
}
