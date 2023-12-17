#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while(t--) {
        int mx = 0;
        int cnt[123], a[123];

        int n;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > mx) {
                mx = a[i];
                cnt[a[i]]++;
            }
        }
        if (cnt[mx] == 1) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
    return 0;
}