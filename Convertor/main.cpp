#include <iostream>

using namespace std;



void print_menu()
{cout<<"Converter";
cout<<"----------------------------------------"<<endl;
cout<<"1:  Lungime"<<endl;
cout<<"2:  Arie"<<endl;
cout<<"3:  Volum"<<endl;
cout<<"4:  Timp"<<endl;
cout<<"5:  Viteza"<<endl;
cout<<"6:  Temperatura"<<endl;
cout<<"7:  Masa"<<endl;
cout<<"8:  Energie"<<endl;
cout<<"9:  Presiune"<<endl;
cout<<"10: Densitate"<<endl;
cout<<"11: Consum combustibil"<<endl;


}








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



//presiune
float presiune_bar_to_psi(float value)
{

return value*14.5038;

}


float presiune_psi_to_bar(float value)
{

return value*0.0689476;

}

//consum
float consum_kpl_to_mpg(float value)
{

return value*2.824814362913;

}


float consum_mpg_to_kpl(float value)
{

return value*0.354006;

}


float consum_mpg_to_lphk(float value)
{

return 282/value;

}



float consum_lphk_to_mpg(float value)
{

return 282/value;

}


float consum_kpl_to_lphk(float value)
{

return 100/value;

}



float consum_lphk_to_kpl(float value)
{

return 100/value;

}

//energie
float energie_joule_to_kilocalorie(float value)
{

return value*0.000239006;

}


float energie_kilocalorie_to_joule(float value)
{

return value*4184;

}


float energie_kilojoule_to_joule(float value)
{

return value*1000;
}

float energie_joule_to_kilojoule(float value)
{

return value*0.001;
}

float energie_kilocalorie_to_calorie(float value)
{

return value*1000;
}

float energie_calorie_to_kilocalorie(float value)
{

return value*0.001;

}


//aria

float aria_sqk_to_hect(float value)
{

return value*100;

}


float aria_hect_to_sqk(float value)
{

return value*0.01;

}


float aria_hect_to_acre(float value)

{

return value*2.47105;

}


float aria_acre_to_hect(float value)

{

return value*0.404686;

}


float aria_sqk_to_sqmil(float value)
{

return value*0.386102;

}


float aria_sqmil_to_sqk(float value)
{

return value*0.258999;

}


//volum



float volum_litre_to_pint(float value)

{

return value*1.75975;

}



float volum_pint_to_litre(float value)

{

return value*0.568261;

}








int main()
{print_menu();

    float test=1;

    cout<<lungime_m_to_cm(test)<<endl;

    cout<<temperature_kelvin_to_fahrenheit(test)<<endl;

    cout<<viteza_mps_to_mph(test)<<endl;

    cout<<viteza_kmh_to_mph(test)<<endl;
    return 0;
}
