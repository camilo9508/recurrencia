#include <iostream>
#include <math.h>
using namespace std;

float sucesion(int num,int a, int b, int c,int d)
{
    if (num<=3)
        return num;


    else

        {
          float temp=0;
          temp=b*(sucesion(num-1,a,b,c,d));
          temp+= c*(sucesion(num-2,a,b,c,d));
          temp+= d*(sucesion(num-2,a,b,c,d));
          return (temp/a) ;
        }

}


int main()
{
    int n=0,x=0,y=0,z=0,w=0;
    float res=0;

    cout << "Ingrese n" << endl;
    cin>>n;

    cout << "Ingrese a" << endl;
    cin>>x;

    cout << "Ingrese b" << endl;
    cin>>y;

    cout << "Ingrese c" << endl;
    cin>>z;

    cout << "Ingrese d" << endl;
    cin>>w;

    for(int i = 0; i<=n;i++)
    {

         res = sucesion(i,x,(y*-1),(z*-1),(w*-1));
         cout<<" "<<res;
    }

    return 0;
}

