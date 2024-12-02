### Factorial of Numbers
This is used for calculating the factorial of a number entered by the user.
### Flowchart:

```flow
st=>start: Start
input=>inputoutput: Enter a number
check_input=>condition: Is input valid?
invalid=>inputoutput: Invalid input\nPlease try again
check_zero=>condition: Is number 0?
factorial_zero=>inputoutput: Factorial = 1
calculate=>operation: Calculate factorial
print_result=>inputoutput: Print Factorial
back=>operation: Restart program
end=>end: End

st->input->check_input
check_input(no)->invalid->input
check_input(yes)->check_zero
check_zero(yes)->factorial_zero->back
check_zero(no)->calculate->print_result->back
back->input
```




