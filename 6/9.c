#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int chmod = 0;
    int chmod_r = 0;
    int chmod_w = 0;
    int chmod_x = 0;
	
    char temp[3];
    scanf("%s", temp);
	
    for (i = 0; i < 3; i++) {
        if (temp[i] == 'r') {
        	chmod_r++;
        }	
        if (temp[i] == 'w') {
            chmod_w++;
        }
        if (temp[i] == 'x') {
            chmod_x++;
        }
    }
	
    while (scanf("%s", temp) != EOF) {
        if (temp[0] == '+') {
            if (temp[1] == 'r') {
                chmod_r++;
            }
            if (temp[1] == 'w') {
                chmod_w++;
            }
            if (temp[1] == 'x') {
                chmod_x++;
            }
        }
        if (temp[0] == '-') {
            if (temp[1] == 'r') {
                chmod_r--;
            }
            if (temp[1] == 'w') {
                chmod_w--;
            }
            if (temp[1] == 'x') {
                chmod_x--;
            }
        }
    }
	
    if (chmod_r > 0) {
        chmod += 100;
    }
    if (chmod_w > 0) {
        chmod += 10;
    }
    if (chmod_x > 0) {
        chmod += 1;
    }
	  
    if (chmod == 111) {
        printf("7");
    } else if (chmod == 110) {
        printf("6");
    } else if (chmod == 101) {
        printf("5");
    } else if (chmod == 100) {
        printf("4");
    } else if (chmod == 11) {
        printf("3");
    } else if (chmod == 10) {
        printf("2");
    } else if (chmod == 1) {
        printf("1");
    } else if (chmod == 0) {
        printf("0");
    }
        
    return 0;
}