int main(void){
    int num_1 = 12, int num_2 = 2;
    scanf("%d%d", num_1, num_2);
    printf("%d", &num_1 * &num_2);
    return 0;
    }