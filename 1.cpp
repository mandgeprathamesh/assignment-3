#include<iostream>
using namespace std;
class complex{
    private:
    int real,imag;
    public:
     void setvalue()
    {
        cin>>real;
        cin>>imag;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
int main()
    {
        complex c1,c2;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        c1.display();
        c2.display();
          return 0;
    }