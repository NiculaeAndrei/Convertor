#include <iostream>

using namespace std;



float lungime_m_to_cm(float value)
{

    return value*100;
}

float lungime_m_to_dm(float value)
{

    return value*10;
}




float lungime_m_to_mm(float value)
{

    return value*1000;
}



float lungime_m_to_inch(float value)
{

    return value*39.3701;
    }



float lungime_m_to_feet(float value)
{

    return value*3.28084;
}

float lungime_m_to_yard(float value)
{

    return value*1.09361;
}

float lungime_m_to_naumile(float value)
{

    return value*0.000539957;
}

float lungime_m_to_mile(float value)
{

    return value*0.000621371;
}


float lungime_mile_to_kilometer(float value)
{

    return value*1.60934;
}

float lungime_kilometer_to_mile(float value)
{

    return value*0.621371;
}



float lungime_yard_to_kilometer(float value)
{

    return value*1093.62;
}


float viteza_kmh_to_mph(float value)
{

    return value*0.621371;
}

float viteza_kmh_to_mps(float value)
{

    return value*0.277778;
}

float viteza_mph_to_kph(float value)
{

    return value*1.60934;
}

float viteza_mph_to_mps(float value)
{
    return value*0.44704;
}

float viteza_mps_to_mph(float value)
{

    return value*2.23694;
}

float viteza_mps_to_kph(float value)
{

    return value*0.621371;
}

float temperature_celsius_to_kelvin(float value)
{

    return value+273.15;
}

float temperature_kelvin_to_celsius(float value)
{

    return value-273.15;
}

float temperature_celsius_to_fahrenheit(float value)
{

    return value*1.8+32;
}


float temperature_fahrenheit_to_celsius(float value)
{
  float x=value-32;
  x/=1.8;
    return x;
}

float temperature_kelvin_to_fahrenheit(float value)
{// t(f)=t(k)*1.8-459.67
    float x=value*1.8;
    x-=459.67;
    return x;
}

float temperature_fahrenheit_to_kelvin(float value)
{
    float x=value+459.67;
    x*=1.8;
    return x;
}


int main()
{

    float test=1;

    cout<<lungime_m_to_cm(test)<<endl;

    cout<<temperature_kelvin_to_fahrenheit(test)<<endl;

    cout<<viteza_mps_to_mph(test)<<endl;

    cout<<viteza_kmh_to_mph(test)<<endl;
    return 0;
}
