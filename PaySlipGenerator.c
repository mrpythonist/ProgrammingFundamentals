// This program will take three inputs as grade, age and years of experience of the employee from the user
// it will display Basic Pay, Allowances and Deductions from the net pay of the employee

#include<stdio.h>
// Declaring Global Variables
int age, exp_year, basicSalary, RP, GP, extra;
char grade;

// Declaring Functions
void basicPay();
void allowances();
void deductions();

int main()
{
    // Declaring Local Variables
    int per_inc_year;
    
    // Input from the user
    printf("Enter your grade, age and years of experience: ");
    scanf("%c%d%d", &grade, &age, &exp_year);
    
    // Checking for the grade and initializing values of Basic Salary and Per Increment Year.
    switch(grade)
    {
    case 'w':
    case 'W': basicSalary=10000; per_inc_year=700; break;
    case 'x':
    case 'X': basicSalary=12900; per_inc_year=910; break;
    case 'y':
    case 'Y': basicSalary=21700; per_inc_year=1500; break;
    case 'z':
    case 'Z': basicSalary=32600; per_inc_year=2800; break;
    }
    
    // Formula for calculating Running Pay
    RP = basicSalary + exp_year*per_inc_year;
    
    // Calling Functions
    basicPay();
    allowances();
    deductions();

}

// Initialization of functions
void basicPay()
{
    printf("Basic Pay\n_______________\nBasic Salary: \t\t\t%d\nNumber of Increments: \t\t%d\nRunning Pay: \t\t\t%d\n\n\n", basicSalary, exp_year, RP);
}
void allowances()
{
    int HRA, SSB, ARA;
    HRA = RP*0.45;
    SSB = basicSalary*0.30;
    if((grade=='w' || 'W') && age>40)
        ARA = 3000;
    else
        ARA = 1500;
    GP = RP+HRA+SSB+ARA;
    extra = GP%100;
    GP = GP - extra;
    printf("Allowances\n_______________\nHouse Rent Allowance: \t\t%d\nSocial Security Benefit: \t%d\nAdhoc Relief Allowance: \t%d\n\nGross Pay: \t\t\t%d\n\n\n", HRA, SSB, ARA, GP);
}
void deductions()
{
    int IT, AI, GPF, total_ded, net_pay;
    AI = GP*12;
    if(AI>0 && AI<=400000)
        IT = GP*0;
    else if(AI>=400001 && AI<=650000)
        IT = GP*0.025;
    else if(AI>=650001 && AI<=1000000)
        IT = GP*0.045;
    else if(AI>=1000001 && AI<=15000000)
        IT = GP*0.07;
    else
        IT = GP*0.115;

    GPF = GP*0.1;
    total_ded = IT+GPF+extra;
    net_pay = GP - total_ded;
    printf("Deductions\n_______________\nIncome Tax: \t\t\t%d\nGeneral Provident Fund: \t%d\nDonation: \t\t\t%d\n\nTotal Deduction: \t\t%d\n\n\nNet Pay: \t\t\t%d\n", IT, GPF, extra, total_ded, net_pay);

}




