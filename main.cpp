#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double k(const double x);
int main() {
    double zp, zk, m;
    int n;
cout << "zp = "; cin >> zp;
cout << "zk = "; cin >> zk;
cout<<"n = ";cin>>n;
cout << fixed;
cout << "----------------------" << endl;
cout << "|" << setw(5) << "z" << "   |"
    << setw(10) << "m" << " |"
    << endl;
  cout << "----------------------" << endl;

    double dz = (zk-zp)/n;
    double z = zp;
    cout<<fixed;
    while (z <= zk)
    {
m = k(z*z+1)-k(z*z)+2*k(z);
    cout << "|" << setw(5)  << setprecision(2) << z      << "   |"
               << setw(4) << setprecision(2) << m << setprecision(5)<<"      |"
                << endl;
z += dz;
}
return 0; }
double k(const double x)
{
    if (abs(x) >= 1)
        return (exp(x)+sin(x)/cos(x)*cos(x)+1);
else
{
        double S=0;
        int i=0;
        double a=1;
        S = a;
        do
        {
            i++;
            double R = 1;
            a *= R;
            S += a;
        } while(i<5);

        return (1./exp(x))*S;
    
    }
}
