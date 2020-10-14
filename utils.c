#include "headers.h"

int wczytaj_int() {
	int liczba;
	while (scanf("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Bledne dane popraw\t");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

int wczytaj_int_dodatnie() {
	int liczba;
	while (scanf("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
		printf("Bledne dane popraw\t");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

int wczytaj_int_calk() {
	int liczba;
	while (scanf("%d", &liczba) != 1 || getchar() != '\n') {
		printf("Bledne dane popraw\t");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

int silnia(int temp) {
  if (temp == 1) {
    return 1;
  }
  else {
    return (temp * silnia(temp - 1));
  }
}

void wypisz_tab(int tab[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d\t", tab[i]);
	}
	printf("\n");
}

void wczytaj_tab(int tab[], int n) {
	for (int i = 0; i < n; i++) {
		printf("liczba(%d) = ", 1 + i);
		tab[i] = wczytaj_int();
	}

}

void wypisz_odwrotnie_tab(int tab[], int n) {
	for (int i = 0; n < i; i++) {
		printf("%d\t", tab[i]);
	}
	printf("\n");
}

void sortuj_v1(int tab[], int n) {
	for (int krok = 0; krok <= n - 2; krok++) {
		// szukanie minimum od k do konca
		int min = tab[krok];
		int gdzie = krok;
		for (int i = krok + 1; i < n; i++) {
			if (tab[i] < min) {
				min = tab[i];
				gdzie = i;
			}
		}
		// zamiana tab[krok] z minimalna
		int pom = tab[krok];
		tab[krok] = tab[gdzie];
		tab[gdzie] = pom;
	}
}

int parowanie(int tab[], int n) {
	int decyzja = False;
	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - 1; j++) {
			if (tab[i] == tab[j])
				decyzja = True;
		}
	}
	return decyzja;
}

double wczytaj_double() {
	double temp;
	while (scanf("%lf", &temp) != 1 || getchar() != '\n') {
		printf("Bledne dane. Popraw\t");
		while (getchar() != '\n')
			;
	}
	return temp;
}

void wczytaj_tab_double(double tab[] ,int n) {
  	for (int i = 0; i < n; i++) {
		tab[i] = wczytaj_double();
	}
}

int wczytajint_zad65(void) {
	printf("Podaj liczbe poteg do wypisania:\t");
	int liczba;
	while (scanf("%d", &liczba) != 1 || liczba < 0 || getchar() != '\n') {
		printf("Bledne dane. Popraw\t");
		while (getchar() != '\n')
			;
	}
	return liczba;
}

void wypisz_potegi_zad65(int ile) {
	int pot = 1;
	for (int i = 0; i < ile; i++) {
		printf("%d^%d = %d\n", PODST_ZAD65, i, pot);
		pot = pot * PODST_ZAD65;
	}
}

int wczytaj_int_przedzialy(int d, int g) {
	int temp;
	while (scanf("%d", &temp) != 1 || temp < d || temp > g ||  getchar() != '\n') {
		printf("Bledne dane\t");
		while (getchar() != '\n')
			;
	}
	return temp;
}

void wczytaj_tab_zad87(double tab[][MAX_ZAD87], int m, int n) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("tab(%d;%d) = ", i, j);
			tab[i][j] = wczytaj_double();
		}
	}

}

void wypisz_tab_zad87(double tab[][MAX_ZAD87], int m, int n) {
	for (int i = 0; i < m; i++) {
		printf("\n");
		for (int j = 0; j < n; j++) {
			printf("%lf\t", tab[i][j]);
		}
	}
}

void wypisz_zmieniona_tab_zad88(double tab[][MAX_ZAD88], int m, int n) {
	for (int i = 0; i < n; i++) {
		printf("\n");
		for (int j = 0; j < m; j++) {
			printf("%lf\t", tab[j][i]);
		}
	}
}

void maksimum_zad89(double tab[][MAX_ZAD89], int m, int n) {
	double temp;
	temp = tab[0][0];
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (tab[i][j] > temp) {
				temp = tab[i][j];
			}
		}
	}
	printf("\n\nMaksimum\t%lf\n", temp);
}

void szukanie_jedynki_zad90(double tab[][MAX_ZAD90], int m, int n) {
	int temp = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (tab[i][j] == 1) {
				temp += 1;
			}
		}
		if (temp != 1) {
			printf("W tym wierszu znajduje sie inna liczba jedynek niz jedna\n");
		}
		else
			printf("W tym wierszu znajduje sie tylko jedna jedynka\n");
		temp = 0;
	}
	printf("\n");
	int temp2 = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (tab[j][i] == 1) {
				temp += 1;
			}
		}
		if (temp != 1) {
			printf("W tej kolumnie znajduje sie inna liczba jedynek niz jedna\n");
		}
		else
			printf("W tej kolumnie znajduje sie tylko jedna jedynka\n");
		temp = 0;
	}
	printf("\n");
}

double sumowanie_zad91(double tab[][MAX_ZAD91], int m, int n) {
	double temp = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			temp += tab[i][j];
		}
	}
	return temp;
}

double sumowanie_przekatna_zad92(double tab[][MAX_ZAD92], int m, int n) {
	double temp = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				temp += tab[i][j];
			}
		}
	}
	return temp;
}

double sumowanie_przekatna_powyzej_zad93(double tab[][MAX_ZAD93], int m, int n) {
	double temp = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j > i) {
				printf("%d:%d\n", i, j);
				temp += tab[i][j];
			}
		}
	}
	return temp;
}

void szukanie_zer_zad94(double tab[][MAX_ZAD94], int m, int n) {
	int temp = True;
	for (int i = 1; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if ( j < i) {
				if (tab[i][j] != 0) {
					temp = False;
				}
			}
		}
	}
	if (temp == True) {
		printf("Wszystkie elementy tablicy ponizej przekatnej sa zerami\n");
	}
	else if (temp == False) {
		printf("Nie wszystkie elementy ponizej przekatnej sa zerami\n");
	}
}

void zad1() {
  printf("Oto szesciany wybranych liczb:\n\nk\tk*k*k\n\n");
  printf("%d\t%d\n", 21, 21*21*21);
  printf("%d\t%d\n", 32, 32*32*32);
  printf("%d\t%d\n", -53, (-53)*(-53)*(-53));
  printf("\nKoniec programu.\n\n");
}

void zad2() {
  printf("Oto szesciany wybranych liczb:\n\n k\tk*k*k\n\n");
  printf("%d\t%d\n", 21, 21*21*21);
  printf("%d\t%d\n", 32, 32*32*32);
  printf("%d\t%d\n", -53, (-53)*(-53)*(-53));
  printf("\nKoniec programu.\n\n");
}

void zad3() {
  printf("Oto szesciany wybranych liczb\nzapisane w systemie osemkowym:\n\nk\tk*k*k (system osemkowy)\n\n");
  printf("%o%20o\n", 2, 2*2*2);
  printf("%o%20o\n", 3, 3*3*3);
  printf("%o%20o\n", 5, 5*5*5);
  printf("\nKoniec programu.\n\n");
}

void zad4() {
  printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n k\tsqrt(k)\n\n");
  printf("%d\t%lf\n", 21, sqrt(21));
  printf("%d\t%lf\n", 32, sqrt(32));
  printf("%d\t%lf\n", 53, sqrt(53));
  printf("\nKoniec programu.\n\n");
}

void zad5() {
  printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n k\tsqrt(k)\n\n");
  printf("%d\t%.17lf\n", 21, sqrt(21));
  printf("%d\t%.17lf\n", 32, sqrt(32));
  printf("%d\t%.17lf\n", 53, sqrt(53));
  printf("\nKoniec programu.\n\n");
}

void zad6() {
  printf("Oto pierwiastki kwadratowe wybranych liczb:\n\n k\tsqrt(k)\n\n");
  printf("%d\t%e\n", 21, sqrt(21));
  printf("%d\t%e\n", 132, sqrt(132));
  printf("%d\t%e\n", 11153, sqrt(11153));
  printf("\nKoniec programu.\n\n");
}

