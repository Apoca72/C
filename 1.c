#include <stdio.h>
#include <time.h> // For getting the current date

int main() {
    char Ovog[100], Ner[100], TursunSarUdur[100], Ungu[100], Hobby[200], ChuluutTsag[200];
    int TursunOn, TursunSar, TursunUdur;
    int currentYear, currentMonth, currentDay, Nas;

    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    
    currentYear = tm.tm_year + 1900; // Current year
    currentMonth = tm.tm_mon + 1;    // Current month
    currentDay = tm.tm_mday;          // Current day

  
    printf("Tanii ovog? ");
    scanf("%s", Ovog);

    printf("Tanii ner? ");
    scanf("%s", Ner);

    printf("Tanii tursun on? ");
    scanf("%d", &TursunOn);  

    printf("Tanii tursun sar? (Jishee: 9)? ");
    scanf("%d", &TursunSar);

    printf("Tanii tursun udur? (Jishee: 9)? ");
    scanf("%d", &TursunUdur);

    printf("Tanii durtai ungu? ");
    scanf("%s", Ungu);

    printf("Tanii hobby? ");
    scanf(" %[^\n]%*c", Hobby);  

    printf("Chuluut tsagaaraa yu hiideg ve? ");
    scanf(" %[^\n]%*c", ChuluutTsag);  

    Nas = currentYear - TursunOn;
    
    
    if ((currentMonth < TursunSar) || (currentMonth == TursunSar && currentDay < TursunUdur)) {
        Nas--; 
    }

    printf("%s ovogtoi %s ni %d %d %d udur tursun. Odoo %d nastai.\n", Ovog, Ner, TursunOn, TursunSar, TursunUdur, Nas);
    printf("Tuunii durtai ungu bol %s. ", Ungu);
    printf("Ter chuluut tsagaaraa %s hiideg. ", ChuluutTsag);
    printf("Tuunii hobby bol %s.\n", Hobby);

    return 0;
}
