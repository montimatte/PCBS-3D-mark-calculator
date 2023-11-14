#include <iostream>
using namespace std;

void mark();
void cpu();
void gpu();

void main() {
	int cho;
	cout << "1) calculate 3D MARK score\n\r";
	cout << "2) calculate CPU score\n\r";
	cout << "3) calculate GPU MARK score\n\r";
	cin >> cho;

	system("cls");

	switch (cho)
	{
	case 1:
		mark();
		break;

	case 2:
		cpu();
		break;

	case 3:
		gpu();
		break;

	default:
		break;
	}

	system("pause");
}

void mark() {
	int c;
	int g;
	int gs;
	int cs;
	int mark;

	cout << "CPU score: ";
	cin >> c;

	cout << "GPU score: ";
	cin >> g;

	gs = 0.15 * g;
	cs = 0.85 * c;

	mark = g * c / (gs + cs);

	cout << endl;
	cout << "3D mark: " << mark << endl;
}

void cpu() {
	int t;
	int g;
	int gts;
	int ts;
	int c;

	cout << "3D score: ";
	cin >> t;

	cout << "GPU score: ";
	cin >> g;

	gts = 0.15 * g * t;
	ts = 0.85 * t;

	c = gts / (g - ts);

	cout << endl;
	cout << "CPU score: " << c << endl;
}

void gpu() {
	int t;
	int c;
	int cts;
	int ts;
	int g;

	cout << "3D score: ";
	cin >> t;

	cout << "CPU score: ";
	cin >> c;

	cts = 0.85 * c * t;
	ts = 0.15 * t;

	g = cts / (c - ts);

	cout << endl;
	cout << "GPU score: " << g << endl;
}