# COP 1334 Assignment - Introduction to C++

## Chapter 5: Challenge 6

## Title: Distance Traveled

### Exercise Description:

The distance a vehicle travels can be calculated as follows:

```cpp
     distance = speed * time 
```

For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.

Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. The program should then use a loop to display the distance the vehicle has traveled for each hour of that time period. Here is an example of the output:

```cpp
     What is the speed of the vehicle in mph? 40 
     How many hours has it traveled? 3 
     Hour Distance Traveled 
     -------------------------------- 
     1           40 
     2           80 
     3           120 
```

## Execution from the Terminal (Alternative way without an IDE):

A country club, which currently charges $2,500 per year for membership, has announced it will increase its membership fee by 4 percent each year for the next 6 years. Write a program that uses a loop to display the projected rates for the next 6 years.

```terminal
g++ -Wall -std=c++17 main.cpp
```

That will create a file named 'a.out' if you are working in MacOS or a .exe file if you are on Windows. That's the default executable file's name when we don't provide a name.

But we can also specify the name of the resulting executable file:

```terminal
g++ -Wall -std=c++17 main.cpp -o your_prefered_executable_file_name
```

And in order to run that a.out file, we must execute on the terminal:

```terminal
 % ./a.out
```

## Result of Execution on the Terminal (MacOS example):

```terminal
reinier@reinier % ./your_prefered_executable_file_name
What is the speed of the vehicle in mph? 120
How many hours has it traveled? 4

* * * * * * * * * * * * * *
*    Distance Traveled    *
* * * * * * * * * * * * * *

---------------------
| Hour |  Distance  |
---------------------
|    1 |  120.00 mi |
---------------------
|    2 |  240.00 mi |
---------------------
|    3 |  360.00 mi |
---------------------
|    4 |  480.00 mi |
---------------------

Process finished with exit code 0
reinier@reinier % 
```

### Author

**Reinier Garcia**

* [Github](https://github.com/reymillenium)
* [Twitter](https://twitter.com/ReinierGarciaR)
* [Linkedin](https://www.linkedin.com/in/reiniergarcia/)
* [Website](https://www.reiniergarcia.dev/)
* [Stack Overflow](https://stackoverflow.com/users/9616949/reinier-garcia)

### License

Copyright © 2024, [Reinier Garcia](https://github.com/reymillenium).


