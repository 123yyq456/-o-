#include <stdio.h>

int main() 
{
    long long sum = 0; // ʹ�� long long �������洢�ϴ����ֵ
    int i;

    // ѭ����1�ӵ�100000
    for(i = 1; i <= 100000; i++) {
        sum += i; // �ۼ�
    }

    // ������
    printf("%lld\n", sum);

    return 0;
}

