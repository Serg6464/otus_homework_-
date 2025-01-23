#ifndef D4AB7306_0F6F_4356_8C90_68FC5EB5D2AC
#define D4AB7306_0F6F_4356_8C90_68FC5EB5D2AC

/*
    Define test class that will be unit tested
*/
#include <string>
#include <vector>
#include <math.h>

class TestClass
{
public:
//нахождение корней квадратного уравнения вида ax^2+bx+c=0
    static std::vector <double> solve(double a, double b, double c)     
    {
        if( !isfinite(a) || !isfinite(b) || !isfinite(c) )
        {
            throw "args not valid";
        }
        if( fabs(a)< 10e-7 )
        {
            throw "a not valid";
        }
        double Discr = b*b - 4.0*a*c;
        if( Discr < 0.0 )
        {
            return std::vector<double> {};
        } else 
        {
            if( Discr > 10e-7 )
            { // два корня
                double x1 = -b + sqrt(Discr)/(2.0*a);
                double x2 = -b - sqrt(Discr)/(2.0*a);

                return std::vector <double> { x1, x2 };
            } else
            {
                //один корень
                double x1 = -b/(2.0*a);
                return std::vector <double> { x1 };
            }
        }
    }

    static std::string getLogo()
    {
        const std::string m_logo = R"(OTUS HOMEWORK 1    
    )";
        return m_logo;
    }
};

#endif /* D4AB7306_0F6F_4356_8C90_68FC5EB5D2AC */
