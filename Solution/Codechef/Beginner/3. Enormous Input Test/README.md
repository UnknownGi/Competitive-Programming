## CC Beginner P3 - Enormous Input Test

### Problem Statement

```
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the **enormous Input/Output warning.** You are expected to be able to process at least 2.5MB of input data per second at runtime.
```

### Constraints

```
n, k ≤ 10 000 000

Time Limit: 8sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Using subtraction instead of modulo

Another Ad-hoc problem that tests if user is capable of applying modulo operations

### Problem Solving

Read a number and check if it is divisible by k, if yes then increment the counter

```C++
static int count;
while ( n-- ) {
    scanf("%llu", &num);
    if ( num%k == 0 ) ++count; 
}
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 11548453
- Codechef solution link: https://www.codechef.com/viewsolution/11548453
- Time taken: 0.18sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
