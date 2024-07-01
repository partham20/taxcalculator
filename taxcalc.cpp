#include <iostream>

using namespace std;

double calculateTax(double salary) {
    double tax = 0;
    
if (salary <= 750000) 
	{
        tax = 0;
    }
else
	{
    if (salary <= 300000) {
        tax = 0;
    } else if (salary <= 600000) {
        tax = (salary - 300000) * 0.05;
    } else if (salary <= 900000) {
        tax = 300000 * 0.05 + (salary - 600000) * 0.10;
    } else if (salary <= 1200000) {
        tax = 300000 * 0.05 + 300000 * 0.10 + (salary - 900000) * 0.15;
    } else if (salary <= 1500000) {
        tax = 300000 * 0.05 + 300000 * 0.10 + 300000 * 0.15 + (salary - 1200000) * 0.20;
    } else {
        tax = 300000 * 0.05 + 300000 * 0.10 + 300000 * 0.15 + 300000 * 0.20 + (salary - 1500000) * 0.30;
    }
	}
 
  return tax;
}  
 
int main() {
    double salary;

    cout << "Enter your gross salary: Rs. ";
    cin >> salary;

    double tax = calculateTax(salary);
    double finalSalary = salary - tax;

    cout << "Your tax amount is: Rs. " << tax << endl;
    cout << "Your final salary after tax deduction is: Rs. " << finalSalary << endl;

    return 0;
}
