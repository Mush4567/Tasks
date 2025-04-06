#include <stdio.h>
int main() {
    const int size = 100;
    int n = 0;
    int index = 0;

    printf("Please enter numbers: ");
    scanf("%d", &n);

    int arr[size] = {};
    if (n <= size)
    {
        printf("Please Enter %d values:\n", n);

        while (index < n) {
            scanf("%d", &arr[index]);
            ++index;
        }
        int sum = 0;
	int ret = 1;
	index = 0;
        for(int i = 0;i<n;++i){
	   sum += arr[i];
	   ret *= arr[i];

        }	    
        printf("%d\n",sum);
	printf("%d\n",ret);
    }
    return 0;
}
