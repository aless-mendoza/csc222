# Command to compile on mac book
```
g++ test_render_num_vector.cpp render_num_vector.cpp -std=c++11
./a.out
```

# Files

## test\_render\_num\_vector.cpp
- Contains all the tests you want to run -> has input and what is the expected output
- links to num\_vector\_utils.h to call functions

## num\_vector\_utils.h
- Calls the tested functions that are contained in test\_render\_num\_vector.cpp

## render\_num\_vector.cpp
- Contains function render\_num\_vector
    - Goes through items in the vector and outputs each item as a string with a space inbetween
    - ostringstream means output stream -> contains a sequence of characters

- Contains function num\_vector\_sum
    - Goes through each item in the vector and adds it together
    - Outputs the sum

- Contains function only\_evens
    - Goes through each item in the vector and uses modulo to determine whether it is even or odd
    - Only prints the even numbers
