### Factorial of Numbers
This is used for calculating the factorial of a number entered by the user.
### Problem Analysis

Problem Statement:
The program calculates the factorial of a non-negative integer entered by the user. It continues to prompt the user to enter a number until the user provides valid input. If the user enters invalid input (e.g., a non-integer), the program will request a valid number.

## Input:

A non-negative integer entered by the user.


## Output:

The factorial of the input number.


## Constraints:

1. The input must be a non-negative integer (0 or greater).


2. If the input is invalid, the program should prompt the user to try again.



## Process:

1. Prompt the user to enter a number.


2. Validate the input to ensure it is a non-negative integer.


3. If the input is valid, calculate the factorial.


4. Display the factorial.


5. Repeat the process by asking for another number.




---

### Pseudocode

## Start
 1. Declare num as unsigned int
 2. Declare factorial as int
  Label line:
 3.Prompt user to enter a number
  Read input into num
 4. If input is invalid
    Clear the error flag
    Ignore the invalid input
    Display "Please try again"
    Go to label in
  5. End If
 6. If num equals 0
    Set factorial to 1
    Display "Factorial = 1"
  7. Else
    Label in:
    Initialize factorial to 1
    While num > 0
      For num from input value down to 1
        Multiply factorial by num
      End For
      Display "Factorial = " and factorial
      Set num to 0 (to exit loop)
    End While
  End If
  Go to label line
End


---

Flowchart

```**mermaid**
flowchart TD
  A[Start] --> B[Declare variables num and factorial]
  B --> C[Prompt user to enter a number]
  C --> D[Read input into num]
  D --> E{Is input valid?}
  E -- No --> F[Clear error and ignore invalid input]
  F --> G[Display "Please try again"]
  G --> H[Go to label in]
  E -- Yes --> I{Is num == 0?}
  I -- Yes --> J[Set factorial to 1]
  J --> K[Display "Factorial = 1"]
  K --> M[Go to label line]
  I -- No --> H[Label in: Initialize factorial to 1]
  H --> L[While num > 0]
  L --> N[For num from input down to 1]
  N --> O[Multiply factorial by num]
  O --> P[Display "Factorial"]
  P --> Q[Set num to 0 (to exit loop)]
  Q --> M[Go to label line]
  M --> B




### Flowchart:
```mermaid
flowchart TD
    A([Start]) --> B[Enter a number]
    B --> C{Is input valid?}
    C -- No --> D[Clear input and ignore\nPrint "Please try again"] --> B
    C -- Yes --> E{Is number 0?}
    E -- Yes --> F[Print "Factorial = 1"] --> H[Restart program] --> B
    E -- No --> G[Calculate factorial using while and for loops]
    G --> I[Print Factorial]
    I --> H[Restart program] --> B
```





