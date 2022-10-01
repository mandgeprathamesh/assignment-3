#include<iostream>
using namespace std;
class factorial{
    private:
        int n;
        int fact;
    public:
        void setn(int x){
            n=x;
        }
        int getn(){
            return n;
        }
        int getfactorial(){
            return fact;
        }
        void calculatefactorial(){
            int f=1,i;
            if(n<=0){
                return ;
            }
            for(i=1;i<=n;i++){
                f*=i;
            }
            fact=f;

        }
};
int main(){
    factorial f;
    f.setn(5);
    f.calculatefactorial();
    cout<<"the factorial is:"<<f.getfactorial()<<endl;
    return 0;
}
   