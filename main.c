/*
zadania programowanie strukturalne w C UKSW
*/
/*
Autor Sebastian Mazurek
*/
/*
brakuje zadan
47
51
52
58
59
60
61
62
71
72
73
74
76
77
78
81
83
84
85
86
94 - 146
*/

#include "headers.h"

int main() {
	int decyzja = True;
	while (decyzja) {
		// menu do zadan
  		printf("Wybierz zadanie:(1-146, program 25, 37 posiadaja wiele wersji, wybierz 0 by wyjsc)\t");
  		int numer_zadania;
  		while (scanf("%d", &numer_zadania) != 1 || getchar() != '\n' || numer_zadania < 0 || numer_zadania > 147) {
    		printf("Blad. Popraw:(1-93)\t");
    		while (getchar() != '\n')
      			;
  			}
  	char znak;
  	switch(numer_zadania) {
		case 0:
		printf("Zamykanie programu\n");
		return 0;
		break;
    	case 1:
    	zad1();
    	break;
    	case 2:
    	zad2();
    	break;
		case 3:
		zad3();
		break;
		case 4:
		zad4();
		break;
		case 5:
		zad5();
		break;
		case 6:
		zad6();
		break;
		case 7:
		zad7();
		break;
		case 8:
		zad8();
		break;
		case 9:
		zad9();
		break;
		case 10:
		zad10();
		break;
		case 11:
		zad11();
		break;
		case 12:
		zad12();
		break;
		case 13:
		zad13();
		break;
		case 14:
		zad14();
		break;
		case 15:
		zad15();
		break;
		case 16:
		zad16();
		break;
		case 17:
		zad17();
		break;
		case 18:
		zad18();
		break;
		case 19:
		zad19();
		break;
		case 20:
		zad20();
		break;
		case 21:
		zad21();
		break;
		case 22:
		zad22();
		break;
		case 23:
		zad23();
		break;
		case 24:
		zad24();
		break;
		case 25:
		printf("Ktora wersja?\n");
		printf("ver1 - {1}\nver2 - {2}\nver3 - {3}\nver4 - {4}\nver5 - {5}\n:");
		znak = getchar();
		getchar();
		switch (znak) {
		case '1':
		zad25();
		break;
		case '2':
		zad25_2();
		break;
		case '3':
		zad25_3();
		break;
		case '4':
		zad25_4();
		break;
		case '5':
		zad25_5();
		break;
		}
		break;
		case 26:
		zad26();
		break;
		case 27:
		zad27();
		break;
		case 28:
		zad28();
		break;
		case 29:
		zad29();
		break;
		case 30:
		zad30();
		break;
		case 31:
		zad31();
		break;
		case 32:
		zad32();
		break;
		case 33:
		zad33();
		break;
		case 34:
		zad34();
		break;
		case 35:
		zad35();
		break;
		case 36:
		zad36();
		break;
		case 37:
		printf("Ktora wersja?\n");
		printf("ver1 - {1}\nver2 - {2}\n:");
		char znak;
		znak = getchar();
		getchar();
		if (znak == '1') {
		zad37();
		} else if (znak == '2') {
		zad37_5();
		}
		break;
		case 38:
		zad38();
		break;
		case 39:
		zad39();
		break;
		case 40:
		zad40();
		break;
		case 41:
		zad41();
		break;
		case 42:
		zad42();
		break;
		case 43:
		zad43();
		break;
		case 44:
		zad44();
		break;
		case 45:
		zad45();
		break;
		case 46:
		zad46();
		break;
		case 47:
		zad47();
		break;
		case 48:
		zad48();
		break;
		case 49:
		printf("Ktora wersja?\n");
		printf("ver1 - {1}\nver2 - {2}\n:");
		char znak2;
		znak2 = getchar();
		getchar();
		if (znak2 == '1') {
		zad49();
		} else if (znak2 == '2') {
		zad49_5();
		}
		break;
		case 50:
		zad50();
		break;
		case 51:
		zad51();
		break;
		case 52:
		zad52();
		break;
		case 53:
		zad53();
		break;
		case 54:
		zad54();
		break;
		case 55:
		zad55();
		break;
		case 56:
		zad56();
		break;
		case 57:
		zad57();
		break;
		case 58:
		zad58();
		break;
		case 59:
		zad59();
		break;
		case 60:
		zad60();
		break;
		case 61:
		zad61();
		break;
		case 62:
		zad62();
		break;
		case 63:
		zad63();
		break;
		case 64:
		zad64();
		break;
		case 65:
		zad65();
		break;
		case 66:
		zad63();
		break;
		case 67:
		zad67();
		break;
		case 68:
		zad68();
		break;
		case 69:
		zad69();
		break;
		case 70:
		zad70();
		break;
		case 71:
		zad71();
		break;
		case 72:
		zad72();
		break;
		case 73:
		zad73();
		break;
		case 74:
		zad74();
		break;
		case 75:
		zad75();
		break;
		case 76:
		zad76();
		break;
		case 77:
		zad77();
		break;
		case 78:
		zad78();
		break;
		case 79:
		zad79();
		break;
		case 80:
		zad80();
		break;
		case 81:
		zad81();
		break;
		case 82:
		zad82();
		break;
		case 83:
		zad83();
		break;
		case 84:
		zad84();
		break;
		case 85:
		zad85();
		break;
		case 86:
		zad86();
		break;
		case 87:
		zad87();
		break;
		case 88:
		zad88();
		break;
		case 89:
		zad89();
		break;
		case 90:
		zad90();
		break;
		case 91:
		zad91();
		break;
		case 92:
		zad92();
		break;
		case 93:
		zad93();
		break;
		case 94:
		zad94();
		break;
		case 95:
		zad95();
		break;
		case 96:
		zad96();
		break;
		case 97:
		zad97();
		break;
		case 98:
		zad98();
		break;
		case 99:
		zad99();
		break;
		case 100:
		zad100();
		break;
		case 101:
		zad101();
		break;
		/*
		zadania dodatkowe
		funkcje
		*/
		case 102:
		zad102();
		break;
		case 103:
		zad103();
		break;
		case 104:
		zad104();
		break;
		case 105:
		zad105();
		break;
		case 106:
		zad106();
		break;
		case 107:
		zad107();
		break;
		case 108:
		zad108();
		break;
		case 109:
		zad109();
		break;
		case 110:
		zad110();
		break;
		case 111:
		zad111();
		break;
		case 112:
		zad112();
		break;
		case 113:
		zad113();
		break;
		case 114:
		zad114();
		break;
		case 115:
		zad115();
		break;
		case 116:
		zad116();
		break;
		case 117:
		zad117();
		break;
		case 118:
		zad118();
		break;
		case 119:
		zad119();
		break;
		case 120:
		zad120();
		break;
		case 121:
		zad121();
		break;
		case 122:
		zad122();
		break;
		case 123:
		zad123();
		break;
		case 124:
		zad124();
		break;
		case 125:
		zad125();
		break;
		case 126:
		zad126();
		break;
		case 127:
		zad127();
		break;
		case 128:
		zad128();
		break;
		case 129:
		zad129();
		break;
		case 130:
		zad130();
		break;
		case 131:
		zad131();
		break;
		case 132:
		zad132();
		break;
		case 133:
		zad133();
		break;
		case 134:
		zad134();
		break;
		case 135:
		zad135();
		break;
		case 136:
		zad136();
		break;
		case 137:
		zad137();
		break;
		case 138:
		zad138();
		break;
		case 139:
		zad139();
		break;
		case 140:
		zad140();
		break;
		case 141:
		zad141();
		break;
		case 142:
		zad142();
		break;
		case 143:
		zad143();
		break;
		case 144:
		zad144();
		break;
		case 145:
		zad145();
		break;
		case 146:
		zad146();
		break;
	}
	}
  return 0;
}

