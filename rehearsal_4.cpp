#include <iostream>
#include<string>
using namespace std;
string conpress(string x)
{
    int i=0,h;
    string y;
    h =  x.size();
  
    while (i<x.size())
    {   
        y+= x[i];
        
        i+=3;
        
    }
    return  y;
    


}

//Write compress() here.

int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
