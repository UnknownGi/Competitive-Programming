## CC P1 - Bytelandian Gold Coins

### Problem Statement

```
In Byteland they have a very strange monetary system.

Each Bytelandian gold coin has an integer number written on it. A coin n can be exchanged in a bank into three coins: n/2, n/3 and n/4. But these numbers are all rounded down (the banks have to make a profit).

You can also sell Bytelandian coins for American dollars. The exchange rate is 1:1. But you can not buy Bytelandian coins.

You have one gold coin. What is the maximum amount of American dollars you can get for it?
```

### Constraints

```
0 ≤ n ≤ 1 000 000 000

Time Limit: 9sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- compare **(n/2)+(n/3)+(n/4)** with **n**
- recompute **n** which has been recomputed before

The problem asks us to generate 3 coins (n/2, n/3, n/4) from n, and if n is lesser than the generated coins we keep them. We must then check if the ones from generated coins can generate more coins further with better values, hence Recurrence Relation. The diagram shows and overhaul of what is happening to our problem.

![Image](http://i.imgur.com/Dq65cAh.png)

### Problem Solving

First we need to create is a recursive function:

```
func solve(n): 
    input: n
    output: max(n, solve(n/2)+solve(n/3)+solve(n/4))
```

The function would check whether the values of the generated coins are maximum or not

```C++
    LLD m = max(n, max(n/2)+max(n/3)+max(n/4));
```

And finally we need to keep track of the previously generated coins, so that we do not waste our precious cycles in recursive problems. We use a **map** (hash) to handle this problem.

```C++
map<LLD, LLD> mem; 

mem[n] = m; // inserting a new value in map

mem.count(n) return mem[n]; // checking if values exists in a map and then returning it directly
```