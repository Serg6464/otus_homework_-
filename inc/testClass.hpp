#ifndef D4AB7306_0F6F_4356_8C90_68FC5EB5D2AC
#define D4AB7306_0F6F_4356_8C90_68FC5EB5D2AC

/*
    Define test class that will be unit tested
*/
#include <string>
#include <vector>

class TestClass
{
public:
//нахождение корней квадратного уравнения вида ax^2+bx+c=0
    static vector <double> solve(double a, double b, double c)     
    {
        return vector<double> {};
    }

    static std::string getLogo()
    {
        const std::string m_logo = R"(OTUS HOMEWORK 1    
    )";
        return m_logo;
    }
};

#endif /* D4AB7306_0F6F_4356_8C90_68FC5EB5D2AC */
