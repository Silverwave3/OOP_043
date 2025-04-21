# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <iomanip>
# include <cmath>

double Cylinder :: SurfaceArea(){
    double ans;
    ans = M_PI*radius*radius*2;
    ans = ans + (M_PI*height*2*radius);
    return ans;
}

double Cylinder :: Volume(){
    double ans;
    ans = M_PI*radius*radius*height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans;
    ans = M_PI*2*radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: " << fixed << setprecision(3) << cldr.Circumference() << endl;
    out << "SurfaceArea: " << fixed << setprecision(3) << cldr.SurfaceArea() << endl;
    out << "Volume: " << fixed << setprecision(3) << cldr.Volume() << endl;
    return out;
}

# endif
