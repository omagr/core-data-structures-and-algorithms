// parameterized 
void sumOfNum (int sum, int x) {
    sum += x;
    if (x == 0) cout << sum;
    sum (sum, x-1);
}

// functional 
int sumOfNum (int sum, int x) {
    if (x == 0) return 0;
    return x + sumOfNum(sum, x-1);
}

// factorial 
int factOfNum (int fact, int x) {
    if (x == 1) return 1;
    return x * factOfNum(fact, x-1);
}