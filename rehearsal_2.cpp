#include<iostream>
using namespace std;
int main()
{
    float x,y,sum;
    sum =0;
    cout << "Enter x: ";
    cin >> x;
    while (x!=0)
    {
        if  (x > 0 ) 
        {
       
        sum = sum +x;
        cout << "Enter x: ";
        cin >> x;
          
        }
        else {
            cout << "Enter x: ";
        cin >> x;
        }

    }
    
   
     cout << "sum = " << sum;
    return 0;
}
