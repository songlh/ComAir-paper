int fib(int n) {
	if (n == 1 || n == 0) return 1;
	int i, n0 = 1, n1 = 1, n2;
	for(i=2; i <=n; ++i) {
		n2 = n0 + n1; n0 = n1; n1 = n2;
	}
	return n2;
}