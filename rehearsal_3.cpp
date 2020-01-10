#include <iostream>
#include<cmath>
using namespace std;
double sumSqrt(float x)
    {
        double N,sum=1,i;
        i=2;
       
        if (x>0)
        {
                while (i <= x)
        {
            sum = sum+(1/sqrt(i));
            i++;
        }
        return sum;

        }
        else
        {
            return 0;
        }
        
        
    }

    //Write sumSqrt() here.


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";

}
