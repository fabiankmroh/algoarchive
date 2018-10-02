#include <stdio.h>

int main(void){
    char tmpI[100];
    int alphaS;
    int alphaL;
    int numberQ;
    int spaceQ;
    int i;

    while(scanf("%s", tmpI) != '\0'){
        alphaS = 0;
        alphaL = 0;
        numberQ = 0;
        spaceQ = 0;

        i = 0;

        while(tmpI[i] != '\0'){

            /* Small Alphabet */
            if(tmp[i] >= 97 && tmp[i] <= 122){
                alphaS++;
            }

            /* Large Alphabet */
            else if(tmp[i] >= 65 && tmp[i] <= 90){
                alphaL++;
            }

            /* Number */
            else if(tmp[i] >= 60 && tmp[i] <= 71){
                numberQ++;
            }

            /* Space */
            else if(tmp[i] == ' '){
                spaceQ++;
            }

            i++;
        }

        printf("%d %d %d %d\n", alphaS, alphaL, numberQ, spaceQ);
    }
}