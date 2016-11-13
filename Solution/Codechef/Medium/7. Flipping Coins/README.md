## CC P7 - Flipping Coins

### Problem Statement

```
There are N coins kept on the table, numbered from 0 to N - 1. Initially, each coin is kept tails up. You have to perform two types of operations :

1) Flip all coins numbered between A and B inclusive. This is represented by the command "0 A B"

2) Answer how many coins numbered between A and B inclusive are heads up. This is represented by the command "1 A B".
```

### Constraints

```
1 <= N <= 100000
1 <= Q <= 100000
0 <= A <= B <= N - 1

Time Limit: 1-2sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Using count variable to keep track
- Ammending through boolean array to increase iterations

This problem asks us to check the number of coins in a range are head or flipping the coins from tails to head in a range. The coins have 2 states therefore we would be using **bitset** STL in Java since it provides more flexibility than C++ **bitset**

### Problem Solving

The problem is solved by creating a bitset

```Java
BitSet bs = new BitSet(n);
```

Next we check for the operation number (0 or 1) and perform the operation accordingly

```Java
switch ( op ) {
    case 0: {
        bs.flip(a,b+1);
        break;
    } case 1: {
        int count = bs.get(a,b+1).cardinality();
        System.out.println(count);
        break;
    }
}
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12095952
- Codechef solution link: https://www.codechef.com/viewsolution/12095952
- Time taken: 0.54sec
- Memory Allocated: 1.2MB
- Language: Java8
