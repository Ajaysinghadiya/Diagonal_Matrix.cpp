#include<iostream>
using namespace std;

class Diagonal_Matrix
{
    public:

    int *aarray;

    int n;

    void set_value(int i,int j,int x);

    void get_value(int i,int j);

    void display();

};

void Diagonal_Matrix::get_value(int i,int j)
{
    if(i==j)
    {
        cout<<aarray[i-1];
    }
}

void Diagonal_Matrix::set_value(int i,int j,int x)
{
    if(i==j)
    {
        aarray[i-1]=x;
    }
}
void Diagonal_Matrix::display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                cout<<aarray[i]<<" ";
            }
            else
            {
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
Diagonal_Matrix DM;
DM.n=5;
DM.aarray=new int [DM.n];
DM.set_value(1,1,4);
DM.set_value(2,2,6);
DM.set_value(3,3,5);
DM.set_value(4,4,8);
DM.set_value(5,5,12);

DM.display();

    return 0;
}