void zad7() {
  printf("Program wypisuje na ekran pierwiastki kwadratowe liczb\n\n");
  printf("%.9lf\t%g\n", 0.000000001, sqrt(0.000000001));
  printf("%.8lf\t%g\n", 0.00000001, sqrt(0.00000001));
  printf("%ld\t%g\n", 9876543210123, sqrt(9876543210123));
  printf("%ld\t%g\n", 987654321012, sqrt(987654321012));
  printf("\nKoniec programu\n\n");
}

void zad8() {
	printf("Autor.........\n");
	printf("Wypisz liczby:\n%+d\n%+d\n%+d\n\n", -11, 0, 11111);
	printf("Wypisz liczby:\n%-d\n%-d\n%-d\n\n", -11, 0, 11111);
	printf("Koniec\n\n");
}

void zad9() {
	printf("Autor.........\n");
	printf("Wypisz liczby:\n%0.10d\n%0.10d\n%0.10d\n\n", -11, 0, 11111);
	printf("Koniec\n\n");
}

void zad10() {
	printf("Autor.........\n");
	printf("Wypisanie tekstu putchar\n");
	putchar('x');
	putchar(':');
	putchar('\t');
	putchar('f');
	putchar('(');
	putchar('x');
	putchar(')');
	putchar(':');
	putchar('\n');
	putchar('3');
	putchar('\t');
	putchar('5');
	putchar('\n');
	putchar('\n');
	printf("Koniec\n\n");
}

void zad11() {
	printf("Autor.........\n");
	printf("Program wypisuje liczbe -5 na rozne sposoby\n\n");
	printf("%d\n", -5);
	printf("%o\n", -5);
	printf("%u\n", -5);
	printf("%f\n", -5);
	printf("%g\n\n", -5);
	//printf("%s\n", -5); // program nie wypisuje, poniewaz -5 to liczba a %s jest do tekstu
	printf("Koniec\n\n");
}

void zad12() {
	printf("Autor.........\n");
	printf("Program wypisuje liczbe -5.0 na rozne sposoby\n\n");
	printf("%d\n", -5.0);
	printf("%o\n", -5.0);
	printf("%u\n", -5.0);
	printf("%f\n", -5.0);
	printf("%g\n\n", -5.0);
	//printf("%s\n", -5); // program nie wypisuje, poniewaz -5 to liczba a %s jest do tekstu
	printf("Koniec\n\n");
}

void zad13() {
	printf("Autor.........\n");
	printf("Program wypisuje na ekran wynik dzialan matematycznych\n\n");
	printf("2.0 + 3.0 = %f\n2.0 - 3.0 = %f\n2.0 * 3.0 = %f\n3.0 / 2.0 = %f\n2.0 / 3.0 = %f\n\n", 2.0 + 3.0, 2.0 - 3.0, 2.0 * 3.0, 3.0 / 2.0, 2.0 / 3.0);
	printf("2 + 3 = %d\n2 - 3 = %d\n2 * 3 = %d\n3 / 2 = %d\n2 / 3 = %d\n\n", 2 + 3, 2 - 3, 2 * 3, 3 / 2, 2 / 3);
	printf("2.0 + 3 = %f\n2.0 - 3 = %f\n2.0 * 3 = %f\n3.0 / 2 = %f\n2.0 / 3 = %f\n\n", 2.0 + 3, 2.0 - 3, 2.0 * 3, 3.0 / 2, 2.0 / 3);
	printf("2.0 + 3 = %d\n2.0 - 3 = %d\n2.0 * 3 = %d\n3.0 / 2 = %d\n2.0 / 3 = %d\n\n", 2.0 + 3, 2.0 - 3, 2.0 * 3, 3.0 / 2, 2.0 / 3);
	printf("Koniec\n\n");
}

void zad14() {
  /*
	printf("Autor.........\n");
	printf("%s\n", "ala");
	printf("%s\n", 'ala'); // '' napis a nie znak
	printf("%s\n", ala); // zmienna nie napis
	printf("%s\n""ala"); // brak przecinka
	printf("%s\n", "5"); // wypisze 5 jako tekst nie liczbe
	printf("%s\n", '5'); // to nie jest ''
	printf("%s\\nn", 5); // to jest liczba nie tekst
	printf("Koniec\n\n");
  */
}

void zad15() {
	printf("Autor.........\n");
	printf("Sekwencja specjalna\ntekst za nia.\n");
	printf("Sekwencja specjalna\ttekst za nia.\n");
	printf("Sekwencja specjalna\vtekst za nia.\n");
	printf("Sekwencja specjalna\btekst za nia.\n");
	printf("Sekwencja specjalna\rtekst za nia.\n");
	printf("Sekwencja specjalna\ftekst za nia.\n");
	printf("Sekwencja specjalna\atekst za nia.\n");
	printf("Sekwencja specjalna\\tekst za nia.\n");
	printf("Sekwencja specjalna\?tekst za nia.\n");
	printf("Sekwencja specjalna\'atekst za nia.\n");
	printf("Sekwencja specjalna\"atekst za nia.\n\n");
	printf("Koniec\n\n");
}

void zad16() {
	printf("Autor.........\n");
	printf("Uzywanie sekwencji specjalnych\n\n\\");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\nCzy \"a\" oznacza w C to samo co \'a\'\?\n\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\");
	printf("\n\nKoniec.\n\n");
}

void zad17() {
	printf("Autor.......\nprogram pobiera liczbe i wypisuje ja na ekran\n");
	printf("podaj liczbe calkowita:\t");
	int temp;
	scanf("%d", &temp);
	printf("podales liczbe:\t%d", temp);
	printf("\nkoniec\n\n");
	/*
	dla tekstu nie wczytuje nic
	dla 9.45 wczytuje 9
	dla a45b nie wczytuje nic
	dla 12345678912345678 wczytuje losowa wartosc
	*/
}

void zad18() {
	printf("Autor.......\nprogram pobiera liczbe w rozwinieciu dziesietnym i wypisuje ja na ekran\n");
	printf("podaj liczbe zmiennoprzecinkowa:\t");
	float temp2;
	scanf("%f", &temp2);
	printf("podales liczbe:\t%f", temp2);
	printf("\nkoniec\n\n");
	/*
	jak wczesniej dziala z int i float i double
	*/
}

void zad19() {
	printf("Autor.......\nprogram pobiera dwie liczby calkowite i wypisuje je na ekran\n");
	printf("Podaj dwie liczby calkowite odzielone spacja:\t");
	int temp3, temp4;
	scanf("%d%d", &temp3, &temp4);
	printf("Podales liczbe:\n%d\n%d\n", temp3, temp4);
	printf("\nKoiec\n\n");
	/*
	po podaniu blednych danych przy pierszym scanf wszyskie dane sa bledne
	*/
}

int zad20() {
	printf("Program pobiera dwie liczby i wypisuje je ");
  printf("Autor ...\n");
	int liczba1;
	int liczba2;
	printf("Podaj dwie liczby calkowite: ");
	if (scanf("%d", &liczba1) !=1 || getchar() != '\n'){
		printf("Blad koniec programu\n");
		return 0;
	}
	if (scanf("%d", &liczba2) !=1 || getchar() != '\n'){
		printf("Blad koniec programu\n");
		return 0;
	}
	printf("%d", liczba1);
	printf("\t");
	printf("%d", liczba2);
	printf("\nKoniec\n\n");
}

int zad21() {
	printf("Program pobiera liczbe i wypisuje ja ");
	printf("Autor ...\n");
	int liczba;
	printf("Podaj liczbe calkowite w systemie szesnastkowym: ");
	if (scanf("%x", &liczba) !=1 || getchar() != '\n'){                // %x unsigned int
		printf("Blad koniec programu\n");
		return 0;
	}
	printf("Liczba w systemie dziesietnym: %u", liczba);
	printf("\nKoniec\n\n");
}

int zad22() {
	printf("Program pobiera liczbe i wypisuje ja ");
	printf("Autor ...\n");
	int liczba3;
	printf("Podaj liczbe calkowite w systemie dziesietnym: ");
	if (scanf("%u", &liczba3) !=1 || getchar() != '\n'){              // %u unsigned int
		printf("Blad koniec programu\n");
		return 0;
	}
	printf("Liczba w systemie szesnastkowym: %x", liczba3);
	printf("\nKoniec\n\n");
}

