#include <stdio.h>

double Get_Num() {
    double num = 0.0;
    int decimal_point_flag = 0;

    printf("请输入数值（类似计算器的输入方式）：");

    while (1) {
        char ch = getchar();
        
        if (ch == '\n') {
            break;
        }

        if (ch >= '0' && ch <= '9') {
            if (!decimal_point_flag) {
                num = num * 10.0 + (ch - '0');
            } else {
                num = num + ((ch - '0') / (10.0 * decimal_point_flag));
                decimal_point_flag *= 10;
            }
        } else if (ch == '.') {
            decimal_point_flag = 1;
        } else if (ch == '\b') { // 处理退格键
            if (decimal_point_flag) {
                num = (int)(num * decimal_point_flag) / 10.0;
                decimal_point_flag /= 10;
            } else {
                num = (int)(num / 10.0);
            }
        }
    }

    return num;
}
