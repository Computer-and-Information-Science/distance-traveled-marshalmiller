[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-f4981d0f882b2a3f0472912d15f9806d57e124e0fc890972558857b51b24a6f9.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=10333409)
# Distance Traveled

The distance a vehicle travels can be calculated as follows: `distance = speed * time`. For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.

Write a program that asks the user for the speed of a vehicle (in miles per hour) and how many hours it has traveled. The program should then display the distance the vehicle has traveled for each hour of that time period, formatted nicely in a table as shown in the examples below.

For input validation, do not accept any value less than 10 or greater than 120 for speed and do not accept any value less than 1 or greater than 24 for time traveled. Use *int* for all input values.

Here is a sample run of the program where `25` and `10` are the input values:

```
Enter the vehicle speed: 25

Enter hours traveled: 10

Hour  Distance
----  --------
  1       25
  2       50
  3       75
  4      100
  5      125
  6      150
  7      175
  8      200
  9      225
 10      250
```

As mentioned above, input values for speed must be between 10 and 120. Your program should validate speed input against those values. If a value is given outside the expected range, output the message "Speed must be from 10 to 120, try again.", then re-prompt. For example:

```
Enter the vehicle speed: 9
Speed must be from 10 to 120, try again.
Enter the vehicle speed: 121
Speed must be from 10 to 120, try again.
Enter the vehicle speed: 50
```

Likewise, input values for hours must be between 1 and 24. If a value is given outside the expected range, output the message "Hours must be from 1 to 24, try again."
