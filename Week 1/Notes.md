# Notes

## Why Python?
- Easy to read & write (simple syntax)
- Free & open source
- Huge community support
- Large no. of libraries
- Used in AI, web dev, automation, data science
- Platform independent

## Variables
- Container to store data
- No need to declare type
- Created when value assigned
- Case-sensitive
- Can't start with a number

```python
x = 10
name = "Varun"
```

## Data Types
- Defines type of value a variable holds
- Python auto-detects type (dynamic typing)

### int
- Whole numbers
- No decimal
- `x = 10`

### float
- Decimal numbers
- `x = 10.5`

### str
- Text / string of characters
- Written in quotes
- `x = "Hello"`

### bool
- Boolean → True / False
- Used in conditions

## Input/Output
- `input()` → takes input from user (always returns string)
- `print()` → displays output

```python
name = input("Enter name: ")
print("Hello", name)
```

## Arithmetic Operators
| Operator | Meaning |
|----------|---------|
| + | Addition |
| - | Subtraction |
| * | Multiplication |
| / | Division (float) |
| // | Floor division |
| % | Modulus (remainder) |
| ** | Exponent (power) |

## Logical Operators
| Operator | Meaning |
|----------|---------|
| and | True if both true |
| or | True if any one true |
| not | Reverses result |

## Type Casting
- Converting one data type to another
- `int()` → convert to integer
- `float()` → convert to decimal
- `str()` → convert to string
- `bool()` → convert to boolean

```python
x = int("10")
y = str(10)
```