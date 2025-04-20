/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numOfBurgers(int tom, int ch, int* returnSize) {
//     int *a = malloc(2 * sizeof(int));
//     if(tom == 0 && ch == 0){
//         a[0] = 0;
//         a[1] = 0;
//         *returnSize = 2;
//         return a;
//     }
//     *returnSize = 0;
//     if(tom == 0 || ch == 0)
//         return a;
    
//     if(tom % 2 != 0 || tom < ch)
//         return a;

    
    
//     int f = 1;
//     for(int i = 0; i <= ch; i++){
//         if((i * 4)+ ((ch - i) * 2) == tom){
//             f = 0;
//             a[0] = i;
//             a[1] = ch - i;
//         }
//     }
//     if(f == 1){
//         *returnSize = 0;
//         return a;
//     }
//     *returnSize = 2;
//     return a;
// }

    int* a = malloc(2 * sizeof(int));
    *returnSize = 0;

    if (tom % 2 != 0 || tom < 2 * ch || tom > 4 * ch) {
        return a; 
    }

    int x = (tom - 2 * ch) / 2; 
    int y = ch - x;             

    if (x < 0 || y < 0) return a;

    a[0] = x;
    a[1] = y;
    *returnSize = 2;
    return a;
}

