### Problem Analysis:
1. input:
 . weight of a peron in kilograms.
 . height of a person in meters.
2. Process:
 . calculating BMI using the formula BMI=weight/(height*weight).
3. output:
 . body mass index(BMI).
### Algorithm
The program accepts weight( kgs) and height(m) and calculate BMI.
1. Step1: start the program. 
2. Step2: read weight and height of a person. 
3. Step3: calculate body mass index as BMI=weight/(height*height). 
4. Step4: print BMI 
 4.1 if BMI is below 18.5 print under weight.
 4.2 if BMI is between 18.5 to 24.9 print normal weight.
 4.3 if BMI is greaterthan 25 print over weight.
5. step5: ask the user if he/she wants to continue. to continue 1 to stop 0.
 5.1 if continue(1), repeat the above.
 5.2 if stop(0), break.
 5.3 else exit the program.
6. Step5: end the program. 
### Flowchart
graph TD;
    A[Start] --> B[Input weight in kg]
    A --> C[Input height in meters]
    B --> D[Calculate BMI]
    C --> D
    D --> E[Display BMI]
    E --> F{Is BMI < 18.5?}
    F -- Yes --> G["Under weight!"]
    F -- No --> H{Is BMI < 25?}
    H -- Yes --> I["Normal weight!"]
    H -- No --> J["Over weight!"]
    G --> K[Ask if user wants to continue?]
    I --> K
    J --> K
    K --> L{Continue?}
    L -- Yes --> A
    L -- No --> M[End]
