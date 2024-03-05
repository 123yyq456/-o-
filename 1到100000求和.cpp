#include <stdio.h>

int main() 
{
    long long sum = 0; // 使用 long long 类型来存储较大的数值
    int i;

    // 循环从1加到100000
    for(i = 1; i <= 100000; i++) {
        sum += i; // 累加
    }

    // 输出结果
    printf("%lld\n", sum);

    return 0;
}

