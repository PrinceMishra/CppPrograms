#include <iostream> 
using namespace std; 
class Number
{
    int num;
    public:
    Number(int n)
    {
        num=n;
    }
    void print(float avg)
    {
        cout<<avg<<endl;
    }
    void solution()
    {
        float sum=0;
        int greater=0;
        int lesser=0;
        float avg;
        float n=0;
        int thisNum=num;
        while(thisNum>0)
        {
            sum+=thisNum%10;
            thisNum=thisNum/10;
            n++;
        }
        avg=(sum/n);
        print(avg);
        while(num>0)
        {
            int rem=num%10;
            if(rem>avg)
            {
                greater++;
            }
            else if(rem<avg)
            {
                lesser++;
            }
            num=num/10;
        }
        cout<<greater<<" "<<lesser<<endl;
    }

};
int main()
{
     Number n1(4328);
     n1.solution();
     return 0;
}