int zad23() {
	printf("Program pobiera liczbe i wypisuje ja ");
	printf("Autor ...\n");
	int liczba4;
	printf("Podaj liczbe calkowite nieujemna w systemie dziesietnym: ");
	if (scanf("%u", &liczba4) !=1 || liczba4<=0 || getchar() != '\n'){
		printf("Blad koniec programu\n");
		return 0;
	}
	printf("%x", liczba4);
	printf("\nKoniec\n\n");
}

int zad24() {
	printf("Program pobiera liczbe i wypisuje ja ");
	printf("Autor ...\n");
	int liczba5;
	printf("Podaj liczbe calkowita w systemie dziesietnym: ");
	if (scanf("%u", &liczba5) !=1 || liczba5>=0 || getchar() != '\n') {
		printf("Liczba jest dodatnia\nKoniec\n");
			return 0;
	}
	else
	{
		printf("Liczba jest niedodatnia\nKoniec\n");
		return 0;
	}
	printf("\nKoniec\n");
}

void zad25() {
  printf("Program pobiera znak\nAutor......\n");
	printf("Nacisnij dowolny klawisz ");
	if (getchar() != 't' || getchar() != '\n')
		printf("bledna dane\nKoniec\n");
	else
	{
		printf("Podany znak t");
		printf("\nKoniec\n");
	}
  /* wcisniecie T i tre i t + ' ' konczy sie bledem
  poniewaz w buforze klawiatury jest co innego niz '\n'
  */
}

int zad25_2() {
  // wersja z dzialajacym t i T
  printf("Program pobiera znak\nAutor......\n");
	printf("Nacisnij dowolny klawisz ");
	char znak;
  if (scanf("%c", &znak) != 1 || getchar() != '\n') {
    printf("Bledne dane\nKoniec\n");
    return 0;
  }
  if (znak == 't' || znak == 'T') {
    if (znak == 't')
      printf("Podany znak %c", znak);
    else if (znak == 'T')
      printf("Podany znak %c", znak);
  }
  else
    printf("Bledne dane.");
  printf("\nKoniec\n");
}

void zad25_3() {
  // wersja z dzialajacym tekstem np: ter, t jest pierwsze
  printf("Program pobiera znak\nAutor......\n");
	printf("Nacisnij dowolny klawisz ");
	char znak;
  znak = getchar();
  if (znak == 't') {
    printf("Podany znak %c", znak);
  }
  else
    printf("Bledne dane.");
  printf("\nKoniec\n");
}

int zad25_4() {
  // wersja ze spacja
  printf("Program pobiera znak\nAutor......\n");
	printf("Nacisnij dowolny klawisz ");
	char znak;
  znak = getchar();
  if (!(isspace(getchar()))) {
    printf("Bledne dane.Koniec\n");
    return 0;
  }
  if (znak == 't')
    printf("Podany znak %c", znak);
  else
    printf("Bledne dane.");
  printf("\nKoniec\n");
}

int zad25_5() {
  // wersja z t w tekscie
  	printf("Program pobiera znak\nAutor......\n");
	printf("Nacisnij dowolny klawisz ");
  for (;;) {
    if (getchar() == 't') {
      printf("Znaleziono t\nKoniec\n");
      return 0;
    }
  }
  printf("Nie znaleziono t\nKoniec\n");
}

