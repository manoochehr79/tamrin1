#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main()
{
    float vazn,ghad,bmi;
    cout << "vazn ra vared konid(Kg) va ghad ra vared konid(meter): "<<endl;
    cin>>vazn>>ghad;
    bmi=vazn/(ghad*ghad);
    cout<<"BMI: "<<bmi<<endl;
    
    if(bmi<18.5)
            cout<<"Underweight.\n";
    else if(bmi>=18.5 && bmi<=24.9)
            cout<<"Normal.\n";
    else if(bmi>=25 && bmi<=29.9)
            cout<<"Overweight.\n";
    else if(bmi>=30 && bmi<=34.9)
            cout<<"Obese.\n";   
    else if(bmi>35)
    		cout<<"Extremely Obese.\n";

    getch();
}
