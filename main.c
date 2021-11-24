#include <stdio.h>
#define min_mokaleme_dakheli 150
#define min_mokaleme_khareji 4000
#define min_site_khareji 1300
#define min_site_dakheli 800
/*
 * Author      : Mohammad Fatehi
 * Date        : 1400/09/03
 * Description : Tamrin3 , Exercise4
 */

int main() {
    int shomare=0 ,noa,noa2, x=1,dakheli=1 , khareji=1,dakheli2=1,khareji2=1;
    printf("\nshomare khod ra vared konid : ");
    scanf(" %d",&shomare);
    do
    {
        printf("\nmokalemat (1) & internet (2) & baraye mohasebe (0) : ");
        scanf("%d", &x);
        if (x == 1) {
            printf("\nnoe mokalemat khod ra vared konid 1 (dakheli) & 2 (khareji) : ");
            scanf(" %d", &noa);
            if (noa == 1) {
                printf("\nmeghdar mokalemat khod ra vared konid (daghighe) : ");
                scanf(" %d", &dakheli);
                dakheli = dakheli * min_mokaleme_dakheli;
            } else if (noa == 2) {
                printf("\nmeghdar mokalemat khod ra vared konid (daghighe) : ");
                scanf(" %d", &khareji);
                khareji = khareji * min_mokaleme_khareji;
            } else {
                printf("unknow !");
            }
        } else if (x == 2) {
            printf("noa internet khod ra vared konid saite dakheli (1) va saite khareji (2): ");
            scanf("%d", &noa2);
            if (noa2 == 1) {
                printf("\nmeghdar estefade khod ra vared konid (daghighe) : ");
                scanf(" %d", &dakheli2);
                dakheli2 = dakheli2 * min_site_dakheli;
            } else if (noa2 == 2) {
                printf("\nmeghdar estefade khod ra vared konid (daghighe) : ");
                scanf(" %d", &khareji2);
                khareji2 = khareji2 * min_site_khareji;
            } else {
                printf("unknow !");
            }
        } else {
            printf("unknow !");
        }
    } while (x==0);

    printf("\n in shomare 0 %d ",shomare);
    printf(" %d ghadr hazine mokaleme dakheli darad va ",dakheli);
    printf(" %d ghadr hazine mokaleme khareji darad va ",khareji);
    printf(" hamchenin %d hazine estefade az internet dar sit haye dakheli va ",dakheli2);
    printf(" %d ghadr hazine estefade az internet dar sit haye khareji darad ",khareji2);

    return 0;
}
