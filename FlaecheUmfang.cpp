#include<iostream>
#include<math.h>

int eingabe();
int berechnung(char);
int ausgabe(float, bool);

int main(){
	std::cout << "Koerperberechnung" << std::endl << "Waehlen Sie die entsprechende Koerperform aus:" << std::endl << "a) Quadrat" << std::endl << "b) Rechteck" << std::endl << "c) Kreis" << std::endl << "Ihre Wahl: ";
	char w = eingabe();
	std::cout << "Geben Sie den entsprechenden Wert in cm ein!" << std::endl;
	berechnung(w);
	system("Pause");
	return 0;
}

int eingabe(){
	char w;
	std::cin >> w;
	if (w != 'a' && w != 'b' && w != 'c')
		return eingabe();
	else
		return w;
}

int berechnung(char w){
	float a, b, f, u;
	bool tf = false;
	if(w == 'a'){
		std::cout << "Seitenlaenge: "; 
		std::cin >> a;
		f = a * a;
		ausgabe(f, tf);
		u = a + a + a + a;
		tf = true;
		ausgabe(u, tf);
    }else if(w == 'b'){
		std::cout << "Laenge: ";
		std::cin >> a;
		std::cout << "Breite: ";
		std::cin >> b;
		f = a * b;
		ausgabe(f, tf);
		u = 2 * a + 2 * b;
		tf = true;
		ausgabe(u, tf);
	}else{
		std::cout << "Radius: ";
		std::cin >> a;
		f = a * a * M_PI;
		ausgabe(f, tf);
		u = 2 * M_PI * a;
		tf = true;
		ausgabe(u, tf);
	}
	return 0;
}

int ausgabe(float fu, bool tf){
	if (tf == false)
		std::cout << "Flaecheninhalt: " << fu << " cm ^ 2" << std::endl;
	else
		std::cout << "Umfang: " << fu << " cm" << std::endl;
	return 0;
}
