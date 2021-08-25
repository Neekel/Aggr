#include <iostream>
using namespace std;

class Point {

	int X;
	int Y;
public:

	Point() {
		X = Y = 0;
	}

	void SetPoint(int iX, int iY) {
		X = iX;
		Y = iY;
	}

	void Show() {
		cout << X << "\t" << Y << "\n\n";
	}
};

class Figura {

	Point* obj;
	int count;
	int color;

public:

	Figura() {
		count = color = 0;
		obj = NULL;
	}

	void CreateFigura(int cr, int ct) {

		if (ct < 3) exit(0);

		count = ct;
		color = cr;

		obj = new Point[count];
		if (!obj) exit(0);

		int tempX, tempY;
		for (int i = 0; i < count; i++) {
			cout << "Set X\n";
			cin >> tempX;
			cout << "Set Y\n";
			cin >> tempY;
			obj[i].SetPoint(tempX, tempY);
		}
	}

	void ShowFigura() {
		cout << "----------------------------\n\n";
		cout << "Color" << color << "\n\nPoints — "<< count <<"\n\n";
			for (int i = 0; i < count; i++) {
				obj[i].Show();
			}
	}

	~Figura() {
		if (obj != NULL) delete[]obj;
	}
};

class Risunok  {

	Figura* obj1;
	int count;
	int color;
public:
	Risunok() {
		count = color = 0;
		obj1 == NULL;;
	}

	void CreateRisunok(int cr, int ct) {

		if (ct < 3) exit(0);

		count = ct;
		color = cr;

		obj1 = new Figura[count];
		if (!obj1) exit(0);

		/*int tempX, tempY;
		for (int i = 0; i < count; i++) {
			cout << "Set X\n";
			cin >> tempX;
			cout << "Set Y\n";
			cin >> tempY;
			obj1.SetPoint(tempX, tempY);
		}*/
	}

	void ShowRisunok() {
		cout << "----------------------------\n\n";
		cout << "Color" << color << "\n\nPoints — " << count << "\n\n";
		for (int i = 0; i < count; i++) {
			obj1[i].ShowFigura();
		}
	}

	~Risunok() {
		
	}
};

void main() {
	//Figura f;
	//f.CreateFigura(255, 3);
	//f.ShowFigura();
	Risunok A;

	A.CreateRisunok(255, 3);
	A.ShowRisunok();

}