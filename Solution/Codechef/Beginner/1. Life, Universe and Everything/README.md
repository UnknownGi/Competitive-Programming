## CC Beginner P1 - Life, the Universe, and Everything

### Problem Statement

```
Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.
```

### Constraints

```
0 < N < 3 Digits

Time Limit: 2.95918 sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Not stopping after reading 42

A test problem by codechef to check if people can take input and print output on console

### Problem Solving

Read numbers until 42 appears, and then break it or apply a flag to execute scanf statement

```C++
while ( scanf("%d", &num) ) {
    if ( num == 42 ) break;
    else printf("%d\n", num);
}
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 11548204
- Codechef solution link: https://www.codechef.com/viewsolution/11548204
- Time taken: 0sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
