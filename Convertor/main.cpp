#include <iostream>

using namespace std;



void print_menu()
{cout<<"Converter";
cout<<"----------------------------------------"<<endl;
cout<<"1:  Length"<<endl;
cout<<"2:  Aria"<<endl;
cout<<"3:  Volume"<<endl;
cout<<"4:  Time"<<endl;
cout<<"5:  Speed"<<endl;
cout<<"6:  Temperature"<<endl;
cout<<"7:  Mass"<<endl;
cout<<"8:  Energy"<<endl;
cout<<"9:  Pressure"<<endl;
cout<<"10: Density"<<endl;
cout<<"11: Gas Consumption"<<endl;


}


void print_lungime()
{//11
cout<<"1:  Meter-Centimeter"<<endl;
cout<<"2:  Meter-Decimetru"<<endl;
cout<<"3:  Meter-Milimetru"<<endl;
cout<<"4:  Meter-Inch"<<endl;
cout<<"5:  Meter-Feet"<<endl;
cout<<"6:  Meter-Yard"<<endl;
cout<<"7:  Meter- Nautical Mile"<<endl;
cout<<"8:  Meter-Mile"<<endl;
cout<<"9:  Yard-Kilometer"<<endl;
cout<<"10: Kilometer-Mile"<<endl;
cout<<"11: Mile-Kilometrer"<<endl;

}



void print_arie()
{

}


void print_volum()
{

}

void print_timp()
{

}

void print_viteza()
{

}

void print_temperatura()
{

}


void print_masa()
{

}




void print_energie()
{

}


void print_densitate()
{

}




void print_consumcomb()
{

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

//consum combust
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


long aria_sqmil_to_hect(long value)

{
    return value*259;
}


long aria_hect_to_sqmil(long value)

{
    return value*0.00386102;
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

long volum_litre_to_cubicmtr(long value)

{
    return value*0.001;
}

long volum_cubicmtr_to_litre(long value)

{
    return value*1000;
}

long volum_litre_to_impfldounce(long value)

{
    return value*35.1951;
}


long volum_impfldounce_to_litre(long value)

{
    return value*0.0284131;
}


long volum_litre_to_impcup(long value)

{
    return value*3.51951;
}

long volum_impcup_to_litre(long value)

{
    return value*0.284131;
}

long volum_impcup_to_impquart(long value)

{
    return value*0.25;
}

long volum_impquart_to_impcup(long value)

{
    return value*4;
}
    long volum_impcup_to_imppint(long value)

{
    return value*2;
}


long volum_imppint_to_impcup(long value)

{
    return value*0.5;
}


//timp

long double timp_second_to_minute(long double value)
{
return value/60;
}

long double timp_minute_to_second(long double value)
{
return value*60;
}

long double timp_minute_to_hour(long double value)
{
return value/60;
}

long double timp_hour_to_minute(long double value)
{
return value*60;
}

long double timp_hour_to_day(long double value)
{
return value/24;
}

long double timp_day_to_hour(long double value)
{
return value*24;
}

long double timp_month_to_day(long double value)
{
return value*30.4167;
}

long double timp_day_to_month(long double value)
{
return value*0.0328767;
}


long double timp_month_to_year(long double value)
{
return value/12;
}

long double timp_year_to_month(long double value)
{
return value*12;
}

long double timp_year_to_decade(long double value)
{
return value/10;
}

long double timp_decade_to_year(long double value)
{
return value*10;
}

long double timp_year_to_century(long double value)
{
return value/100;
}

long double timp_century_to_year(long double value)
{
return value*100;
}


//densitate

long double densitate_kgmq_to_gmq(long double value)
{

    return value*0.001;

}

long double densitate_gmq_to_kgmq(long double value)
{

    return value*1000;

}



long double densitate_tonsmq_to_gmq(long double value)
{
        return value;
}


long double densitate_gmq_to_tonsmq(long double value)
{
        return value;
}


long double densitate_kgmq_to_lbftq(long double value)
{

return value*62430;

}

long double densitate_lbftq_to_kgmq(long double value)
{

return value/62430;

}


long double densitate_lbinq_to_lbftq(long double value)
{

return value*1728.0560683494002;

}



long double densitate_lbftq_to_lbinq(long double value)
{

return value/1728.0560683494002;

}





int main()
{print_menu();

   int valid=1;int num;
   cin>>num;
   while(valid==0)
   {
       print_menu();
       cout<<"Pick option(insert number)"<<endl;
       cin>>num;
       if(num>=1&&num<=11)
       valid=0;
   }


   if(num==1)
   {
       int opt,val=1;
       long double x;
       while(val==0)
       {void print_lungime();
        cout<<"Pick option(insert number)"<<endl;
        cin>>opt;
        if(opt>=1&&opt<=11)
            val=0;

       }

       cout<<"Insert number of units to convert"<<endl;cin>>x;


       switch(opt)

       {
       case 1:
        {if(x==0)
        cout<<"The result of tje Conversion is:"<<x<<endl;
            cout<<"The result of tje Conversion is:"<<lungime_m_to_cm(x)<<endl;
            break;
        }

        case 2:{
        {if(x==0)
        cout<<"The result of tje Conversion is:"<<x<<endl;
            cout<<"The result of tje Conversion is:"<<lungime_m_to_dm(x)<<endl;
            break;
        }

        }

       case 3:
           {
       {if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_m_to_mm(x)<<endl;
            break;
        }
       }

       case 4:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_m_to_inch(x)<<endl;
            break;
        }}
       case 5:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_m_to_feet(x)<<endl;
            break;
        }}
       case 6:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_m_to_yard(x)<<endl;
            break;
        }}
       case 7:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_m_to_naumile(x)<<endl;
            break;
        }}
       case 8:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_m_to_mile(x)<<endl;
            break;
        }}
       case 9:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of tje Conversion is:"<<lungime_yard_to_kilometer(x)<<endl;
            break;
        }}
       case 10:{{if(x==0)
        cout<<"The result of the Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_kilometer_to_mile(x)<<endl;
            break;
        }}
       case 11:{{if(x==0)
        cout<<"The result of tje Conversion is:"<<x<<endl;
            cout<<"The result of the Conversion is:"<<lungime_mile_to_kilometer(x)<<endl;
            break;
        }}



       }




   }


    if(num==2)

    if(num==4)

     if(num==4)

      if(num==5)

       if(num==6)

        if(num==7)

         if(num==8)

          if(num==9)

           if(num==10)

            if(num==11)


    //float test=1;

   // cout<<lungime_m_to_cm(test)<<endl;

   // cout<<temperature_kelvin_to_fahrenheit(test)<<endl;

   // cout<<viteza_mps_to_mph(test)<<endl;

   // cout<<viteza_kmh_to_mph(test)<<endl;
    return 0;
}
