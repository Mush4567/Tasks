int power(int num, int exp){
	int sum = 1;
	while(exp){
		sum*=num;
		--exp;
	}
	return sum;
}
