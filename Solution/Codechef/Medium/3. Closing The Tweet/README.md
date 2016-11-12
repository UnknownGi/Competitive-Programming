## CC P3 - Closing The Tweet

### Problem Statement

```
Little kids, Jack and Evan like playing their favorite game Glass-and-Stone. Today they want to play something new and came across Twitter on their father's laptop.

They saw it for the first time but were already getting bored to see a bunch of sentences having at most 140 characters each. The only thing they liked to play with it is, closing and opening tweets.

There are N tweets on the page and each tweet can be opened by clicking on it, to see some statistics related to that tweet. Initially all the tweets are closed. Clicking on an open tweet closes it and clicking on a closed tweet opens it. There is also a button to close all the open tweets. Given a sequence of K clicks by Jack, Evan has to guess the total number of open tweets just after each click. Please help Evan in this game.
```

### Constraints

```
1 ≤ N, K ≤ 1 000

CLICK X (1 ≤ X ≤ N)
CLICK ALL

Time Limit: 2sec
Memory Limit: 50 MB
```

### Mistakes and Indepth Problem Description

Many people when seeing this problem will do the following **Mistakes**: 

- Start with all tweets open
- CLICK X opens/closes all tweets from (1≤Y≤X)

The problem is rather easy than medium to be honest. There isn't any rocket science or boundary cases to be checked for, rather a simple Ad-hoc question.

### Problem Solving

We need a way to tract tweets if open(true) or close(false) via Boolean Array.

```C++
bool arr[n];
REPN(i,0,n) arr[i] = false; // init all array indexes to false(closed)
```

We would check operation by just taking the string part as input, if it happens to be close we check for the number


```C++
cin >> op;
if ( op=="CLICK" ) { ... }
else { ... } 
```

Finally We need to check the state of the tweet and alter it 

```C++
scanf("%d", &index); // Tweet Number

if ( !arr[index-1] ) { // Closed Tweet
    count++;
	arr[index-1] = true;
} else { // Open Tweet
    count--;
    arr[index-1] = false;
}
```

and close all tweets for CLOSE ALL
```C++
count = 0;
REPN(j,0,n) arr[j] = false;
```

### Verdict

- **Correct Answer**
- Codechef solution ID: 12086175
- Codechef solution link: https://www.codechef.com/viewsolution/12086175
- Time taken: 0sec
- Memory Allocated: 3.2MB
- Language: C++ 4.9.2
