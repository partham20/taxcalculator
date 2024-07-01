def calculate_tax(salary):
    tax = 0
    
    if salary <= 750000:
        tax = 0
    else:
        if salary <= 300000:
            tax = 0
        elif salary <= 600000:
            tax = (salary - 300000) * 0.05
        elif salary <= 900000:
            tax = 300000 * 0.05 + (salary - 600000) * 0.10
        elif salary <= 1200000:
            tax = 300000 * 0.05 + 300000 * 0.10 + (salary - 900000) * 0.15
        elif salary <= 1500000:
            tax = 300000 * 0.05 + 300000 * 0.10 + 300000 * 0.15 + (salary - 1200000) * 0.20
        else:
            tax = 300000 * 0.05 + 300000 * 0.10 + 300000 * 0.15 + 300000 * 0.20 + (salary - 1500000) * 0.30
    
    return tax

def main():
    salary = float(input("Enter your gross salary: Rs. "))
    tax = calculate_tax(salary)
    final_salary = salary - tax
    print(f"Your tax amount is: Rs. {tax:.2f}")
    print(f"Your final salary after tax deduction is: Rs. {final_salary:.2f}")

if __name__ == "__main__":
    main()