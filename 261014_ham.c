#include <stdio.h>
#include <math.h>

// Hàm nh?p n th?a ði?u ki?n ð? bài: 0 < n < 1000 và n ph?i là s? ch?n
int nhap()
{
    int n;
    do{
        printf("Nhap n (0 < n < 1000, chan): ");
        scanf("%d", &n);
        if(n <= 0 || n >= 1000 || n % 2 != 0)
            printf("Nhap sai, vui long nhap lai...\n");
    } while(n <= 0 || n >= 1000 || n % 2 != 0);
    return n;
}

// 1. Li?t kê các ý?c s? c?a n
void lkus(int n)
{
    int i;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d\t", i);
    }
}

// 2. Tính t?ng các s? ch?n nh? hõn n
int tongchan(int n)
{
    int s = 0, i;
    for(i = 0; i < n; i++)
    {
        if(i % 2 == 0)
            s = s + i;
    }
    return s;
}

// 3. Tính trung b?nh c?ng các s? l? nh? hõn n
float tbcle(int n)
{
    int s = 0, d = 0, i;
    for(i = 0; i < n; i++)
    {
        if(i % 2 != 0)
        {
            s = s + i;
            d++;
        }
    }
    if(d == 0)
        return 0;
    return (float)s / d;
}

// 4. Ð?m s? nh? hõn n là b?i c?a 3 và 5
int demboi3va5(int n)
{
    int d = 0, i;
    for(i = 1; i < n; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
            d++;
    }
    return d;
}

// 5. Ki?m tra n có ph?i s? nguyên t? không (1: Có, 0: Không)
int ktnguyento(int n)
{
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

// 6. Ki?m tra n có ph?i s? hoàn thi?n không (1: Có, 0: Không)
int kthoanthien(int n)
{
    int s = 0, i;
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
            s = s + i;
    }
    if(s == n)
        return 1;
    return 0;
}

// 7. Ð?m xem n có bao nhiêu ch? s? l?
int demcsle(int n)
{
    int d = 0, cs;
    while(n > 0)
    {
        cs = n % 10;
        if(cs % 2 != 0)
            d++;
        n = n / 10;
    }
    return d;
}

// 8. Li?t kê các ch? s? ch?n c?a n
void lkcschan(int n)
{
    int rev = 0, cs;
    // Ð?o ngý?c s? ð? in ðúng th? t? t? trái sang ph?i
    while(n > 0)
    {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    while(rev > 0)
    {
        cs = rev % 10;
        if(cs % 2 == 0)
            printf("%d\t", cs);
        rev = rev / 10;
    }
}

// 9. Ki?m tra n có toàn ch? s? ch?n hay không (1: Có, 0: Không)
int kttoanchan(int n)
{
    int cs;
    while(n > 0)
    {
        cs = n % 10;
        if(cs % 2 != 0)
            return 0;
        n = n / 10;
    }
    return 1;
}

// 10. Ki?m tra các ch? s? c?a n có tãng d?n không (1: Có, 0: Không)
int kttangdan(int n)
{
    int cssau = n % 10;
    int cstruoc;
    n = n / 10;
    while(n > 0)
    {
        cstruoc = n % 10;
        if(cstruoc >= cssau)
            return 0;
        cssau = cstruoc;
        n = n / 10;
    }
    return 1;
}

// 11. Tính t?ng các ch? s? ch?n c?a n
int tongcschan(int n)
{
    int s = 0, cs;
    while(n > 0)
    {
        cs = n % 10;
        if(cs % 2 == 0)
            s = s + cs;
        n = n / 10;
    }
    return s;
}

// 12. T?m ch? s? l?n nh?t c?a n
int cslonnhat(int n)
{
    int max = 0, cs;
    while(n > 0)
    {
        cs = n % 10;
        if(cs > max)
            max = cs;
        n = n / 10;
    }
    return max;
}

// 13. Ki?m tra n có ð?i x?ng hay không (1: Có, 0: Không)
int doixung(int n)
{
    int s = 0, temp = n;
    while(temp > 0)
    {
        s = s * 10 + (temp % 10);
        temp = temp / 10;
    }
    if(s == n)
        return 1;
    return 0;
}

int main() {
    int n;
    n = nhap();

    printf("\n1. Cac us cua %d: ", n);
    lkus(n);

    printf("\n2. Tong cac so chan <%d = %d", n, tongchan(n));
    printf("\n3. TBC so le <%d = %.2f", n, tbcle(n));
    printf("\n4. So luong so <%d la boi cua 3 va 5 = %d", n, demboi3va5(n));

    if(ktnguyento(n) == 1)
        printf("\n5. %d la so nguyen to", n);
    else
        printf("\n5. %d ko phai so nguyen to", n);

    if(kthoanthien(n) == 1)
        printf("\n6. %d la so hoan thien", n);
    else
        printf("\n6. %d ko phai so hoan thien", n);

    printf("\n7. So chu so le cua %d = %d", n, demcsle(n));

    printf("\n8. Cac chu so chan cua %d: ", n);
    lkcschan(n);

    if(kttoanchan(n) == 1)
        printf("\n9. %d toan chu so chan", n);
    else
        printf("\n9. %d ko toan chu so chan", n);

    if(kttangdan(n) == 1)
        printf("\n10. Các chu so cua %d tang dan", n);
    else
        printf("\n10. Cac chu so cua %d ko tang dan", n);

    printf("\n11. Tong cac chu so chan cua %d = %d", n, tongcschan(n));
    printf("\n12. Chu so lon nhat cua %d = %d", n, cslonnhat(n));

    if(doixung(n) == 1)
        printf("\n13. %d doi xung", n);
    else
        printf("\n13. %d ko doi xung", n);

    return 0;
}
