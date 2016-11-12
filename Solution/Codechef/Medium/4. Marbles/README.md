## CC P4 - Marbles

### Problem Statement

```
Rohit dreams he is in a shop with an infinite amount of marbles. He is allowed to select n marbles. There are marbles of k different colors. From each color there are also infinitely many marbles. Rohit wants to have at least one marble of each color, but still there are a lot of possibilities for his selection. In his effort to make a decision he wakes up. Now he asks you how many possibilities for his selection he would have had. Assume that marbles of equal color can't be distinguished, and the order of the marbles is irrelevant.
```

### Constraints

```
1 ≤ T ≤ 100
1 ≤ k ≤ n ≤ 1 000 000

Time Limit: 1sec
Memory Limit: 10 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Finding All Possible Combinations (Exhaustive Search)
- Diving Problems in Set Notation
- Solving using Factorial (C++, C)
- Using **int** datatype

This problem is of selecting in such a way that we have all colored marbles in our possession despite the order (Mathematical Topic: [Combinations](https://en.wikipedia.org/wiki/Combination))

- Formula for solving such problems

![Combination](https://wikimedia.org/api/rest_v1/media/math/render/svg/08bdf0fff474c26293414f9eb01ab4bc73ef941f)

- Shortform of Formula

![Combination2](https://wikimedia.org/api/rest_v1/media/math/render/svg/0f4e3f6d2dc3075f5569c82118fad11c32dff393)

- Solution for 52C5

![Solution](https://wikimedia.org/api/rest_v1/media/math/render/svg/cc23290c935c895f42918bf2486ec5e8b70045bd)

### Problem Solving

We will be solving the above problem using the same formula but inspite we will be doing it for (N-1)C(K-1)

First we need a function to compute combinations:

```
func ncr(n, k): 
    input: n, k
    output: combinations(n,k)
```

The problem here is that we can't compute large factorial problem else they would over flow the integer 64 bit range, therefore a iterative approach of multiplication and division


```C++
LLU res = 1;
REPN(i,0,k) {
	res *= (n-i);
	res /= (i+1);
}
	
return res;
```

And deal with N-1, K-1 instead of N, K

```C++
printf("%llu\n", ncr(n-1,k-1));
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12087067
- Codechef solution link: https://www.codechef.com/viewsolution/12087067
- Time taken: 0sec
- Memory Allocated: 3.1MB
- Language: C++ 4.9.2
