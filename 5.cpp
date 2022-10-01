#include<iostream>
using namespace std;

class rev
{
        private:
                        int n,n1,rn=0,d;
        public:
                void input(){
        cout<<"\nEnter any positive no. :: ";
        cin>>n;
        }
                void calc(){
        n1=n;
        while(n>0)
        {
                d=n%10;
                rn=(rn*10)+d;
                n/=10;

        }
        }
                void display(){
                cout<<"Reverse of [ "<<n1<<" ] is :: "<<rn<<;
        }
};
int main ()
{
        rev r;
        r.input();
        r.calc();
        r.display();

        return 0;

}
