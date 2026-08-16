# Problems

## 1. Calculate simple interest. 
```python
# Simple Interest Program

# Formula: SI = (P * R * T) / 100

P = float(input("Enter Principal amount: "))
R = float(input("Enter Rate of Interest: "))
T = float(input("Enter Time (in years): "))

SI = (P * R * T) / 100

print("Simple Interest =", SI)
```

Output:
```
Enter Principal amount: 1000
Enter Rate of Interest: 5
Enter Time (in years): 2

Simple Interest = 100.0
```

## 2. Find area of a circle. 
```python
# Area of Circle Program

# Formula: Area = π * r^2

r = float(input("Enter radius: "))

area = 3.14 * r * r

print("Area of Circle =", area)
```

Output:
```
Enter radius: 5

Area of Circle = 78.5
```

## 3. Convert Celsius to Fahrenheit. 
```python
# Celsius to Fahrenheit Program

# Formula: F = (C * 9/5) + 32

C = float(input("Enter temperature in Celsius: "))

F = (C * 9/5) + 32

print("Temperature in Fahrenheit =", F)
```

Output:
```
Enter temperature in Celsius: 37

Temperature in Fahrenheit = 98.6
```

## 4. Find largest of two numbers. 
```python
# Largest of Two Numbers Program

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

if a > b:
    print("Largest number is", a)
elif b > a:
    print("Largest number is", b)
else:
    print("Both numbers are equal")
```

Output:
```
Enter first number: 10
Enter second number: 25

Largest number is 25.0
```

## 5. Calculate electricity bill. 
```python
# Electricity Bill Calculator

units = float(input("Enter units consumed: "))

if units <= 100:
    bill = units * 3
elif units <= 200:
    bill = (100 * 3) + (units - 100) * 5
elif units <= 300:
    bill = (100 * 3) + (100 * 5) + (units - 200) * 7
else:
    bill = (100 * 3) + (100 * 5) + (100 * 7) + (units - 300) * 10

print("Electricity Bill =", bill)

# Example: units = 250
# bill = (100 × 3) + (100 × 5) + (250 - 200) × 7
#     = 300 + 500 + 350
#     = 1150
```

Output
```
Enter units consumed: 250

Electricity Bill = 1150.0
```

## 6. Calculate student percentage. 
```python
# Student Percentage Calculator

sub1 = float(input("Enter marks of Subject 1: "))
sub2 = float(input("Enter marks of Subject 2: "))
sub3 = float(input("Enter marks of Subject 3: "))
sub4 = float(input("Enter marks of Subject 4: "))
sub5 = float(input("Enter marks of Subject 5: "))

total = sub1 + sub2 + sub3 + sub4 + sub5
percentage = total / 5

print("Total Marks =", total)
print("Percentage =", percentage, "%")
```

Output:
```
Enter marks of Subject 1: 80
Enter marks of Subject 2: 90
Enter marks of Subject 3: 70
Enter marks of Subject 4: 85
Enter marks of Subject 5: 95

Total Marks = 420.0
Percentage = 84.0 %
```

## 7. Calculate BMI. 
```python
# BMI Calculator

# Formula: BMI = weight(kg) / (height(m) * height(m))

weight = float(input("Enter weight in kg: "))
height = float(input("Enter height in meters: "))

bmi = weight / (height * height)

print("BMI =", bmi)

if bmi < 18.5:
    print("Category: Underweight")
elif bmi < 25:
    print("Category: Normal")
elif bmi < 30:
    print("Category: Overweight")
else:
    print("Category: Obese")
```

Output:
```
Enter weight in kg: 65
Enter height in meters: 1.7

BMI = 22.49134948096886
Category: Normal
```

## 8. Swap two numbers. 
```python
# Swap Two Numbers Program

a = float(input("Enter first number: "))
b = float(input("Enter second number: "))

print("Before Swap: a =", a, ", b =", b)

# Using temporary variable
temp = a
a = b
b = temp

print("After Swap: a =", a, ", b =", b)
```

Output:
```
Enter first number: 5
Enter second number: 10

Before Swap: a = 5.0 , b = 10.0
After Swap: a = 10.0 , b = 5.0
```

## 9. Calculate compound interest.
```python
# Compound Interest Program

# Formula: CI = P * (1 + R/100)^T - P

P = float(input("Enter Principal amount: "))
R = float(input("Enter Rate of Interest: "))
T = float(input("Enter Time (in years): "))

CI = P * (1 + R/100) ** T - P

print("Compound Interest =", CI)
```

Output:
```
Enter Principal amount: 1000
Enter Rate of Interest: 10
Enter Time (in years): 2

Compound Interest = 210.00000000000023
```