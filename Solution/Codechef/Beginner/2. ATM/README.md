## CC Beginner P2 - ATM

### Problem Statement

```
Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.
```

### Constraints

```
0 < X ≤ 2000
0 ≤ Y ≤ 2000 (2 Digit Precision)

Time Limit: 1sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Not handling precision points
- Not taking care of -0.50 fee

This problem is ad-hoc for beginners which tests if they can handle precise floating point values and be able to deal with values like 0.50

### Problem Solving

Check for if X is a multiple of 5, and that fee can be payable else ATM value be printed

```C++
if ( x%5 == 0 ) {
    if ( x+0.5 > y ) printf("%.2f", y);
    else printf("%.2f", y-x-0.5);
} else printf("%.2f", y);
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 11548401
- Codechef solution link: https://www.codechef.com/viewsolution/11548401
- Time taken: 0sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
