
#include<iostream>
#include<string>
using namespace std;
 float taxRaterange(double
 gross_salary);
int main (  ){
 float worked_hours,tax,taxrate,net_salary,pension;
 float bonus_rate, overtime_bonusrate;
 double bonus,gross_salary,basic_salary;
 const float pension_rate=0.07;
 string name;
 cout<<"Please, Enter your full name "<<endl;
 getline(cin,name);
 cout<<"Please, Enter the basic salary in birr "<<endl;
 cin>>basic_salary;
    if(cin.fail( )){
    cin.clear();
    cin.ignore();
    return 1;
    }
 cout<<"Please, Enter worked hours   "<<endl;
 cin>>worked_hours;
    if(cin.fail( )){
    cin.clear();
    cin.ignore();
    return 1;
    }
  if(worked_hours>40){
  cout<<"Please, Enter over time bomus rate per hour  "<<endl;
  cin>>overtime_bonusrate;
     if(cin.fail( )){
    cin.clear();
    cin.ignore();
    return 1;
    }
  double overtimehours=worked_hours-40;
  bonus=overtime_bonusrate*overtimehours;
  }else{
 cout<<"Please, Enter the bonus rate  "<<endl;
 cin>>bonus_rate;
    if(cin.fail( )){
    cin.clear();
    cin.ignore();
    return 1;
    }  
 bonus=bonus_rate*worked_hours;
   }

 pension=basic_salary*pension_rate;;
 gross_salary=basic_salary+bonus;
 taxrate=taxRaterange(gross_salary);
 tax=gross_salary*taxrate;
 net_salary=(gross_salary-pension-tax);
    cout<<"Gross salary = "<<gross_salary<<endl;
 cout<<"Tax = "<<tax<<endl;
 cout<<"Pension = "<<pension<<endl;;
 cout<<"Dear "<<name<<" your net salary is "<<net_salary<<endl;

 return 0;

 }
 
 
 
 float taxRaterange(double
 gross_salary){
 if(gross_salary>0 && gross_salary<200){
  return 0; }
 else if (gross_salary>=200 && gross_salary<600 ) { return 0.1;}
 else if(gross_salary>= 600 && gross_salary <1200 ){return 0.15;}
 else if (gross_salary>=1200 &&  gross_salary <2000 ){return 0.2;}
 else if(gross_salary>=2000 && gross_salary<3500){return  0.25;}
 else if(gross_salary>=3500){ return 
 0.35;
  }
 else{ cout<<"invalid Salary! "; 
 return 0; 
}