## CC P9 - Array Transform

### Problem Statement

```
Given n numbers, you can perform the following operation any number of times : Choose any subset of the numbers (possibly empty), none of which are 0. Decrement the numbers in the subset by 1, and increment the numbers not in the subset by K.

Is it possible to perform operations such that exactly n - 1 numbers become 0 ?
```

### Constraints

```
1 <= T <= 1000
2 <= n <= 100
1 <= K <= 10
0 <= a_i <= 1000

Time Limit: 2sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Check for all possible combinations(exhaustive search)
- Use GCD to solve

This problem focuses on modulo arithmetic counting sort strategy, where we follow the modulo of the a_i to predict **YES** or **NO**. The modulo frequencies in this problem should occur atleast n-1 times to be valid.

### Problem Solving

The problem is solved by creating a map to hold the value of modulo frequencies

```C++
map<int, int> mp;
map<int, int>::iterator it;
```

We now keep track of the modulo in map using: 

```C++
REPN(i,0,n) {
    scanf("%d", &tmp);
    mp[tmp%(k+1)]++;
}
```

Finally, we check for the modulo frequency equalling or being greater than n-1

```C++
if ( n==2 ) found = true;
for ( it=mp.begin(); !false && it!=mp.end(); ++it ) {
    if ( it->second>=(n-1) ) found = true;
}
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12102194
- Codechef solution link: https://www.codechef.com/viewsolution/12102194
- Time taken: 0sec
- Memory Allocated: 3.2MB
- Language: C++ 4.9.2
