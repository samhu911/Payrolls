#include "Benfits.h"
#include <cmath>
#include <string>
using namespace System;

//benefits not much variety all hard coded in rememeber for presentation 'only working with these companies'

double Benfits::CalculateHealthCoverage(double salary, String^ package)
{
    String^ premium = gcnew String("Premium Package");
    String^ gold = gcnew String("Gold Package");
    if (package == premium) // Platinum_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == gold) //Gold_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if(package == silver)//Silver_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else //none or error
    {
        return 0.0;
    }
}

double Benfits::CalculateDentalCoverage(double salary, String^ package)
{
    String^ premium = "Premium Package";
    String^ gold = "Gold Package";
    if (package == premium) // Platinum_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == gold) //Gold_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == silver)//Silver_pack
    {
        return round((salary * 0.045) * 100.0) / 100.0;
    }
    else //none or error
    {
        return 0.0;
    }
}

double Benfits::CalculateVisionCoverage(double salary, String^ package)
{
    String^ premium = "Premium Package";
    String^ gold = "Gold Package";
    if (package == premium) // Platinum_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == gold) //Gold_pack
    {
        return round((salary * 0.05) * 100.0) / 100.0;
    }
    else if (package == silver)//Silver_pack
    {
        return round((salary * 0.042) * 100.0) / 100.0;
    }
    else //none or error
    {
        return 0.0;
    }

}

double Benfits::CalculateHealthBenfits(double salary)
{
    return 0.0;
}


