#ifndef HEADERS
#define HEADERS

#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <limits.h>
#include <time.h>
#include <stdlib.h>

#define True 1
#define False 0
#define MAX_ZAD82 100
#define ILE_ZAD79 5
#define ILE_ZAD75 5
#define PODST_ZAD65 2 // podstawa potegi
#define POCZ_ZAD63 0.0 //poczatek przedzialu
#define KON_ZAD63 0.125 //koniec przedzialu
#define ILE_ZAD63 33 //liczba punktow
#define MAX_ZAD49 11
#define MAX_ZAD48 50
#define MAX_ZAD83 100
#define MAX_ZAD87 25
#define MAX_ZAD88 25
#define MAX_ZAD89 25
#define MAX_ZAD90 25
#define MAX_ZAD91 25
#define MAX_ZAD92 25
#define MAX_ZAD93 25
#define MAX_ZAD94 25
#define MAX_ZAD62 25

int wczytaj_int();
int wczytaj_int_calk();
int wczytaj_int_dodatnie();
int wczytaj_int_przedzialy(int d, int g);
double wczytaj_double();
int wczytajint_zad65();
void wypisz_potegi_zad65(int ile);
int silnia(int temp);
void wypisz_tab(int tab[], int n);
void wczytaj_tab(int tab[], int n);
void wczytaj_tab_double(double tab[] ,int n);
void wypisz_odwrotnie_tab(int tab[], int n);
void sortuj_v1(int tab[], int n);
int parowanie(int tab[], int n);
void wczytaj_tab_zad87(double tab[][MAX_ZAD87], int m, int n);
void wypisz_tab_zad87(double tab[][MAX_ZAD87], int m, int n);
void wypisz_zmieniona_tab_zad88(double tab[][MAX_ZAD88], int m, int n);
void maksimum_zad89(double tab[][MAX_ZAD89], int m, int n);
void szukanie_jedynki_zad90(double tab[][MAX_ZAD90], int m, int n);
void szukanie_zer_zad94(double tab[][MAX_ZAD90], int m, int n);
double sumowanie_zad91(double tab[][MAX_ZAD91], int m, int n);
double sumowanie_przekatna_zad92(double tab[][MAX_ZAD92], int m, int n);
double sumowanie_przekatna_powyzej_zad93(double tab[][MAX_ZAD93], int m, int n);
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();
void zad7();
void zad8();
void zad9();
void zad10();
void zad11();
void zad12();
void zad13();
void zad14();
void zad15();
void zad16();
void zad17();
void zad18();
void zad19();
int zad20();
int zad21();
int zad22();
int zad23();
int zad24();
void zad25();
int zad25_2();
void zad25_3();
int zad25_4();
int zad25_5();
int zad26();
int zad27();
int zad28();
int zad29();
int zad30();
int zad31();
void zad32();
void zad33();
void zad34();
void zad35();
void zad36();
void zad37();
void zad37_5();
int zad38();
void zad39();
void zad40();
int zad41();
int zad42();
void zad43();
void zad44();
void zad45();
int zad46();
void zad47();
void zad48();
void zad49();
void zad49_5();
void zad50();
void zad51();
void zad52();
void zad53();
void zad54();
void zad55();
void zad56();
void zad57();
void zad58();
void zad59();
int zad60();
int zad61();
int zad62();
void zad63();
void zad64();
void zad65();
void zad66();
void zad67();
void zad68();
void zad69();
void zad70();
void zad71();
void zad72();
void zad73();
void zad74();
void zad75();
void zad76();
void zad77();
void zad78();
void zad79();
void zad80();
void zad81();
void zad82();
void zad83();
void zad84();
void zad85();
void zad86();
void zad87();
void zad88();
void zad89();
void zad90();
void zad91();
void zad92();
void zad93();
void zad94();
void zad95();
void zad96();
void zad97();
void zad98();
void zad99();
void zad100();
void zad101();
void zad102();
void zad103();
void zad104();
void zad105();
void zad106();
void zad107();
void zad108();
void zad109();
void zad110();
void zad111();
void zad112();
void zad113();
void zad114();
void zad115();
void zad116();
void zad117();
void zad118();
void zad119();
void zad120();
void zad121();
void zad122();
void zad123();
void zad124();
void zad125();
void zad126();
void zad127();
void zad128();
void zad129();
void zad130();
void zad131();
void zad132();
void zad133();
void zad134();
void zad135();
void zad136();
void zad137();
void zad138();
void zad139();
void zad140();
void zad141();
void zad142();
void zad143();
void zad144();
void zad145();
void zad146();

#endif 