int zad26() {
  	printf("Program rozsztrzyga czy punkt nalezy do kola o srodku (0,0) i r = 1\nAutor....\n");
	double y;
	double x;
	printf("Podaj wspolrzedna x: ");
	if (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	printf("Podaj wspolrzedna y: ");
	if (scanf("%lf", &y) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	if (x <= 1 && y <= 1 && sqrt(pow(x, 2) + pow(y, 2)) <= 1 ){
		printf("Punkt nalezy do kola\nKoniec\n");
		return 0;
	}
	else{
		printf("Punkt nie nalezy do kola\nKoniec\n");
		return 0;
	}
}

int zad27() {
	printf("Program rozsztrzyga czy punkt lezy na okregu\nAutor....\n");
	double y;
	double x;
	printf("Podaj wspolrzedna x: ");
	if (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	printf("Podaj wspolrzedna y: ");
	if (scanf("%lf", &y) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	double promien;
	promien = x*x + y*y;
	if (promien == 1)
		printf("Punkt lezy na okregu\nKoniec\n");
	else
		printf("Punkt nie lezy na okregu\n");

	if (sqrt(promien) <= 1 || sqrt(promien) == 1)
		printf("Punkt lezy wewnatrz okregu\nKoniec\n");

	else
		printf("Punkt nie lezy wewnatrz okregu\nKoniec");

  return 0;
}

int zad28() {
	printf("Program rozsztrzyga czy punkt lezy w pierwszej cwiartce ukladu wspolrzednych\nAutor....\n");
	double y;
	double x;
	printf("Podaj wspolrzedna x: ");
	if (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	printf("Podaj wspolrzedna y: ");
	if (scanf("%lf", &y) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	if (x > 0 && y > 0)
		printf("Punkt lezy w pierwszej cwiartce\nKoniec\n");
	else
		printf("Punkt nie lezy w pierwszej cwiartce\nKoniec\n");

	return 0;
}

int zad29() {
	printf("Program rozsztrzyga czy punkt lezy w pierwszej cwiartce ukladu wspolrzednych\nAutor....\n");
	double y;
	double x;
	printf("Podaj wspolrzedna x: ");
	if (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	printf("Podaj wspolrzedna y: ");
	if (scanf("%lf", &y) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	if (x > 0 && y > 0)
		printf("Punkt lezy w pierwszej cwiartce\nKoniec\n");
	else if (x < 0 && y > 0)
		printf("Punkt lezy w drugiej cwiartce\nKoniec\n");
	else if (x < 0 && y < 0)
		printf("Punkt lezy w trzeciej cwiartce\nKoniec\n");
	else if (x > 0 && y < 0)
		printf("Punkt lezy w czwartej cwiartce\nKoniec\n");
	else if (x == 0)
		printf("Punkt lezy na osi odcietych\nKoniec\n");
	else if (y == 0)
		printf("Punkt lezy na osi rzednych\nKoniec\n");

	return 0;
}

int zad30() {
	printf("Program pobiera liczbe i wypisuje ja\nAutor....\n");
	double liczba, intpart, fractpart;
	printf("Podaj liczbe wymierna w postaci rozwiniecia dziesietnego: ");
	if (scanf("%lf", &liczba) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	fractpart = modf(liczba, &intpart);
	if (fractpart == 0)
		printf("Liczba jest calkowita\nKoniec\n");
	else if (fractpart != 0) {
		int liczba2 = (int)liczba;
		printf("Zaokroglenie w dol do liczby calkowitej: %d\nKoniec\n", liczba2);
	}

	return 0;
}

int zad31() {
	printf("Program porownuje punkt podany przez uzytkownika do funkcji\nf(x) = sqrt(|arccos(x) + e^x / ln(x)|)");
	printf("\nAutor.....\n");
  double y;
	double x;
	printf("Podaj wspolrzedna x: ");
	if (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	printf("Podaj wspolrzedna y: ");
	if (scanf("%lf", &y) != 1 || getchar() != '\n') {
		printf("Blad\nKoniec\n");
		return 0;
	}
	double funkcja;
	funkcja = sqrt(fabs(acos(x) + pow((M_E), x)/ log(x))); // dziedzina funkcji [0;1]
	if (x <= 0 || x >= 1)
		printf("Punkt ma odcieta nie nalezaca do dziedziny funkcji f(x)\n");
	else if (x > 0 && x < 1)
		printf("Punkt ma odcieta nalezaca do dziedziny funkcji f(x)\n");
    if (y == round(funkcja) && x > 0 && x < 1)
    	printf("Punkt nalezy do f(x)\n");
    else
    	printf("Punkt nie nalezy do f(x)\n");
    if (y > funkcja)
    	printf("Punkt lezy nad wykresem f(x)\nKoniec\n");
    else if (y < funkcja)
    	printf("Punkt lezy pod wykresem f(x)\nKoniec\n");
    else {
    	printf("Punkt poza dziedzina funkcji\nKoniec\n");
    }

	return 0;
}

void zad32() {
  int x;
  printf("Testowanie instr. przypisania.\n\n");
  x=3;
  printf("Po x=3; wart. x jest: %d\n",x);
  x=5;
  printf("Po x=5; wart. x jest: %d\n",x);
  x=x+2;
  printf("Po x=x+2; wart. x jest: %d\n",x);
  x=x*(x+1);
  printf("Po x=x*(x+1); wart. x jest: %d\n",x);
  x=x+1;
  printf("Po x=x+1; wart. x jest: %d\n",x);
  x=x-(3/4);
  printf("Po x=x-(3/4); wart. x jest: %d\n",x);
  x=x/(x+1);
  printf("Po x=x/(x+1); wart. x jest: %d\n",x);
  x--;
  printf("Po x--; wart. x jest: %d\n",x);
  printf("\n\nKoniec programu. \n");

  x = 0;
  x=x+2;
  printf("\n%d\n", x);
  x=x*(x+1);
  printf("%d\n", x);
  x=x+1;
  printf("%d\n", x);
  x=x-(3/4);
  printf("%d\n", x);
  x=x/(x+1);
  printf("%d\n", x);
  x--;
  printf("%d\n\n", x);

  x = 0;
  printf("Testowanie instr. przypisania.\n\n");
  x+=2;
  printf("Po x+=2; wart. x jest: %d\n", x);
  x*=(x+1);
  printf("Po x*=(x+1); wart. x jest: %d\n", x);
  x+=1;
  printf("Po x+=1; wart. x jest: %d\n", x);
  x-=(3/4);
  printf("Po x-=(3/4); wart. x jest: %d\n", x);
  x/=(x+1);
  printf("Po x/=(x+1); wart. x jest: %d\n", x);
  x--;
  printf("Po x--; wart. x jest: %d\n", x);
  printf("\n\nKoniec programu. \n");
}

void zad33() {
	int x = 0;
	int y = 0;
	y=(x++)+7;
	printf("\ny:%d  x:%d\n", y, x);
  y=(++x)+7;
  printf("y:%d  x:%d\n", y, x);
  y=7+(x++);
  printf("y:%d  x:%d\n", y, x);
  y=7+(++x);
  printf("y:%d  x:%d\n", y, x);
  y=7+(x+1);
  printf("y:%d  x:%d\n\nzmienione instrukcje\n", y, x);

  x = 0;
  y = 0;
  y=(x=x+1)+6;
	printf("\ny:%d  x:%d\n", y, x);
  y=(x=x+1)+7;
  printf("y:%d  x:%d\n", y, x);
  y=7+(x=x+1)-1;
  printf("y:%d  x:%d\n", y, x);
  y=7+(x=x+1);
  printf("y:%d  x:%d\n", y, x);
  printf("Koniec\n");
}

void zad34() {
	printf("Program pobiera liczbe i oblicza wartosc funkcji\nAutor....\n");
	printf("Podaj liczbe: ");
	double liczba;
	while (scanf("%lf", &liczba) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	double fx, pom1, pom2, fxtest;
	pom1 = liczba*liczba;
	pom1++;
	pom2 = sin(pom1);
	fx = sqrt(pom1) + (log(pom1)) / (5 + pom2) - exp(pom2);
	fxtest = sqrt(liczba*liczba + 1) + (log(liczba*liczba + 1)) / (5 + sin(liczba*liczba + 1)) - exp(sin(liczba*liczba + 1));
	printf("Test: %lf\tWynik: %lf\nKoniec\n", fxtest, fx);
}

void zad35() {
	printf("program pobiera liczbe i poteguje ja\nAutor.....\n");
	printf("Podaj liczbe: ");
	double x, tmp1, tmp2, wynik;
	while (scanf("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	tmp1 = x*x;
	tmp2 = tmp1*tmp1;
	wynik = tmp2*tmp2;
	printf("%lf\n", wynik);
	x *= x *= x *= x;
	printf("%lf\n", x);
}

void zad36() {
	printf("Program pobiera liczbe i oblicza wartosc funkcji\nAutor....\n");
	printf("Podaj liczbe: ");
	double liczba;
	while (scanf("%lf", &liczba) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	double fx;
	liczba = liczba - 2;
	fx = liczba * (13 + liczba * (17 + 23 * liczba));
	printf("%lf\n", fx);
}

void zad37() {
	printf("Program pobiera liczbe i oblicza wartosc funkcji\nAutor....\n");
	printf("Podaj liczbe x: ");
	double x, y;
	while (scanf("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	printf("Podaj liczbe y: ");
	while (scanf("%lf", &y) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	x = fabs(x);
	y = fabs(y);
	double fxy, temp1, temp2;
	temp1 = x*x;
	temp2 = temp1 + y*y;
	fxy = y + sqrt(temp2) + temp2 / cos(temp1);
	printf("Wynik f(x,y) = %lf\nKoniec\n", fxy);
}

void zad37_5() {
	printf("Program pobiera liczbe i oblicza wartosc funkcji\nAutor....\n");
	printf("Podaj liczbe x: ");
	double x, y;
	while (scanf("%lf", &x) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	printf("Podaj liczbe y: ");
	while (scanf("%lf", &y) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	x = fabs(x);
	y = fabs(y);
	double fxy;
	fxy = y;
	fxy += (sqrt(y = y*y + x*x) + (y) / cos(x*x));
	printf("Wynik f(x,y) = %lf\nKoniec\n", fxy);

}

int zad38() {
	printf("Program wykonuje jedno z 4 podanych dzialan\nAutor....\n");
	printf("Podaj pierwsza liczbe: ");
	double liczba1, liczba2;
	while (scanf("%lf", &liczba1) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
	printf("Podaj druga liczbe: ");
	while (scanf("%lf", &liczba2) != 1 || getchar() != '\n')
	{
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe: ");
		while (getchar() != '\n')
			;
	}
		printf("\nOpcje:\n");
		printf("Dodawanie[1]\n");
		printf("Odejmowanie[2]\n");
		printf("Mnozenie[3]\n");
		printf("Dzielenie[4]\n");
		printf("Wyjscie[0]\n\n");
		char wybor;
		printf("wybor: ");
		wybor = getchar();
		if (wybor == '4') {
			if (liczba2 == 0) {
				printf("Nie mozna dzielic przez 0\nKoniec\n");
				return 0;
			}
		}
		switch(wybor){
			case '1':
			printf("Wynik: %lf", liczba1 + liczba2);
			break;
			case '2':
			printf("Wynik: %lf", liczba1 - liczba2);
			break;
			case '3':
			printf("Wynik: %lf", liczba1 * liczba2);
			break;
			case '4':
			printf("Wynik: %lf", liczba1 / liczba2);
			break;
			case '0':
			printf("\nKoniec\n");
			break;

		}
  return 0;
}

void zad39() {
	printf("Program oblicza wartosc funkcji\nAutor......\n");
	printf("Podaj liczbe zmiennopozycyjna x: ");
	double x;
	while (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe zmiennopozycyjna x: ");
		while (getchar() != '\n')
			;
	}
	double funkcja;
	funkcja = (x > 0) ? pow(2, x) : -1;
	printf("Wynik %lf\nKoniec", funkcja);
}

void zad40() {
	printf("Program oblicza odleglosc R punktu (x,y) od poczatku ukladu wspolrzednych\nAutor......\n");
	double x, y;
	printf("Podaj wspolrzedna x\t");
	while (scanf("%lf", &x) != 1 || getchar() != '\n') {
		printf("Bledne dane. Popraw\n");
		printf("Podaj wspolrzedna x\t");
		while (getchar() != '\n')
			;
	}
	printf("Podaj wspolrzedna y\t");
	while (scanf("%lf", &y) != 1 || getchar() != '\n') {
		printf("Bledne dane. Popraw\n");
		printf("Podaj wspolrzedna y\t");
		while (getchar() != '\n')
			;
	}
	double R, R_1;
	R = sqrt(x*x + y*y);
	if (x == 0)
		R_1 = fabs(y);
	else if (x != 0 && fabs(x) >= fabs(y))
		R_1 = fabs(x) * sqrt(1 + (y/x) * (y/x));
	else if (x != 0 && fabs(x) <= fabs(y))
		R_1 = fabs(y) * sqrt(1 + (x/y) * (x/y));

	if (R == R_1) {
		printf("OBA ALGORYTMY DAJA TEN SAM WYNIK.\n");
		printf("Odleglosc punktu (%lf,%lf) od (0,0) wynosi %lf.", x, y, R);
	}
	else {
		printf("ALGORYTMY DAJA ROZNE WYNIKI.\n");
		printf("Odleglosc punktu (%lf,%lf) od (0,0) wynosi:\n -wg \"klasycznego\" algorytmu  %.17g,\n -wg \"klasycznego\" algorytmu  %.17g.\n\n", x, y, R, R_1);
		printf("Wartosc bezwzgledna roznicy miedzy wynikami:\n");
		printf("%21.17g\n", fabs(R) - fabs(R_1));
	}
}

int zad41() {
  printf("Program rozpatruje czy dwa wektory podane przez uzytkownika sa\n* rownolegle\n* prostopadle\nAutor......\n");
  printf("Podaj wspolrzedne 1 wektora, w formacie \nx1\ny1\nx2\ny2\n");
  double x1, x2, y1, y2;
  double x3, x4, y3, y4;
  while (scanf("%lf", &x1) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  while (scanf("%lf", &y1) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  while (scanf("%lf", &x2) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  while (scanf("%lf", &y2) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  printf("Podaj wspolrzedne 2 wektora, w formacie \nx3\ny3\nx4\ny4\n");
    while (scanf("%lf", &x3) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  while (scanf("%lf", &y3) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  while (scanf("%lf", &x4) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  while (scanf("%lf", &y4) != 1 || getchar() != '\n') {
    printf("Bledne dane.Popraw\n:");
    while (getchar() != '\n')
      ;
  }
  // sprawdzam prostopadlosc, czy a = -1, z y = ax + b
  // 1 wektor
  double a1 = (y2 - y1) / (x2 - x1);
  // wektor 2
  double a2 = (y4 - y3) / (x4 - x3);
  // wyjatek, nie mozna dzielic przez 0
  if (x1 == x2) {
    if (x3 == x4) {
      printf("Podane wektory sa rownolegle\nKoniec\n");
      return 0;
    }
    else if ((y3 == y4) && a2 == 1) {
      printf("Podane wektory sa prostopadle\nKoniec\n");
      return 0;
    }
  }
  if (x3 == x4) {
    if (x1 == x2) {
      printf("Podane wektory sa rownolegle\nKoniec\n");
      return 0;
    }
    else if ((y1 == y2) && a1 == 1) {
      printf("Podane wektory sa prostopadle\nKoniec\n");
      return 0;
    }
  }
  if (a1 == a2) {
    printf("Podane wektory sa rownolegle\nKoniec\n");
    return 0;
  }
  int temp1 = a1 / a2;
  if (temp1 == -1) {
    printf("Podane wektory sa prostopadle\nKoniec\n");
    return 0;
  }
  else {
    printf("Podane wektory nie sa prostopadle ani rownolegle\nKoniec\n");
  }
}

int zad42() {
	printf("Program oblicz pole trojkata\nAutor......\n");
	printf("wybierz dane, ktore chcesz podac:\n");
	printf("[1]bok i spuszczona nan wysokosc\n");
	printf("[2]dwa boki i kat miedzy nimi\n");
	printf("[3]trzy boki\n");
	double bok, bok2, bok3, W_H, Pole, wysokosc;
	char wybor;
	printf("wybor:\t");
	wybor = getchar();

	if (wybor == '1'){
		printf("Podaj wartosc boku:\t");
		while (scanf("%lf", &bok) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 1 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		printf("Podaj wartosc wysokosci:\t");
		while (scanf("%lf", &wysokosc) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 1 boku:\t");
		    while (getchar() != '\n')
		    	;
	    }
        Pole = bok * wysokosc * (1/2);
        printf("Pole trojkata %lf", Pole);
    }
    else if (wybor == '2'){
		}
    else if (wybor == '3'){
		printf("Podaj wartosc 1 boku:\t");
		while (scanf("%lf", &bok) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 1 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		printf("Podaj wartosc 2 boku:\t");
		while (scanf("%lf", &bok2) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 2 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		printf("Podaj wartosc 3 boku:\t");
		while (scanf("%lf", &bok3) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 3 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		W_H = 0.5 * (bok + bok2 + bok3);
		Pole = sqrt(W_H * (W_H - bok) * (W_H - bok2) * (W_H - bok3));
		printf("Pole trojkata %lf", Pole);
		}
		else {
			printf("Koniec\n");
		return 0;
	}
}

void zad43() {
	printf("Program znajduje najmniejsza liczbe\nAutor......\n");
	double liczba1, liczba2, liczba3;
	printf("Podaj liczbe(1):\t");
	while (scanf("%lf", &liczba1) != 1 || getchar() != '\n'){
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe:\t");
		while (getchar() != '\n')
		    ;
	}
	printf("Podaj liczbe(2):\t");
	while (scanf("%lf", &liczba2) != 1 || getchar() != '\n'){
	    printf("Bledne dane. Popraw\n");
	    printf("Podaj liczbe:\t");
	    while (getchar() != '\n')
		    ;
	}
	printf("Podaj liczbe(3):\t");
	while (scanf("%lf", &liczba3) != 1 || getchar() != '\n'){
		printf("Bledne dane. Popraw\n");
		printf("Podaj liczbe:\t");
		while (getchar() != '\n')
		    ;
	}
	if (liczba1 < liczba2){
		if (liczba1 < liczba3)
			printf("Najmniejsza jest\t%lf", liczba1);
		else if (liczba1 > liczba3)
			printf("Najmniejsza jest\t%lf", liczba3);
		else
			printf("Najmniejsze sa\t%lf I %lf", liczba1, liczba2);
	}
	else if (liczba2 < liczba1){
		if (liczba2 < liczba3)
			printf("Najmniejsza jest\t%lf", liczba2);
		else if (liczba2 > liczba3)
			printf("Najmniejsza jest\t%lf", liczba3);
		else
			printf("Najmniejsze sa\t%lf I %lf", liczba2, liczba3);
	}
	else if (liczba1 == liczba2){
		if (liczba1 < liczba3)
			printf("Najmniejsze sa\t%lf I %lf", liczba1, liczba2);
		else if (liczba1 > liczba3)
			printf("Najmniejsza jest\t%lf", liczba3);
		else
			printf("Najmniejsze sa\t%lf I %lf I %lf\t(wszystkie podane sa najmniejszym elementem)", liczba1, liczba2, liczba3);
	}
	printf("\nKoniec\n");
}

void zad44() {
	printf("Program podaje znak ASCII wpisanego znaku\nAutor.......\n");
	printf("Podaj znak:\t");
	char znak;
	znak = getchar();
	int kod_znaku;
	kod_znaku = znak;
	printf("Kod znaku:\t%d", kod_znaku);
}

void zad45() {
	printf("Program pobiera kod ASCII i wypisuje znak\nAutor......\n");
	int kod_znaku;
	printf("Podaj kod znaku:\t");
	while (scanf("%d", &kod_znaku) != 1 || getchar() != '\n'){
		printf("Bledne dane. Popraw\n");
		printf("Podaj kod znaku:\t");
		while (getchar() != '\n')
		    ;
	}
	char znak;
	znak = kod_znaku;
	printf("%c", znak);
}

int zad46() {
	printf("Program wczytuje godzine\nAutor.......\n");
	printf("Podaj godzine w formacie hh:mm (np. 03:12, 23:01)\t");
	int min, godz;
	// 1 znak
	char znak;
	znak = getchar();
	if (znak < '0' || znak > '2') {
		printf("Blad 1 znaku\nKoniec\n");
		return 0;
	}
	godz = znak - '0';
	// 2 znak
	znak = getchar();
	if (!isdigit(znak) ) {
		printf("Blad 2 znaku\nKoniec\n");
		return 0;
	}
	godz = godz * 10 + (znak - '0');
	if (godz > 23) {
		printf("Bledna godzinna\nKoniec\n");
		return 0;
	}
	// 3 znak
	if (getchar() != ':') {
		printf("Bledny znak\nKoniec\n");
		return 0;
	}
	// 4 znak
	znak = getchar();
	if (znak < '0' || znak > '5') {
		printf("Blad 3 znaku\nKoniec\n");
		return 0;
	}
	min = znak - '0';
	// 5 znak
	znak = getchar();
	if (!isdigit(znak)) {
		printf("Blad 4 znaku\nKoniec\n");
		return 0;
	}
	min = min * 10 + (znak - '0');
	// 6 znak
	if (getchar() != '\n') {
		printf("Bledne znak\nKoniec\n");
		return 0;
	}
	printf("Oto wczytana godzina:\n");
	printf("%d ", min);
	if (min == 1)
		printf("minuta po %d\n", godz);
	else if (min == 0 || min > 10 && min < 19)
		printf("minut po %d\n", godz);
	else if (znak == '2' || znak == '3' || znak == '4')
		printf("minuty po %d\n", godz);
	else
		printf("minut po %d\n", godz);

	printf("Koniec\n");
}

void zad47() {
  printf("Prace trwaja\n");
}

void zad48() {
  printf("Program wypisuje na ekran 50 poczatkowych poteg 2\nAutor.......\n");
  long long int temp = 2;
  for (int i = 0; i < MAX_ZAD48; i++) {
    printf("%lld\n", temp = temp * 2);
  }
  printf("\nKoniec\n");
}

void zad49() {
  printf("Program wypisuje na ekranie wartosci 1! do 200!\nAutor.....\n");
  long long int temp = 1;
  // Max warosc do wypisania 11
  for (int i = 1; i < MAX_ZAD49; i++) {
    temp *= i;
    printf("%lld\n", temp);
  }
}

void zad49_5() {
  int temp = 31;
  printf("Program wypisuje na ekranie wartosci 1! do 200!\nAutor.....\n");
  printf("%d", silnia(temp));
}

void zad50() {
  printf("Program dla n = 1, 2, 4, ..., 200 wypisuje wartosci funkcji f(n) = (3^n)/(n+1)!\nAutor......\n");
  double temp = 3.0 / 2.0;
  printf("%llf\n", temp);
  int temp2 = 1;
  int temp3 = 3;
  while (True) {
	printf("%lf\n", temp *= (3.0 / temp3));
	temp2++;
	temp3++;
	if (temp2 == 50) {
		break;
	}
  }
}

void zad51() {
	printf("Program znajuduje najmniejsza liczbe naturalna taka, ze 90^n/(n+1)! < 1\nAutor.....\n");

}

void zad52() {
	printf("Program usuwa zbedne spacje z lini tekstu\nAutor.....\n");
	printf("Podaj tekst do wczytania:\t");
	int temp = True;
	int temp2 = True;
	char znak;
	while (temp2) {
		znak = getchar();
		if (temp == 1) {
			printf("Teskt:\t");
			temp = False;
		}
		if (isspace(znak)) {
			continue;
		}
		if (znak == '\n') {
			temp2 = False;
			break;
		}
		printf("%c", znak);
	}
}

void zad53() {
	printf("Program wczytuje liczbe naturalna i wypisuje na ekran\nAutor...\n");
	printf("Podaj liczbe naturalna:\t");
	int temp;
	while (scanf("%d", &temp) != 1 || temp <= 0 || getchar() != '\n') {
		printf("Bledne dane.Popraw:\t");
		while (getchar() != '\n')
			;
	}
	printf("Podana liczba to %d\nKoniec\n", temp);
}

void zad54() {
	printf("Program wczytuje t z klawiatury\nAutor....\n");
	char znak;
	printf("Naczisnij klawisz 't' :");
	while (getchar() != 't') {
		printf("Bledne dane.Popraw:\t");
		while (getchar() != '\n')
			;
	}
	printf("Nacisnales klawisz t\nKoniec\n");
}

void zad55() {
	printf("Program wczytuje ciag liczb calkowitych dodatnich i wypisuje minimalna, 0 konczy wpisywanie\nAutor....\n");
	int ile_elementow;
	int temp1, min = 0;
	printf("Podaj ilosc liczb do wpisania:\t");
	ile_elementow = wczytaj_int();
	while (ile_elementow) {
		ile_elementow--;
		temp1 = wczytaj_int();
		if (temp1 == 0) {
			printf("Konczenie podawania danych\n");
			break;
		}
		if (min == 0) {
			min = temp1;
		}
		else if (min > temp1) {
			min = temp1;
		}
	}
	printf("Min = %d\nKoniec\n", min);
}

void zad56() {
	printf("Program wczytuje 10 liczb zmiennopozycyjnych i wypisuje ich srednia arytmetyczna\nAutor....\n");
	double temp = 0, srednia_arytmetyczna;
	for (int i = 0; i < 10; i++) {
		temp += wczytaj_double();
	}
	srednia_arytmetyczna = temp / 10.0;
	printf("Srednia = %lf\nkoniec\n", srednia_arytmetyczna);
}

void zad57() {
	printf("Program wczytuje 10 liczb zmiennopozycyjnych i wypisuje ich srednia arytmetyczna i geometryczna, 0 konczy podawanie\nAutor....\n");
	int ile_elementow;
	double temp1, temp2 = 0, temp3, temp4 = 1;
	double s_a, s_g;
	printf("Podaj ilosc liczb do wpisania:\t");
	ile_elementow = wczytaj_int_calk();
	temp3 = ile_elementow;
	while (ile_elementow) {
		ile_elementow--;
		temp1 = wczytaj_int_dodatnie();
		if (temp1 == 0) {
			printf("Konczenie wpisywania\n");
			break;
		}
		temp2 += temp1;
		temp4 *= temp1;
	}
	s_a = temp2 / temp3;
	temp3 = 1/temp3;
	s_g = pow(temp4, temp3);
	printf("Srednia artymetyczna = %lf\nSrednia geometryczna = %lf\nKoniec\n", s_a, s_g);
}

void zad58() {
	printf("Program wczytuje ciag 0 i 1 i reprezentuje je jako liczbe w systemie dziesietnym, max 32 znaki\nAutor....\n");
	int temp;
}

void zad59() {
	printf("Program wypisuje menu kalkulatora\nAutor....\n");
	printf("0. Zakoncz program\n");
	printf("1. Wczytaj liczby\n");
	printf("2. Dodaj\n");
	printf("3. Odejmij\n");
	printf("4. Pomnoz\n");
	printf("5. Podziel\n");
	char wybor;
	switch (wybor) {
	case '0':

	break;
	case '1':
	break;
	case '2':
	break;
	case '3':
	break;
	case '4':
	break;
	case '5':
	break;
	default:
	break;
	}
}

int zad60() {
	printf("Program oblicz pole trojkata\nAutor......\n");
	printf("wybierz dane, ktore chcesz podac:\n");
	printf("[1]bok i spuszczona nan wysokosc\n");
	printf("[2]dwa boki i kat miedzy nimi\n");
	printf("[3]trzy boki\n[0]koniec\n");
	double bok, bok2, bok3, W_H, Pole, wysokosc;
	char wybor;
	printf("wybor:\t");
	wybor = getchar();

	if (wybor == '1'){
		printf("Podaj wartosc boku:\t");
		while (scanf("%lf", &bok) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 1 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		printf("Podaj wartosc wysokosci:\t");
		while (scanf("%lf", &wysokosc) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 1 boku:\t");
		    while (getchar() != '\n')
		    	;
	    }
        Pole = bok * wysokosc * (1/2);
        printf("Pole trojkata %lf", Pole);
    }
    else if (wybor == '2'){
		}
    else if (wybor == '3'){
		printf("Podaj wartosc 1 boku:\t");
		while (scanf("%lf", &bok) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 1 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		printf("Podaj wartosc 2 boku:\t");
		while (scanf("%lf", &bok2) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 2 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		printf("Podaj wartosc 3 boku:\t");
		while (scanf("%lf", &bok3) != 1 || getchar() != '\n'){
			printf("Bledne dane. Popraw\n");
		    printf("Podaj wartosc 3 boku:\t");
		    while (getchar() != '\n')
		    	;
		}
		W_H = 0.5 * (bok + bok2 + bok3);
		Pole = sqrt(W_H * (W_H - bok) * (W_H - bok2) * (W_H - bok3));
		printf("Pole trojkata %lf", Pole);
		}
		else if (wybor == '0') {
			return 0;
		}
		else {
			printf("Koniec\n");

	}
}

int zad61() {
	printf("Program wczytuje godzine\nAutor.......\n");
	printf("Podaj godzine w formacie hh:mm (np. 03:12, 23:01)\t");
	int min, godz;
	// 1 znak
	char znak;
	znak = getchar();
	if (znak < '0' || znak > '2') {
		printf("Blad 1 znaku\nKoniec\n");
		return 0;
	}
	godz = znak - '0';
	// 2 znak
	znak = getchar();
	if (!isdigit(znak) ) {
		printf("Blad 2 znaku\nKoniec\n");
		return 0;
	}
	godz = godz * 10 + (znak - '0');
	if (godz > 23) {
		printf("Bledna godzinna\nKoniec\n");
		return 0;
	}
	// 3 znak
	if (getchar() != ':') {
		printf("Bledny znak\nKoniec\n");
		return 0;
	}
	// 4 znak
	znak = getchar();
	if (znak < '0' || znak > '5') {
		printf("Blad 3 znaku\nKoniec\n");
		return 0;
	}
	min = znak - '0';
	// 5 znak
	znak = getchar();
	if (!isdigit(znak)) {
		printf("Blad 4 znaku\nKoniec\n");
		return 0;
	}
	min = min * 10 + (znak - '0');
	// 6 znak
	if (getchar() != '\n') {
		printf("Bledne znak\nKoniec\n");
		return 0;
	}
	printf("Oto wczytana godzina:\n");
	printf("%d ", min);
	if (min == 1)
		printf("minuta po %d\n", godz);
	else if (min == 0 || min > 10 && min < 19)
		printf("minut po %d\n", godz);
	else if (znak == '2' || znak == '3' || znak == '4')
		printf("minuty po %d\n", godz);
	else
		printf("minut po %d\n", godz);

	printf("Koniec\n");
}

int zad62() {
	char znak;
  int temp = 1;
  printf("Program prowadzi dialog\nAutor.......\n\n");
  printf("Jak masz na imie?\t");
  for (int i = 0; i < MAX_ZAD62; i++) {
    znak = getchar();
    if (i == 0) {
      if (islower(znak)) {
        printf("imie nalezy pisac wielka litera\n");
        printf("\nKoniec\n");
        return 0;
      }
    }
    if (znak == '\n') {
      break;
    }
    if (i == 0) {
      printf("Masz na imie ");
    }
    printf("%c", znak);
    if (isdigit(znak)) {
      printf("...?\nImie sklada sie tylko z liter.\n");
      printf("\nKoniec\n");
      return 0;
    }
    if (i != 0) {
      if (isupper(znak)) {
        printf("...?\nPoza pierwsza litera wszystkie powinny byc male.\n");
        printf("\nKoniec\n");
        return 0;
      }
    }
  }
  printf("\nKoniec\n");
  return 0;
}

void zad63() {
	double krok=(KON_ZAD63-POCZ_ZAD63)/(ILE_ZAD63-1);//odl. miedzy pkt.
	printf("Program oblicza bledy przyblizenia");
	printf(" funkcji sin(x) przez x\ndla %d",ILE_ZAD63);
	printf(" rownoodleglych punktow z przedzial");
	printf("u [%.g,%g].\n\n%-14s",POCZ_ZAD63,KON_ZAD63,"x");
	printf("%-13s%-12s","sin(x)","x-sin(x)");
	printf("%-12s\n","|(x-sin(x))/x|");

	for (int i = 0; i <= ILE_ZAD63; i++) {
		double x=POCZ_ZAD63+i*krok;
		double sin_x=sin(x);
		double bl_b=x-sin_x;
		double bl_w=x!=0.0?fabs(bl_b/x):-1.0;
		printf("\n%11.9f%14.9f%12.3e",x,sin_x,bl_b);
		if (bl_w!=-1.0)
			printf("%12.3e",bl_w);
		}
	printf("\n\nKoniec programu.\n");
}

void zad64() {
	printf("Proram wypisuje wartosc INT_MAX\nAutor.........\n\n");
	for (int i = 0; i < 10; i++) {
		printf("INT_MAX %d = %d\n", i - 5, (INT_MAX - 5) + i);
	}
	printf("\nKoniec\n");
}

void zad65() {
	// info
	printf("Program wypisuje n poczatkowych poteg 2\nAutor.........\n");
	// wczytanie liczby poteg
	int n = wczytajint_zad65();
	// wypisanie poteg
	wypisz_potegi_zad65(n);
	// zakonczenie
	printf("Koniec\n");
}

void zad66() {
	printf("Program wczytuje liczby zmiennopozycyjne i znajduje srednia arytmetyczna\nAutor.......\n\n");
	printf("Podaj liczby(po jednej):\t");
	double liczba, suma = 0;
	char decyzja;
	for (int i = 1; i < 11; i++) {
		scanf("%lf", &liczba);
		printf("Wpisana liczba to %lf, czy chcesz ja poprawic?\nTak [1]\nNie [0]\t", liczba);
		while (getchar() != '\n')
			;
		decyzja = getchar();
		if (decyzja == '1') {
			while (getchar() != '\n')
				;
			continue;
		}
		else if (decyzja == '0') {
			suma = suma + liczba;
			while (getchar() != '\n')
				;
			continue;
		}
	}
	printf("\nSrednia arytmetyczna to:\t%lf\n", suma/10);
	printf("\nKoniec\n");
}

void zad67() {
	printf("program rysuje giwazdki w lini\nAutor......\n");
	printf("podaj ilosc gwiazdek do wypisania;\t");
	int temp;
	temp = wczytaj_int_dodatnie();
	for (int i = 0; i < temp; i++) {
		printf("*");
	}
	printf("\nKoniec\n");
}

void zad68() {
	printf("program rysuje kwadrat z gwiazdek\nAutor.....\n");
	printf("Podaj dlugosc boku:\t");
	int temp;
	temp = wczytaj_int_dodatnie();
	for (int i = 0; i < temp; i++) {
		printf("\n");
		for (int j = 0; j < temp; j++) {
			printf("*");
		}
	}
	printf("\nKoniec\n");
}

void zad69() {
	printf("program rysuje prostokat z gwiazdek o szerokosci 2 razy wiekszej od dlugosci\nAutor.....\n");
	printf("Podaj dlugosc szerokosci:\t");
	int temp;
	temp = wczytaj_int_dodatnie();
	for (int i = 0; i < temp; i++) {
		printf("\n");
		for (int j = 0; j < temp * 2; j++) {
			printf("*");
		}
	}
	printf("\nKoniec\n");
}

void zad70() {
	printf("program rysuje trojkat prostokatny\nAutor.....\n");
	printf("Podaj wysokosc:\t");
	int temp, temp2;
	temp = wczytaj_int_dodatnie();
	for (int i = 0; i < temp; i++) {
		if (i > 1) {
			printf("\n");
		}
		temp2 = i;
		while (temp2) {
			printf("*");
			temp2--;
		}
	}
	printf("\nKoniec\n");
}

void zad71() {
	printf("program rysuje trojkat rownoboczny\nAutor.....\n");
	printf("Podaj wysokosc:\t");
	int temp, temp2, temp3;
	temp = wczytaj_int_dodatnie();
	for (int i = 0; i < temp; i++) {
		if (i > 1) {
			printf("\n");
		}
		temp2 = i;
		while (temp2) {
			printf("*");
			temp2--;
		}
	}
	printf("\nKoniec\n");
}

void zad72() {

}

void zad73() {

}

void zad74() {

}

void zad75() {
	// info
	printf("Program pobiera 10 liczb calkowitych i wypisuje je od tylu\n");
	printf("Autor............\n");
	int liczby[ILE_ZAD75];
	// wczytaj tab
	wczytaj_tab(liczby, ILE_ZAD75);
	// wypisz wstecz
	wypisz_tab(liczby, ILE_ZAD75);
	// wypisz odwrotnie
	wypisz_odwrotnie_tab(liczby, ILE_ZAD75);
}

void zad76() {

}

void zad77() {

}

void zad78() {

}

void zad79() {
	printf("Program pobiera 10 liczb calkowitych i wypisuje je od tylu\n");
	printf("Autor............\n");
  	int liczby[ILE_ZAD79];
	// wczytaj tab
	wczytaj_tab(liczby, ILE_ZAD79);
	// wypisz tab
	wypisz_tab(liczby, ILE_ZAD79);
	// sortowanie
	sortuj_v1(liczby, ILE_ZAD79);
	// wypisz posortowane
	wypisz_tab(liczby, ILE_ZAD79);
}

void zad80() {
  srand((unsigned)time(NULL));
  int nast;
  for (int i = 0; i < 15; i++) {
    nast = rand() % 16 + 5;
    printf("%d\n", nast);
  }
}

void zad81() {

}

void zad82() {
	// info
	printf("Program wczytuje n liczb calkowitych i sprawdza czy znajduje sie para jednakowych\nAutor.....\n");
	// wczytanie ilosci liczb n
	printf("Podaj ilosc liczb do wpisania\t");
	int ilosc_liczb;
	ilosc_liczb = wczytaj_int_calk();
	// wczytanie liczb do tablicy
	int liczby[MAX_ZAD82] = {0};
	wczytaj_tab(liczby, ilosc_liczb);
	// znajdywanie par
	int istnienie_par;
	istnienie_par = parowanie(liczby, ilosc_liczb);
	if (istnienie_par == 0) {
		printf("Brak par\nKoniec\n");
	}
	else if (istnienie_par == 1) {
		printf("Pary istnieja\nKoniec\n");
	}
}

void zad83() {
  	// info
  	printf("Program oblicz wartosc wielomianu\nAutor........\n");
	// zmienne
	int stopien;
	double x;
	double tab[MAX_ZAD83] = { 0 };
	// wczytanie zmiennych
	printf("Podaj stopien wielomianu\t");
	stopien = wczytaj_int_calk();
	// wczytanie wspolczynnikow
	wczytaj_tab_double(tab ,stopien);
  	// obliczenie wartosci wielomianu
  	// dokoncz
}

void zad84() {

}

void zad85() {

}

void zad86() {

}

void zad87() {
	// info
	printf("program wczytuje i wypisuje elementy tablicy\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD87);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD87);
	// wczytanie tablicy
	double tab[MAX_ZAD87][MAX_ZAD87] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	// wypisanie tablicy
	wypisz_tab_zad87(tab, wiersze, kolumny);
	// Koniec
	printf("\nKoniec\n");
}

void zad88() {
	// info
	printf("program wczytuje i wypisuje elementy tablicy\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD88);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD88);
	// wczytanie tablicy
	double tab[MAX_ZAD88][MAX_ZAD88] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	// wypisanie tablicy
	wypisz_tab_zad87(tab, wiersze, kolumny);
	// wypisanie tablicy na odwrot
	printf("\n");
	wypisz_zmieniona_tab_zad88(tab, wiersze, kolumny);
	// Koniec
	printf("\nKoniec\n");
}

void zad89() {
	// info
	printf("program wczytuje i wypisuje elementy tablicy\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD89);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD89);
	// wczytanie tablicy
	double tab[MAX_ZAD89][MAX_ZAD89] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	// wypisanie tablicy
	wypisz_tab_zad87(tab, wiersze, kolumny);
	// znjdowanie maksimum
	maksimum_zad89(tab, wiersze, kolumny);
	// Koniec
	printf("\nKoniec\n");
}

void zad90() {
	// info
	printf("program wczytuje i sprawdza czy w kazdym wierszu i kolumnie jest jedna jedynka\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD90);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD90);
	// wczytanie tablicy
	double tab[MAX_ZAD90][MAX_ZAD90] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	// szukanie 1
	szukanie_jedynki_zad90(tab, wiersze, kolumny);
	// Koniec
	printf("\nKoniec\n");
}

void zad91() {
	// info
	printf("program wczytuje i sprawdza czy w kazdym wierszu i kolumnie jest jedna jedynka\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD91);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD91);
	// wczytanie tablicy
	double tab[MAX_ZAD91][MAX_ZAD91] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	double suma;
	suma = sumowanie_zad91(tab, wiersze, kolumny);
	printf("\nSuma = %lf\n\n", suma);
	// Koniec
	printf("\nKoniec\n");
}

void zad92() {
	// info
	printf("program wczytuje i sprawdza czy w kazdym wierszu i kolumnie jest jedna jedynka\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD92);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD92);
	// wczytanie tablicy
	double tab[MAX_ZAD92][MAX_ZAD92] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	double suma;
	suma = sumowanie_przekatna_zad92(tab, wiersze, kolumny);
	printf("\nSuma = %lf\n\n", suma);
	// Koniec
	printf("\nKoniec\n");
}

void zad93() {
	// info
	printf("program wczytuje i sprawdza czy w kazdym wierszu i kolumnie jest jedna jedynka\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD93);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD93);
	// wczytanie tablicy
	double tab[MAX_ZAD93][MAX_ZAD93] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	double suma;
	suma = sumowanie_przekatna_powyzej_zad93(tab, wiersze, kolumny);
	printf("\nSuma = %lf\n\n", suma);
	// Koniec
	printf("\nKoniec\n");
}

void zad94() {
	// info
	printf("program wczytuje i sprawdza czy w elementy ponizej glownej przekatnej sa zerami\nAutor.....\n");
	// wczytanie ilosci wierszy i kolumn
	int wiersze, kolumny;
	printf("Podaj ilosc wierszy\t");
	wiersze = wczytaj_int_przedzialy(1, MAX_ZAD94);
	printf("Podaj ilosc kolumn\t");
	kolumny = wczytaj_int_przedzialy(1, MAX_ZAD94);
	// wczytanie tablicy
	double tab[MAX_ZAD94][MAX_ZAD94] = { { 0 } };
	wczytaj_tab_zad87(tab, wiersze, kolumny);
	// szukanie zer
	szukanie_zer_zad94(tab, wiersze, kolumny);
	// Koniec
	printf("\nKoniec\n");
}

void zad95() {

}

void zad96() {

}

void zad97() {

}

void zad98() {

}

void zad99() {

}

void zad100() {

}

void zad101() {

}

/*
zadania dodatkowe
funkcje
*/

void zad102() {
	printf("Program wczytuje liczbe naturalna i wypisuje na ekran\nAutor...\n");
	printf("Podaj liczbe naturalna:\t");
	int temp;
	temp = wczytaj_int_calk();
	printf("Podana liczba to %d\nKoniec\n", temp);
}

void zad103() {
	printf("Program testowy wczytuje 3 calkowite liczby za pomoca funkcji\nAutor....\n");
	int temp[3] = {0};
	for (int i = 0; i < 3; i++) {
		printf("podaj %d liczbe:\t", i + 1);
		temp[i] = wczytaj_int_dodatnie();
	}
	printf("Koniec\n");
}

void zad104() {

}

void zad105() {

}

void zad106() {

}

void zad107() {

}

void zad108() {

}

void zad109() {

}

void zad110() {

}

void zad111() {

}

void zad112() {

}

void zad113() {

}

void zad114() {

}

void zad115() {

}

void zad116() {

}

void zad117() {

}

void zad118() {

}

void zad119() {

}

void zad120() {

}

void zad121() {

}

void zad122() {

}

void zad123() {

}

void zad124() {

}

void zad125() {

}

void zad126() {

}

void zad127() {

}

void zad128() {

}

void zad129() {

}

void zad130() {

}

void zad131() {

}

void zad132() {

}

void zad133() {

}

void zad134() {

}

void zad135() {

}

void zad136() {

}

void zad137() {

}

void zad138() {

}

void zad139() {

}

void zad140() {

}

void zad141() {

}

void zad142() {

}

void zad143() {

}

void zad144() {

}

void zad145() {

}

void zad146() {

}
