### Factorial of Numbers
This is used for calculating the factorial of a number entered by the user.
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





