#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
  //Write your code here.
  int i, S[n+1];
    S[1] = a;
    S[2]= b;
    S[3] = c;
      
    for(i=4; i<=n; i++){
        S[i]= S[i-1]+S[i-2]+S[i-3];
        }
    return S[n];       
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
//Explanation 
//S(1) = 1
//S(2) = 2
//S(3) = 3

//For 4
//S(3)+S(2)+S(1) = 6

//For 5
//S(4)+s(3)+S(2)
//S(6)+S(3)+S(2) = 11

//For 6
// S(5)+S(4)+S(3)
//S(11)+S(6)+S(3) = 20

//For 7
// S(6)+S(5)+S(4)
//S(20)+S(11)+S(6) = 37
