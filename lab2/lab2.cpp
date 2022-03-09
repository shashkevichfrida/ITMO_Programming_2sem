#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    
    double a, b, c, x;
    cout << "Enter the coefficients a, b, c:" << endl; //3
    cin >> a >> b >> c;
    cout << "Enter x:" << endl; //1
    cin >> x;
    Polynome pol(a, b, c);
    cout << "The value at a given point and the number of roots:" << endl;
    cout << pol.point(pol, x) << endl;


    cout << pol.rootsAmount(pol) << endl; //2
    double root1, root2;
    pol.roots(pol, root1, root2);
    cout <<"Rots: " << root1 << ' ' << root2 << endl;

    
   
    double max = 0, min = 0, flmax = 0, flmin = 0; //4
    pol.maxmin(pol, min, max, flmax, flmin);
    if (flmax > 0)
    
        cout << "max = infinitas " << " min = " << min << endl;
    
    else
        cout << "max = " << max << " min = infinitas" << endl;
        

    return 0;
}