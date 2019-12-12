#include <bits/stdc++.h>

using namespace std;

int* OR(int *p)  //the OR function, using pointers to send an array through.
{                //keep the O array static so it doesn't get lost when exiting the function.
    static int O[3][3];
    int *or_p;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(((*((p)+(6*i)+(2*j))))==0 && (*((p)+(6*i)+(2*j)+(1)))==0)  //the bitwise OR gave me weird results here, any ideas why?
                O[i][j]=0;
            else
                O[i][j]=1;
        }
    }

    or_p = &O[0][0];
    cout<<"The O matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<O[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return or_p;

}

int * AND(int *p) //pretty much the same thing as OR
{
     static int D[3][3];
    int *and_p;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(((*((p)+(6*i)+(2*j))))==1 && (*((p)+(6*i)+(2*j)+(1)))==1)
                D[i][j]=1;
            else
                D[i][j]=0;
        }
    }

    and_p = &D[0][0];
    cout<<"The D matrix is :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<D[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return and_p;

}

int comp(int *p,int *q)
{
    int c=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if( *((p)+(3*i)+(j)) == *((q)+(3*i)+(j)) )
                c=c+((3*i)+j+1);

        }
    }
    return c;
}

int main()
 {
    static int A[3][3][2];
    cout<<"Input the primary matrix, separate the elements in a position by a space, the columns by two spaces, and the rows by a line :"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                    cin>>A[i][j][k];
            }
        }
    }
    cout<<endl;
    int *p;
    p=&A[0][0][0];

    int *or_p;
    or_p=OR(p);

    int *and_p;
    and_p=AND(p);

    int c;
    c=comp(or_p,and_p);
    cout<<"The required value : "<<c;

    return 0;
}
