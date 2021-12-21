#define _USE_MATH_DEFINES

#include <iostream> 
#include <math.h>
#include <ctime>	//not used but if we want to use random...
#include <fstream>  //file streams
#include <string>	//for getline
#include <sstream>  //string streams
#include <vector>	//for push_back to array
#include <map>


/*=============================================================================
 | FUNC:                                                                      |
 |  main               -   interface looped for entering tasks                |
 |                                                                            |
 |  hw1                -   interface for 1st homework                         |
 |      sayName        -   task that prints your name                         |
 |      arithmethics   -   task for simple math actions with 2 int            |
 |      linearEquation -   task for find x from linear equation               |
 |      squareEquation -   task for solving a square equation                 |
 |      lampAndCurtain -   task for logical decide is it dark in room         |
 |  hw2                -   interface for 2nd homework                         |
 |      cone	       -   task for find S and V of cone                      |
 |      tree	       -   task for calc one or another function by value     |
 |      function       -   task for calc function if it exists on that value  |
 |      order	       -   task for print next 10 int after valuse            |
 |      tabbing        -   task for tabulating function by step 0.5           |
 |  hw3                -   interface for 3rd homework                         |
 |      credit         -   task for calculate month payment for credit        |
 |      percent        -   task for calculate percent of credit               |
 |      print          -   task for print file (source code)                  |
 |      regex          -   task for find numbers in file (source code)        |
 |      sortLetters    -   task for sort all symbols in file (source code)    |
 |  hw4	               -   interface for 4th homework                         |
 |      sumFile        -   task for get sum of alol numbers from file         |
 |      sign           -   task for return sign of input num                  |
 |      area           -   task for get area square, triangle, circle         |
 |      flag           -   task for print American flag                       |
 |      sinus          -   task for print graph of sin(x)                     |
 |      romeNumbers    -   task for translate rome numbers into arabic        |
 |      lcg            -   task for LCG Pseudo RNG                            |
 |      matrixMult     -   task for multiplying matrix                        |
 |      notation       -   task for translate number into different notation  |
 |  hw5                -   interface for 5th homework                         |
 |      euclid		   -   task for get greatest common divisor               |
 |      eratosphene    -   task for get all simple number to N                |
 |      text8		   -   task for ASCII codes of text file                  |
 |      text19		   -   task for search the most repeatable char           |
 |      rows13		   -   task for find all numbers with sum of digits = m   |
 |      rows28		   -   task for find sum of all digits                    |
 |      file6		   -   task for (nod, nok), and all simples to file       |
 |  balls              -   task about balls                                   |
 |  spinners           -   interface for spinners tasks                       |
 |      spinner1       -   task for count max creatable spinners              |
 |      spinner2       -   task for count spinners with 3-4 leafs             |
 |      notSpinner     -   task for count variety of small rectangles         |
 |      spinnerTrain   -   task for count free space in train                 |
 |      spinnerCinema  -   task for count free space between students         |
 |                                                                            |
 |----------------------------------------------------------------------------|
 |                                                                            |
 |  ignore             -   for clear input                                    |
 |  cls                -   short system("cls")                                |
 |  pause              -   short system("pause")                              |
 =============================================================================*/

using namespace std;


void cls();
void pause();
void clear();


void hw1();

void sayName();
void arithmethics();
void linearEquation();
void squareEquation();
void lampAndCurtain();

void hw2();

void cone();
void tree();
void function();
void order();
void tabbing();

void hw3();

void credit();
void percent();
void print();
void regex();
void sortLetters();

void hw4();

void sumFile();
void sign();
void area();
void flag();
void sinus();
void romeNumbers();
void lcg();
void matrixMult();
void notation();

void hw5();

void euclid();
void eratosthenes();
void text8();
void text19();
void rows13();
void rows28();
void file6();

void balls();

void spinners();

void spinner1();
void spinner2();
void notSpinner();
void spinnerTrain();
void spinnerCinema();


void test()
{
	cout << "Welcome alpha test module\n";

}


int main()
{
	setlocale(0, "");
	bool q = false;
	int choice;
	while (!q)
	{
		cout << "This is Gaydenko's homework programming tasks\nChoose homework to check:\n"
			<< "1. Simple data Handlers (complete)\n"
			<< "2. Math calculations (complete)\n"
			<< "3. File and math processing (complete)\n"
			<< "4. Files, Drawing and Math again(complete)\n"
			<< "5. File and math processing (complete)\n"
			<< "6. Task \"B.A.L.L.S.\"\n"
			<< "7. Task \"S.P.I.N.N.E.R.S.\"\n"
			<< "0. Quit\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case -1:
		{
			cls();
			cout << "Enter test module\n";
			test();
			break;
		}
		case 0:
		{
			q = true;
			cout << "Have a nice day! Bye!\n";
			break;
		}
		case 1:
		{
			cls();
			hw1();
			cls();
			break;
		}
		case 2:
		{
			cls();
			hw2();
			cls();
			break;
		}
		case 3:
		{
			cls();
			hw3();
			cls();
			break;
		}
		case 4:
		{
			cls();
			hw4();
			cls();
			break;
		}
		case 5:
		{
			cls();
			hw5();
			cls();
			break;
		}
		case 6:
		{
			cls();
			balls();
			cls();
			break;
		}
		case 7:
		{
			cls();
			spinners();
			cls();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void cls()
{
	system("cls");
}

void pause()
{
	system("pause");
}

void clear()
{
	cin.clear();
	cin.ignore(INT_MAX, '\n');
}


void hw1()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 1st  homework programming tasks\nChoose task to check:\n"
			<< "1. Say my name\n"
			<< "2. Maths\n"
			<< "3. Linear equation\n"
			<< "4. Square equation\n"
			<< "5. Lamp and curtain\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			sayName();
			break;
		}
		case 2:
		{
			cls();
			arithmethics();
			break;
		}
		case 3:
		{
			cls();
			linearEquation();
			break;
		}
		case 4:
		{
			cls();
			squareEquation();
			break;
		}
		case 5:
		{
			cls();
			lampAndCurtain();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void sayName()
{
	cout << "This is " << __func__ << " module\n";

	string name;

	cout << "Say your name\n> ";
	cin >> name;
	clear();

	cout << "Your name is " << name << "? Good\n";

	pause();
	cls();
}

void arithmethics()
{
	cout << "This is " << __func__ << " module\n";

	int a, b;

	cout << "Enter a\n> ";
	cin >> a;
	clear();

	cout << "Enter b\n> ";
	cin >> b;
	clear();

	cout << "Sum of " << a << " and " << b << " is " << a + b << "\n";
	cout << "Sub of " << a << " and " << b << " is " << a - b << "\n";
	cout << "Mul of " << a << " and " << b << " is " << a * b << "\n";
	if (a / b > 0 && a % b == 0)
		cout << "Div of " << a << " and " << b << " is " << a / b << "\n";
	else
		cout << "Div of " << a << " and " << b << " is not possible\n";

	pause();
	cls();
}

void linearEquation()
{
	cout << "This is " << __func__ << " module\n";

	float b, c, res;

	cout << "Enter b\n> ";
	cin >> b;
	clear();

	cout << "Enter c\n> ";
	cin >> c;
	clear();

	cout << "Equation is " << b << "x + " << c << " = 0\n";
	if (b == 0)
		cout << "Answer is: C";
	else
	{
		res = (0 - c) / b;
		cout << "Answer is " << res << "\n";
	}

	pause();
	cls();
}

void squareEquation()
{
	cout << "This is " << __func__ << " module\n";

	int a, b, c;

	cout << "Enter a\n> ";
	cin >> a;
	clear();
	if (a == 0)
	{
		cout << "not a sqr";
		return;
	}

	cout << "Enter b\n> ";
	cin >> b;
	clear();
	cout << "Enter c\n> ";
	cin >> c;
	clear();

	int D = (b * b) - (4 * a * c);
	cout << "D is " << D << "\n";

	if (D > 0)
		cout << "x1 is " << (-b + sqrt(D)) / a << "\nx2 is " << (-b - sqrt(D)) / a << "\n";
	else
		if (D == 0)
			cout << "x is " << (-b + sqrt(D)) / a << "\n";
		else
			cout << "No solutions\n";

	pause();
	cls();
}

void lampAndCurtain()
{
	cout << "This is " << __func__ << " module\n";

	bool day, lamp, curtain;
	char answer;

	cout << "Day?[y/n]\n> ";
	cin >> answer;
	clear();
	day = answer == 'y';

	cout << "Curtain open?[y/n]\n> ";
	cin >> answer;
	clear();
	curtain = answer == 'y';

	cout << "Lamp is on?[y/n]\n> ";
	cin >> answer;
	clear();
	lamp = answer == 'y';

	if (lamp || (day && curtain))
		cout << "Now is light\n";
	else
		cout << "Now is dark\n";

	pause();
	cls();

}


void hw2()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 2nd  homework programming tasks\nChoose task to check:\n"
			<< "1. Cone\n"
			<< "2. Tree\n"
			<< "3. Function\n"
			<< "4. Order\n"
			<< "5. Tabbing\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			cone();
			break;
		}
		case 2:
		{
			cls();
			tree();
			break;
		}
		case 3:
		{
			cls();
			function();
			break;
		}
		case 4:
		{
			cls();
			order();
			break;
		}
		case 5:
		{
			cls();
			tabbing();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void cone()
{
	cout << "This is " << __func__ << " module\n";

	double V, S, R, r, l, h;

	cout << "Enter h\n> ";
	cin >> h;
	clear();
	
	cout << "Enter R\n> ";
	cin >> R;
	clear();
	
	cout << "Enter r\n> ";
	cin >> r;
	clear();
	
	l = sqrt(h * h + pow((R - r), 2));
	
	if ((R != r) and (R > 0 and r > 0 and h > 0 and l > 0))
	{
		S = M_PI * (R * R + (R + r) * l + r * r);
		cout << "S = " << S << "\n";
		V = float(1 / 3) * M_PI * h * (R * R + R * r + r * r);
		cout << "V = " << V << "\n";
	}
	else
		cout << "Wrong data provided\n";

	pause();
	cls();
}

void tree()
{
	cout << "This is " << __func__ << " module\n";

	float w, a, x;
	int i;

	cout << "Enter a\n> ";
	cin >> a;
	clear();
	
	cout << "Enter x\n> ";
	cin >> x;
	clear();
	
	w = 0;
	
	if ((abs(x) < 1) and (x != 0))
		cout << "\n" << "w = " << (w = a * log(abs(x))) << "\n";
	else
		if ((abs(x) >= 1) and (a >= x * x))
			cout << "\n" << "w = " << (w = sqrt(a - x * x)) << "\n";
		else
			cout << "Doesn't exists\n";

	pause();
	cls();
}

void function()
{
	cout << "This is " << __func__ << " module\n";

	float z, b, y, x;

	cout << "z = ln(b-y) * sqrt(b-x)\n";

	cout << "Enter x\n> ";
	cin >> x;
	clear();

	cout << "Enter y\n> ";
	cin >> y;
	clear();

	cout << "Enter b\n> ";
	cin >> b;
	clear();

	if ((b - y > 0) and (b - x >= 0))
		cout << "z = " << log(b - y) * sqrt(b - x) << "\n";
	else
		cout << "Doesn't exists\n";

	pause();
	cls();
}

void order()
{
	cout << "This is " << __func__ << " module\n";

	int n;

	cout << "Enter n\n> ";
	cin >> n;
	clear();
	if (n < 0) n = 0;

	for (int i = 0; i < n+10; i++)
		cout << n + i << " ";
	cout << "\n";

	pause();
	cls();
}

void tabbing()
{
	cout << "This is " << __func__ << " module\n";

	float y;

	for (float x = -4.f; x < 4.f; x += 0.5)
	{
		if (x == 1)
		{
			y = 0;
			cout << "Doesn't exist\n";
		}
		else
		{
			y = (x * x - 2 * x + 2) / (x - 1);
			cout << "x = \t" << x << "\t y = " << y << "\n";
		}
	}

	pause();
	cls();
}


void hw3()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 3rd homework programming tasks\nChoose task to check:\n"
			<< "1. Credit Payment\n"
			<< "2. Percent Of Credit\n"
			<< "3. Print Me!\n"
			<< "4. Number Regex\n"
			<< "5. Letter Sorting\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			credit();
			break;
		}
		case 2:
		{
			cls();
			percent();
			break;
		}
		case 3:
		{
			cls();
			print();
			break;
		}
		case 4:
		{
			cls();
			regex();
			break;
		}
		case 5:
		{
			cls();
			sortLetters();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void credit()
{
	cout << "This is " << __func__ << " module\n";

	float m; //month pay
	float s; //summ of credit
	float r; // percentage
	float p; // percent
	int n; //years

	cout << "Enter sum of credit S\n> ";
	cin >> s;
	clear();

	do
	{
		cout << "Enter percent p\n> ";
		cin >> p;
		clear();
		if (p == 0)
		{
			cout << "Error! Percent can't be 0!!!\n";
			pause();
		}
	} while (p == 0);

	do
	{
		cout << "Enter years of credit n\n> ";
		cin >> n;
		clear();
		if (n <= 0)
		{
			cout << "Error! Years can't be 0!!!\n";
			pause();
		}
	} while (n <= 0);

	r = (p / 100);

	m = s * r * pow(r + 1, n) / (12 * (pow(r + 1, n) - 1));

	cout << "Your month pay is " << m << "\n\n";

	pause();
	cls();
}

void percent()
{
	cout << "This is " << __func__ << " module\n";

	bool found = false;
	float m; //month pay
	float mTmp1; // temporary month pay
	float s; //summ of credit
	float r; // percentage
	float p; // percent
	int n; //years

	cout << "Enter sum of credit S\n> ";
	cin >> s;
	clear();

	do
	{
		cout << "Enter month payment m\n> ";
		cin >> m;
		clear();
		if (m <= 0)
		{
			cout << "Error! Payment can't be 0!!!\n";
			pause();
		}
	} while (m <= 0);

	do
	{
		cout << "Enter years of credit n\n> ";
		cin >> n;
		clear();
		if (n <= 0)
		{
			cout << "Error! Years can't be 0!!!\n";
			pause();
		}
	} while (n <= 0);

	for (p = 0.01; p < 100; p += 0.01)
	{
		r = (p / 100);

		mTmp1 = s * r * pow(r + 1, n) / (12 * (pow(r + 1, n) - 1));

		if (abs(mTmp1 - m) <= 0.01)
		{
			found = true;
			break;
		}
	}

	if (found)
		cout << "Your percent is " << p << "%\n";
	else
		cout << "Percent is not in (0,100)%\n";

	pause();
	cls();
}

void print()
{
	cout << "This is " << __func__ << " module\n";
	string path = __FILE__;
	string line;
	ifstream file(path);
	if (file.is_open())
	{
		while (getline(file, line))
			cout << line << "\n";
		file.close();
	}
	else cout << "No such file at\n  " << path << "\n";

	pause();
	cls();
}

void regex()
{
	cout << "This is " << __func__ << " module\n";

	string path = __FILE__;
	string line;
	ifstream file(path);
	if (file.is_open())
	{
		while (getline(file, line))
		{
			stringstream ss;
			string temp;
			int found;

			ss << line; //get line into stream
			while (!ss.eof()) {
				ss >> temp; //get word from stream (splits by spaces)
				if (stringstream(temp) >> found) // true if got int
					cout << found << " ";
				temp = "";
			}
		}
		file.close();
		cout << "\n";
	}
	else 
		cout << "No such file at\n  " << path << "\n";

	pause();
	cls();
}

void sortLetters()
{
	cout << "This is " << __func__ << " module\n";

	bool sorted;
	string path = __FILE__;
	string text;
	ifstream file(path);
	if (file.is_open())
	{
		text = string(istreambuf_iterator<char>(file), istreambuf_iterator<char>()); //get all file into string
		file.close();
	}
	else 
		cout << "No such file at\n  " << path << "\n";

	cout << "Sorting text of source code, please wait . . .\n";
	do
	{
		sorted = true;
		for (int i = 0; i < text.length() - 1; i++)
		{
			char temp;
			if (text[i] > text[i + 1])
			{
				sorted = false;
				swap(text[i], text[i + 1]);
			}
		}
	} while (!sorted);

	cout << text << "\n";

	pause();
	cls();
}


void hw4()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 4th  homework programming tasks\nChoose task to check:\n"
			<< "1. Sum From File\n"
			<< "2. Sign Of Number\n"
			<< "3. Area Of Figures\n"
			<< "4. American Flag\n"
			<< "5. Y = Sin(X)\n"
			<< "6. Roman into Arabic\n"
			<< "7. LCG Psudo-RandomNumberGenerator\n"
			<< "8. Matrix Multiply\n"
			<< "9. Notation Translate\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			sumFile();
			break;
		}
		case 2:
		{
			cls();
			sign();
			break;
		}
		case 3:
		{
			cls();
			area();
			break;
		}
		case 4:
		{
			cls();
			flag();
			break;
		}
		case 5:
		{
			cls();
			sinus();
			break;
		}
		case 6:
		{
			cls();
			romeNumbers();
			break;
		}
		case 7:
		{
			cls();
			lcg();
			break;
		}
		case 8:
		{
			cls();
			matrixMult();
			break;
		}
		case 9:
		{
			cls();
			notation();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void sumFile()
{
	cout << "This is " << __func__ << " module\n";

	//Because we need to create file, we will use vector to write all numbers into file
	vector <int> nums;
	string path = __FILE__;
	ifstream file(path);
	string line;
	string directory;

	int sum = 0;

	const size_t last_slash_idx = path.rfind('\\');
	if (std::string::npos != last_slash_idx)
	{
		directory = path.substr(0, last_slash_idx);
	}
	if (directory.empty())
	{
		cout << "Error! No path at\n\t" << path << "\n";
		pause();
		return;
	}


	if (file.is_open())
	{
		while (getline(file, line))
		{
			stringstream ss;
			string temp;
			int found;

			ss << line;
			while (!ss.eof()) {
				ss >> temp;
				if (stringstream(temp) >> found)
					nums.push_back(found);
				temp = "";
			}
		}
		file.close();
	}

	path = directory + "\\test.txt";

	fstream text(path);

	//create if not exists
	text.open(path, ios::out);

	//write
	if (text.is_open())
		for (int i = 0; i < nums.size(); i++)
			text << nums[i] << ' ';
	else
		cout << "No such file at\n  " << path << "\n";
	text.close();

	//read 

	text.open(path, ios::in);
	if (text.is_open())
	{
		int num;
		while (text >> num)
		{
			sum += num;
		}

		file.close();
	}
	else
		cout << "No such file at\n  " << path << "\n";

	cout << "Sum of nums is " << sum << "\n";

	pause();
	cls();

}

void sign()
{
	cout << "This is " << __func__ << " module\n";

	int x;
	cout << "Enter your number\n> ";
	cin >> x;
	clear();
	if (x < 0) cout << "-1\n";
	else if (x > 0) cout << "1\n";
	else cout << "0\n";

	pause();
	cls();

}

void area()
{
	cout << "This is " << __func__ << " module\n";

	//By the way, we can use one overloaded function, the behavior of which is determined by counting the given values
	// 1 for circle, 2 for rectangle, 3 for triangle
	auto circle = [](int r)
	{
		return M_PI * pow(r, 2);
	};
	auto rectangle = [](float h, float w)
	{
		return h * w;
	};
	auto triangle = [](float a, float b, float c)
	{
		float p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	};

	float a, b, c;

	bool quitArea = false;
	int choice;
	while (!quitArea)
	{
		cout << "Choose a figure to find area:\n"
			<< "1. Rectangle\n"
			<< "2. Triangle\n"
			<< "3. Circle\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitArea = true;
			cls();
			return;
		}
		case 1:
		{
			do
			{
				cls();
				cout << "Enter width w\n> ";
				cin >> a;
				clear();
				if (a <= 0)
				{
					cout << "Error! Width must be greater than 0!\n";
					pause();
				}
			} while (a <= 0);
			do
			{
				cls();
				cout << "Enter height h\n> ";
				cin >> b;
				clear();
				if (b <= 0)
				{
					cout << "Error! Height must be greater than 0!\n";
					pause();
				}
			} while (b <= 0);

			cout << "Area of rectangle " << a << " x " << b << " is " << rectangle(a, b) << "\n";

			break;
		}
		case 2:
		{
			do
			{
				cls();
				cout << "Enter side a\n> ";
				cin >> a;
				clear();
				if (a <= 0)
				{
					cout << "Error! Side must be greater than 0!\n";
					pause();
				}
			} while (a <= 0);
			do
			{
				cls();
				cout << "Enter side b\n> ";
				cin >> b;
				clear();
				if (b <= 0)
				{
					cout << "Error! Side must be greater than 0!\n";
					pause();
				}
			} while (b <= 0);
			do
			{
				cls();
				cout << "Enter side c\n> ";
				cin >> c;
				clear();
				if (c <= 0)
				{
					cout << "Error! Side must be greater than 0!\n";
					pause();
				}
			} while (c <= 0);

			if (a + b > c && a + c > b && b + c > a)
				cout << "Area of triange with sides " << a << ", " << b << ", " << c << " is " << triangle(a, b, c) << "\n";
			else
				cout << "Error! Not existing triangle\n";


			break;
		}
		case 3:
		{
			do
			{
				cls();
				cout << "Enter radius r\n> ";
				cin >> c;
				clear();
				if (c <= 0)
				{
					cout << "Error! Radius must be greater than 0!\n";
					pause();
				}
			} while (c <= 0);

			cout << "Area of circle with radius " << c << " is " << circle(c) << "\n";

			break;
		}
		default:
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}

		pause();
		cls();
	}
	cls();
}

void flag()
{
	cout << "This is " << __func__ << " module\n";

	auto underline = [](int i, char c)
	{
		for (int j = 0; j < i; j++)
			cout << c;
		cout << '\n';
	};

	auto star = []()
	{
		for (int j = 0; j < 8; j++)
			cout << " * ";
	};

	int k = 0;
	for (int j = 0; j < 6; j++)
	{
		star();
		if (k % 2 == 0)
			underline(32, '0');
		else
			underline(32, ':');
		k++;
	}
	for (int j = 0; j < 7; j++)
	{
		if (k % 2 == 0)
			underline(56, '0');
		else
			underline(56, ':');
		k++;
	}

	pause();
	cls();
}

void sinus()
{
	cout << "This is " << __func__ << " module\n";

	vector <double> ySin;
	char sign = '*';
	double thickness = 0.08;
	double width = 10.0;
	double step = 0.25;

	// get values of sinus
	for (double i = -width; i <= width; i += step)
	{
		ySin.push_back(sin(i) / 2.0);
	}

	// drawing
	for (double plot = 1.0; plot >= -1.0; plot -= 0.05)
	{
		for (int i = 0; i < ySin.size(); i++)
		{
			if (plot == 0.0)
				cout << "-";
			else if (abs(plot - ySin[i]) >= thickness)
				cout << " ";
			else
				cout << sign;
		}
		cout << "\n";
	}

	pause();
	cls();

}

void romeNumbers()
{
	cout << "This is " << __func__ << " module\n";
	string a;

	cout << "Enter Romanian Number\n> ";
	cin >> a;
	clear();

	int j = a.length();
	a += "000"; // to work switches
	int NUMBER = 0;
	int x = 0, y = 0, z = 0, t = 0,
		kv = 0, kl = 0, kd = 0, // flag of repeating 5*
		k2 = 0, // flag to break
		k3 = 1001; // flag for going from higher to lower

	for (int i = 0; i < j; i++)
	{
		switch (a[i])
		{
		case 'I':case 'i': x = 1; break;
		case 'V':case 'v': x = 5; kv = kv + 1;  break;
		case 'X':case 'x': x = 10; break; // X
		case 'L':case 'l': x = 50; kl = kl + 1; break; // L
		case 'C':case 'c': x = 100; break; // C
		case 'D':case 'd': x = 500; kd = kd + 1; break; // D
		case 'M':case 'm': x = 1000; break; // M
		}

		switch (a[i + 1])
		{
		case '0': y = 0; break; // 0 
		case 'I':case 'i': y = 1; break; // I
		case 'V':case 'v': y = 5; break; // V
		case 'X':case 'x': y = 10; break; // X
		case 'L':case 'l': y = 50; break; // L
		case 'C':case 'c': y = 100; break; // C
		case 'D':case 'd': y = 500; break; // D
		case 'M':case 'm': y = 1000; break; // M
		}
		switch (a[i + 2])
		{
		case '0': z = 0; break; // 0 
		case 'I':case 'i': z = 1; break; // I
		case 'V':case 'v': z = 5; break; // V
		case 'X':case 'x': z = 10; break; // X
		case 'L':case 'l': z = 50; break; // L
		case 'C':case 'c': z = 100; break; // C
		case 'D':case 'd': z = 500; break; // D
		case 'M':case 'm': z = 1000; break; // M
		}
		switch (a[i + 3])
		{
		case '0': t = 0; break; // 0 
		case 'I':case 'i': t = 1; break; // I
		case 'V':case 'v': t = 5; break; // V
		case 'X':case 'x': t = 10; break; // X
		case 'L':case 'l': t = 50; break; // L
		case 'C':case 'c': t = 100; break; // C
		case 'D':case 'd': t = 500; break; // D
		case 'M':case 'm': t = 1000; break; // M
		}


		if (x < y) {
			NUMBER = NUMBER - x;
			k3 = x;
		}
		else if (y < k3) //next after substraction
			NUMBER = NUMBER + x;
		else // IXI, LCC
			k2 = k2 + 1;

		if (y - x == x)  // VX, LC
			k2 = k2 + 1;

		if ((x < z && y < z)
			or (kl > 1) or (kd > 1) or (kv > 1)
			or ((x == y) && (y == z) && (z == t) && (t == x)) // not IIII or XXXX
			or (k2 > 0)) {
			cout << "Error in number" << endl;
		}
	}

	/*
	char c, per;
	string s, ch;
	int new_value, old_value = 0, result = 0;

	cout << "Enter Romanian Number\n> ";
	cin >> s;

	for (int i = 0; i <= s.length(); i++)
	{
		new_value = decrypt(s[i]);
		// iv
		if (new_value < old_value)
		{
			result += old_value;
			old_value = new_value;
		}
		else if (new_value > old_value)
			// v
			if (old_value == 0)
				old_value = new_value;
		// vi
			else
			{
				result += new_value - old_value;
				old_value = 0;
			}
		// ii, xx, ...
		else if (new_value == old_value)
		{
			result += new_value + old_value;
			old_value = 0;
		}
	}
	*/
	cout << "Result is " << NUMBER << "\n";

	pause();
	cls();

}

int lcg_recursive(int i, int m, int c)
{
	// same as if(i>0) {return lcg(i-1)} else {return 0}
	return i > 0 ? (lcg_recursive(i - 1, m, c) * m + i) % c : 0;
}
void lcg()
{
	cout << "This is " << __func__ << " module\n";

	// I didn't found an easy solution to implement recursive lamda, so I made  classic int lcg(int i){}
	int i = 3, m = 37, c = 64; // 1st variant
	//int i = 13894, m = 25173, c = 65537; // 2nd variant
	int s = lcg_recursive(i, m, c);

	cout << "i is " << i << ", m is " << m << ", c is " << c << "\nResult is " << s << "\n";
	pause();
	cls();
}

void matrixMult()
{
	cout << "This is " << __func__ << " module\n";

	// I wrote matrxi multiplier, but this hasn't be as task
	/*
	const int size = 15;
	int wA, hA, wB, hB;
	int A[size][size], B[size][size], C[size][size];
	bool generate = false;

	// define matrix A, B, C
	for (int i = 0; i < size; i++)
		for (int j = 0; j < size; j++)
		{
			A[i][j] = 0;
			B[i][j] = 0;
			C[i][j] = 0;
		}

	// input params of matrix A
	do
	{
		cls();
		cout << "Enter columns of matrix A\n> ";
		cin >> wA;
		clear();
		if (wA <= 0)
		{
			cout << "Error! Side must be greater than 0!\n";
			pause();
		}
	} while (wA <= 0);

	do
	{
		cls();
		cout << "Enter rows of matrix A\n> ";
		cin >> hA;
		clear();
		if (hA <= 0)
		{
			cout << "Error! Side must be greater than 0!\n";
			pause();
		}
	} while (hA <= 0);

	// Generating matrix A
	if (generate)
	{
		cls();
		srand(time(0));
		//Generate
		for (int i = 0; i < hA; i++)
		{
			for (int j = 0; j < wA; j++)
			{
				A[i][j] = rand() % 10;
				cout << A[i][j] << ' ';
			}
			cout << "\n";
		}
	}
	else
	{
		for (int i = 0; i < hA; i++)
		{
			cls();
			cout << "Enter " << i << " row\n";
			for (int j = 0; j < wA; j++)
			{
				cin >> A[i][j];
				clear();
			}
		}
		for (int i = 0; i < hA; i++)
		{
			for (int j = 0; j < wA; j++)
			{
				cout << A[i][j] << ' ';
			}
			cout << "\n";
		}
	}

	pause();
	cls();

	// input params of matrix B
	do
	{
		cls();
		cout << "Enter columns of matrix B\n> ";
		cin >> wB;
		clear();
		if (wB <= 0)
		{
			cout << "Error! Side must be greater than 0!\n";
			pause();
		}
	} while (wB <= 0);

	// Just to cleaner understand
	hB = wA;

	// Generating matrix B
	if (generate)
	{
		srand(time(0));
		//Generate
		for (int i = 0; i < hB; i++)
		{
			for (int j = 0; j < wB; j++)
			{
				B[i][j] = rand() % 10;
				cout << B[i][j] << ' ';
			}
			cout << "\n";
		}
	}
	else
	{
		for (int i = 0; i < hB; i++)
		{
			cls();
			cout << "Enter " << i << " row\n";
			for (int j = 0; j < wB; j++)
			{
				cin >> B[i][j];
				clear();
			}
		}
		cls();
		for (int i = 0; i < hB; i++)
		{
			for (int j = 0; j < wB; j++)
			{
				cout << B[i][j] << ' ';
			}
			cout << "\n";
		}
	}

	pause();
	cls();

	// calculations
	for (int k = 0; k < wB; k++)
	{
		// columns B
		for (int i = 0; i < hA; i++)
		{
			// rows A
			for (int j = 0; j < wA; j++)
			{
				// cells A * B
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}

	// output
	for (int i = 0; i < hA; i++)
	{
		for (int j = 0; j < wB; j++)
		{
			cout << C[i][j] << ' ';
		}
		cout << "\n";
	}
	*/

	double A[3][4], B[4][2], C[3][2];

	int indMin, indMax;
	double max, min, sumK, sumD;
	max = -1;
	min = -1;
	indMin = -1;
	indMax = -1;
	sumD = 0;

	// Input matrix A
	cout << "Enter the first matrix\n";
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter " << i << " row\n";
		for (int j = 0; j < 4; j++)
		{
			cin >> A[i][j];
			clear();
		}
		cls();
	}

	// Input matrix B
	cout << "Enter the second matrix\n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Enter " << i << " row\n";
		for (int j = 0; j < 2; j++)
		{
			cin >> B[i][j];
			clear();
		}
		cls();
	}

	// Init matrix C (because we can't null + int)
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			C[i][j] = 0;

	// Calculating
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			for (int k = 0; k < 4; k++)
				C[i][j] = C[i][j] + A[i][k] * B[k][j];

	// Calculating money
	for (int j = 0; j < 3; j++)
	{
		sumD += C[j][0];
		if (C[j][0] > max)
		{
			max = C[j][0];
			indMax = j;
		}

		if ((C[j][0] < min) || (min == -1))
		{
			min = C[j][0];
			indMin = j;
		}
	}
	cout << "Max money get seller " << indMax + 1 << "\nMin money get the seller" << indMin + 1 << "\n\n";


	max = -1;
	min = -1;
	indMin = -1;
	indMax = -1;
	sumK = 0;

	// Calculating comissions
	for (int j = 0; j < 3; j++)
	{

		sumK += C[j][1];

		if (C[j][1] > max)
		{
			max = C[j][1];
			indMax = j;
		}

		if ((C[j][1] < min) || (min == -1))
		{
			min = C[j][1];
			indMin = j;
		}
	}

	cout << "Max Comissions get the seller " << indMax + 1 << "\n"
		<< "Min Comission get the seller " << indMin + 1 << "\n"
		<< "Overall sum of money << " << sumD << "\n"
		<< "Overall Comissions " << sumK << "\n"
		<< "All money is " << sumD + sumK << "\n";

	pause();
	cls();
}

void notation()
{
	cout << "This is " << __func__ << " module\n";

	int base;
	int symbol;
	string baseNum;
	int num10 = 0;
	vector<int> num;

	bool error = false;
	do
	{
		error = false;
		do
		{
			cout << "Enter base of number\n> ";
			cin >> base;
			clear();
			if (base == 0 || base > 36 || base < -36)
			{
				cout << "Error! Incorrect base!\n";
				pause();
			}
		} while (base == 0 || base > 36 || base < -36);

		cout << "Enter your number\n> ";
		cin >> baseNum;

		// parse and check input
		for (int i = 0; i < baseNum.size(); i++)
		{
			/*
			for (int i = 48; i <= 57; i++)
				cout << char(i) << ' ';
			//0 1 2 3 4 5 6 7 8 9
			cout << '\n';
			for (int i = 65; i <= 90; i++)
				cout << char(i) << ' ';
			//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
			cout << '\n';
			for (int i = 97; i <= 122; i++)
				cout << char(i) << ' ';
			//a b c d e f g h i j k l m n o p q r s t u v w x y z
			cout << '\n';
			*/
			symbol = int(baseNum[i]);
			symbol -= 48;		// get nums
			if (symbol > 10)	// if a-z
				symbol -= 7;

			if (symbol > 36)	// if A-Z
				symbol -= 32;

			//cout << "symbol is " << symbol << "\n";
			if (symbol < 0 || symbol >= abs(base))
			{
				cout << "Error! Number out of base notation\n";
				error = true;
				pause();
				cls();
				break;
			}
			else
				num.push_back(symbol);
		}
	} while (error);

	// translate number to base 10
	for (int i = 0; i < num.size(); i++)
		num10 += num[i] * pow(base, num.size() - i - 1);

	cls();

	cout << "In base 10 Number is " << num10 << "\n";
	pause();
	cls();

	/*
		To be correct, we can use negative or big numbers, but it will be more complicated
		Also we possible can use float base, but operation of % doesn't support floats
		By the way, translation from negative works properly,
		But for base greater than 35(0-Z) writes in decimal with [], so it would be better to use regex
	*/
	do
	{
		cout << "Enter target base of number\n> ";
		cin >> base;
		clear();
		//cout << "//base is " << base << "\n";
		if (base <= 0 || base > 36)
		{
			cout << "Error! Base is incorrect!!!\n";
			pause();
		}
	} while (base <= 0 || base > 36);


	// translate to target base
	baseNum = "";


	while (num10 != 0)
	{
		symbol = abs(num10 % abs(base));

		//cout << "num is " << num10 << "; % is " << symbol << "\n";		

		if (symbol >= 10)
			symbol += 55;
		else
			symbol += 48;
		/*
		if (abs(num10) < abs(base))
		{
			if (num10 > 10)
				baseNum = char(num10 + 55) + baseNum;
			else
				baseNum = char(num10 + 48) + baseNum;
		}
		*/
		baseNum = char(symbol) + baseNum;
		num10 /= base;
	}

	cout << "Number with base " << base << " is " << baseNum << "\n";

	pause();
	cls();

}


void hw5()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is 5th  homework programming tasks\nChoose task to check:\n"
			<< "1. Euclid's algorhytm\n"
			<< "2. Sieve of Eratosthenes\n"
			<< "3. Text prcossing (number 8)\n"
			<< "4. Text prcossing (number 19)\n"
			<< "5. Rows (number 13)\n"
			<< "6. Rows (number 28)\n"
			<< "7. File (number 6)\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			euclid();
			break;
		}
		case 2:
		{
			cls();
			eratosthenes();
			break;
		}
		case 3:
		{
			cls();
			text8();
			break;
		}
		case 4:
		{
			cls();
			text19();
			break;
		}
		case 5:
		{
			cls();
			rows13();
			break;
		}
		case 6:
		{
			cls();
			rows28();
			break;
		}
		case 7:
		{
			cls();
			file6();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void euclid()
{
	cout << "This is " << __func__ << " module\n";
	int a, b;
	int tmpA, tmpB; // just to use both algorhytms

	cout << "Enter first number\n> ";
	cin >> a;
	clear();
	// no input check because we need any number and we get any number or 0

	cout << "Enter second number\n> ";
	cin >> b;
	clear();
	// no input check because we need any number and we get any number or 0

	// division method
	tmpA = a;
	tmpB = b;
	while (tmpB) {
		tmpA %= tmpB;
		swap(tmpA, tmpB);
	}
	cout << "Result of division algorhytm is " << tmpA << "\n";

	// substraction method
	tmpA = a;
	tmpB = b;
	while (tmpA != tmpB)
	{
		tmpA > tmpB ? tmpA -= tmpB : tmpB -= tmpA;
	}
	cout << "Result of substraction algorhytm is " << tmpA << "\n";

	pause();
	cls();

}

void eratosthenes()
{
	cout << "This is " << __func__ << " module\n";

	int n;
	do
	{
		cout << "Enter size n\n> ";
		cin >> n;
		clear();
		if (n < 2)
		{
			cout << "Error! Size must be greater or equal 2!\n";
			pause();
			cls();
		}
		// technically, it can go further than 2**28, but below 2**29
		if (n > 268435456)
		{
			cout << "Error! Size is very big to calculate!\n";
			pause();
			cls();
		}
	} while (n < 2 || n > 268435456);

	int* a = new int[n + 1];
	for (int i = 0; i < n + 1; i++)
		a[i] = i;
	// getting sieve
	for (unsigned long int i = 2; i < n + 1; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << ' ';
			for (unsigned int j = i * i; j < n + 1; j += i)
				a[j] = 0;
		}
	}
	delete[] a;
	pause();
	cls();
}

void text8()
{
	// 8. Преобразование текста в цепочку ASCII-кодов.

	cout << "This is " << __func__ << " module\n";

	// Okay, it's will be MANY number, so okay, I will create file
	string path = __FILE__;
	string directory;

	fstream text(path);

	const size_t last_slash_idx = path.rfind('\\');
	if (std::string::npos != last_slash_idx)
	{
		directory = path.substr(0, last_slash_idx);
	}
	if (directory.empty())
	{
		cout << "Error! No path at\n\t" << path << "\n";
		pause();
		return;
	}

	path = directory + "\\example.txt";


	//create if not exists
	text.open(path, ios::out);

	//write
	if (text.is_open())
	{
		text << "1234567890qwertyuiop[]\nasdfghjkl;' zxcvbnm,./\n0123456789/*-+\n";
	}
	else
		cout << "No such file at\n  " << path << "\n";
	text.close();

	// reading
	cout << "Content of file:\n";
	text.open(path, ios::in);
	if (text.is_open())
	{
		while (!text.eof())
		{
			char c;
			text >> c;
			cout << c;
		}
		text.close();
	}
	else
		cout << "No such file at\n  " << path << "\n";

	cout << "\nCodes of characters:\n";

	text.open(path, ios::in);
	if (text.is_open())
	{
		while (!text.eof())
		{
			char c;
			text >> c;
			cout << int(c) << ' ';
		}

		text.close();
	}
	else
		cout << "No such file at\n  " << path << "\n";

	cout << '\n';

	pause();
	cls();
}

void text19()
{
	cout << "This is " << __func__ << " module\n";

	//19. Статистическая обработка текстового файла: поиск наиболее часто встречающегося символа

	map<char, int> rep;
	int max = 0;
	int maxVal;

	string path = __FILE__;
	string s;
	ifstream file(path);
	if (file.is_open())
	{
		while (getline(file, s))
		{
			// counting numbers
			for (int i = 0; i < s.length(); i++)
			{
				rep[s[i]] += 1;
			}
		}
		file.close();
	}
	else cout << "No such file at\n  " << path << "\n";

	/*
	* if we want to use another file
	string directory;
	const size_t last_slash_idx = path.rfind('\\');
	if (std::string::npos != last_slash_idx)
	{
		directory = path.substr(0, last_slash_idx);
	}
	if (directory.empty())
	{
		cout << "Error! No path at\n\t" << path << "\n";
		pause();
		return;
	}

	path = directory + "\\example.txt";
	*/

	// reading if it is not a source code
	if (path != __FILE__)
	{
		cout << "Content of file:\n";
		file.open(path, ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				char c;
				file >> c;
				cout << c;
			}
			file.close();
		}
		else
			cout << "No such file at\n  " << path << "\n";

	}

	// counting numbers
	for (int i = 0; i < s.length(); i++)
	{
		rep[s[i]] += 1;
	}

	for (int i = 0; i < rep.size(); i++)
	{
		if (rep[i] > max)
		{
			max = rep[i];
			maxVal = i;
		}
	}

	cout << "The first most repeatable chracter is " << char(maxVal) << "(" << maxVal << ") - repeated " << max << " times\n";

	/*
	* returning all counts
	for (int i = 0; i < rep.size(); i++)
	{
		if (rep[i] != 0)
			cout << char(i) << " - " << rep[i] << '\n';
	}
	*/
	pause();
	cls();
}

void rows13()
{
	cout << "This is " << __func__ << " module\n";

	//13) Дано натуральное число m < 27. Получить все трехзначные целые числа, сумма цифр которых равна m(указание:
	//использовать полный перебор).

	int m;

	do
	{
		cout << "Enter m\n> ";
		cin >> m;
		clear();
		if (m <= 0)
		{
			cout << "Error! Sum of digits can't be below 0!!!\n";
			pause();
			cls();
		}
		if (m >= 27)
		{
			cout << "Error! Max sum of 3 digits is 27, choose lesser value!\n";
			pause();
			cls();
		}
	} while (m <= 0 || m >= 27);

	for (int i = 100; i < 999; i++)
	{
		if (i / 100 + (i / 10) % 10 + i % 10 == m)
			cout << i << ' ';
	}
	cout << "\n";

	pause();
	cls();


}

void rows28()
{
	cout << "This is " << __func__ << " module\n";

	//28) Найти сумму цифр целого числа n (водится с клавиатуры).

	unsigned int n; // we dont need negative values
	unsigned int sum = 0;


	do
	{
		cout << "Enter n\n> ";
		cin >> n;
		clear();
		if (n < 0)
		{
			cout << "Error! Sum of digits can't be below 0!!!\n";
			pause();
			cls();
		}
	} while (n < 0);

	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}

	cout << "Sum of digits is " << sum << "\n";

	pause();
	cls();


}

void file6()
{

	//6)Создать файл из натуральных чисел. В файле натуральных чисел найти наименьший и наибольший общие делители,
	//также определить все простые числа и их количество. Все простые числа сохранить в другой файл. Предусмотреть
	//	возможность просмотра содержимого всех файлов

	string path = __FILE__;
	string directory;


	const size_t last_slash_idx = path.rfind('\\');
	if (std::string::npos != last_slash_idx)
	{
		directory = path.substr(0, last_slash_idx);
	}
	if (directory.empty())
	{
		cout << "Error! No path at\n\t" << path << "\n";
		pause();
		return;
	}

	const string path1 = directory + "\\file1.txt";
	const string path2 = directory + "\\file2.txt";

	auto print = [](string path)
	{

		ifstream file(path);
		string line;
		if (file.is_open())
		{
			while (getline(file, line))
				cout << line << "\n";
			file.close();
			cout << "\n\n";
		}
		else
			cout << "No such file at\n  " << path << "\n";

		pause();
		cls();

	};

	auto generate = [](string path1, string path2)
	{
		bool log = false;
		fstream text1, text2;
		vector <int> nums, simples;
		int max = INT_MIN, min = INT_MAX;

		//create if not exists
		text1.open(path1, ios::out);

		//write
		if (text1.is_open())
		{
			for (int i = 0; i < 100; i++)
			{
				text1 << rand() % 1000 << '\n';
			}
		}
		else
			cout << "No such file at\n  " << path1 << "\n";
		text1.close();

		if (log) cout << "text1: Complete\n";

		text1.open(path1, ios::in);
		if (text1.is_open())
		{
			// Parsing all numbers because i'm lazy to write something normal
			string line;

			while (!text1.eof()) {
				getline(text1, line);
				if (line != "\n" && line != "")
					nums.push_back(stoi(line));
			}
		}
		else
			cout << "No such file at\n  " << path1 << "\n";

		if (log) cout << "read text1: Complete\n";

		// get max and min
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] > max)
				max = nums[i];
			if (nums[i] < min)
				min = nums[i];
		}

		if (log) cout << "min max: Complete\n";

		const int n = 1000;

		int a[n + 1];
		for (int i = 0; i < n + 1; i++)
			a[i] = i;
		// getting sieve
		for (unsigned long int i = 2; i < n + 1; i++)
		{
			if (a[i] != 0)
			{
				for (unsigned int j = i * i; j < n + 1; j += i)
					a[j] = 0;
			}
		}

		if (log) cout << "simples: Complete\n";

		//create if not exists
		text2.open(path2, ios::out);

		//write
		if (text2.is_open())
		{

			for (int i = 0; i < nums.size(); i++)
			{
				if (find(std::begin(a), std::end(a), nums[i]) != std::end(a))
				{
					text2 << nums[i] << '\n';
				}
			}
		}
		else
			cout << "No such file at\n  " << path2 << "\n";
		text2.close();

		if (log) cout << "file2: Complete\n";

		cout << "Max number is " << max << "\nMin mnuber is " << min << "\n";

		pause();
		cls();
	};

	bool fileLoop = true;

	while (fileLoop)
	{
		int choice;
		cout << "This is " << __func__ << " module\n"
			<< "Choose operation to perform\n"
			<< "1. Print 1st file (if exists)\n"
			<< "2. Print 2nd file (if exists)\n"
			<< "3. (Re)generate files and print results of file processing\n"
			<< "0. Exit\n"
			<< "\n> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			fileLoop = false;
			cls();
			break;
		}
		case 1:
		{
			cls();
			print(path1);
			break;
		}
		case 2:
		{
			cls();
			print(path2);
			break;
		}
		case 3:
		{
			cls();
			generate(path1, path2);
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}


int rearr(int Sh[], int len, int n, bool sovp) {
	bool log = false;
	if (log)
	{
		cout << "perestanovka([";
		for (int i = 0; i < len; i++)
		{
			cout << Sh[i] << ", ";
		}
		cout << "], " << len << ", " << n << ", " << sovp << ")\n";
	}
	if (n == len)
	{
		return sovp;
	}
	else {
		int chet = 0;
		for (int i = n; i < len; i++)
		{
			int* Shn = new int[len];
			int tmp;
			for (int i = 0; i < len; i++)
			{
				Shn[i] = Sh[i];
			}
			for (int j = i; j > 0; j--)
			{
				swap(Shn[j], Shn[j - 1]);
			}
			chet += rearr(Shn, len, n + 1, sovp + (Sh[i] == n));
			delete[] Shn;
		}
		return chet;
	}
}
void balls()
{
	cout << "This is " << __func__ << " module\n";

	// Из урны с 10 пронумерованными шариками вынимают по одному шарику. 
	// Подсчитать общее количество ситуаций, когда номер хотя бы одного вынутого шарика совпадает с порядковым номером действия "вынимания", например, 
	// когда шарик № 3 будет вынут 3-им по порядку.

	int len;
	do
	{
		cout << "Enter amount of balls\n> ";
		cin >> len;
		clear();
		if (len <= 0)
		{
			cout << "Error! Amount must be greater than 0!\n";
			pause();
			cls();
		}
	} while (len <= 0);

	int* Sh = new int[len];

	for (int i = 0; i < len; i++) {
		Sh[i] = i;
	}

	cout << rearr(Sh, len, 0, 0) << endl;
	delete[] Sh;

	pause();
	cls();
}


void spinners()
{
	bool quitInner = false;
	int choice;
	while (!quitInner)
	{
		cout << "This is \"Spinner's\" programming tasks\nChoose task to check:\n"
			<< "1. Spinners\n"
			<< "2. Spinners again\n"
			<< "3. Not about spinners\n"
			<< "4. Train\n"
			<< "5. Cinema\n"
			<< "0. Back\n"
			<< "> ";
		cin >> choice;
		clear();
		switch (choice)
		{
		case 0:
		{
			quitInner = true;
			break;
		}
		case 1:
		{
			cls();
			spinner1();
			break;
		}
		case 2:
		{
			cls();
			spinner2();
			break;
		}
		case 3:
		{
			cls();
			notSpinner();
			break;
		}
		case 4:
		{
			cls();
			spinnerTrain();
			break;
		}
		case 5:
		{
			cls();
			spinnerCinema();
			break;
		}
		default:
			cls();
			cout << "Sorry, I don't understand. Please choose something else\n";
			break;
		}
	}
}

void spinner1()
{
	cout << "This is " << __func__ << " module\n";

	double a, b, c;

	// This way is just shorter
	cout << "Price of spinner's base\n> ";
	cin >> a;
	while ((cin.fail()) || (a < 1) || (fmod(a, 1) != 0))
	{
		clear();
		cout << "Please, enter a natural number\n> ";
		cin >> a;
	}

	cout << "Price of one spinner's blade\n> ";
	cin >> b;
	while ((cin.fail()) || (b < 1) || (fmod(a, 1) != 0))
	{
		clear();
		cout << "Please, enter a natural number\n> ";
		cin >> b;
	}

	cout << "Max price of a whole spinner\n> ";
	cin >> c;
	while ((cin.fail()) || (c < a) || (fmod(a, 1) != 0))
	{
		clear();
		if (c < a)
			cout << "The price of spinner's base is higher than that of a whole spinner.\nEnter a number >= " << a << "\n> ";
		else
			cout << "Please, enter a natural number\n> ";
		cin >> c;
	}

	cout << "Result is " << int((c - a) / b) << '\n';

	pause();
	cls();
}

void spinner2()
{
	cout << "This is " << __func__ << " module\n";

	double m;
	int s3 = 0, s4 = 0;

	cout << "Enter count of leafs m\n> ";
	cin >> m;
	while ((cin.fail()) || (m < 1) || (fmod(m, 1) != 0))
	{
		clear();
		cout << "Please, enter a natural number\n> ";
		cin >> m;
	}

	while (m > 0)
	{
		m -= 3;
		s3++;
		if (fmod(m, 4) == 0)
		{
			s4 += m / 4;
			break;
		}
	}

	if ((m >= 0) && (s3 >= 1) && (s4 >= 1))
		cout << s3 << "\n" << s4;
	else
		cout << "0\n0";
	cout << '\n';

	pause();
	cls();
}

void notSpinner()
{
	cout << "This is " << __func__ << " module\n";

	string k;
	int n, m;

	cout << "Enter length of one side of the sheet\n> ";
	cin >> n;
	while ((cin.fail()) || (n < 1))
	{
		clear();
		cout << "Please, enter a natural number\n> ";
		cin >> n;
	}

	cout << "Enter length of the other side of the sheet\n> ";
	cin >> m;
	while ((cin.fail()) || (m < 1))
	{
		clear();
		cout << "Please, enter a natural number\n> ";
		cin >> m;
	}

	k = to_string(((n + 1) * (m + 1) * n * m) / 4);
	cout << k << '\n';

	pause();
	cls();
}

void spinnerTrain()
{
	cout << "This is " << __func__ << " module\n";

	short int n, number, a[9] = { 0 }, total = 0, out_total = 0;

	cout << "Enter amount of free places n\n> ";
	cin >> n;
	while ((cin.fail()) || (n < 0) || (n > 54))
	{
		clear();
		cout << "Wrong input. Try again.\n";
		cin >> n;
	}
	cout << "Enter numbers of a free place\n";

	for (int i = 0; i < n; i++) {
		cout << "> ";
		cin >> number;
		while ((cin.fail()) || (number < 1) || (number > 54))
		{
			clear();
			cout << "Wrong input. Try again.\n> ";
			cin >> number;
		}
		if (number <= 36)
			a[(number / 4) + bool(number % 4) - 1]++;
		else
			a[abs(9 - (((number / 2) + (number % 2)) / 10 + ((number / 2) + (number % 2)) % 10 + 7 * (2 - (((number / 2) + (number % 2)) / 10))))]++;
	}

	for (int i = 0; i < 9; i++)
	{
		if (a[i] >= 6)
		{
			total++;
			out_total = max(total, out_total);
		}
		else
			total = 0;
	}

	cout << out_total << '\n';

	pause();
	cls();
}

void spinnerCinema()
{
	cout << "This is " << __func__ << " module\n";

	int n, k;
	int  nout1, nout2;
	cout << "Enter amount of places n\n> ";
	cin >> n;
	while ((cin.fail()) || (n < 1))
	{
		clear();
		cout << "Wrong input. Try again.\n> ";
		cin >> n;
	}

	cout << "Enter amount of pupils k\n> ";
	cin >> k;
	while ((cin.fail()) || (k > n))
	{
		clear();
		cout << "Wrong input. Try again.\n> ";
		cin >> k;
	}

	while (k != 1)
	{
		n = int((n - k % 2) / 2);
		k = int(k / 2);
	}

	nout1 = n / 2;
	nout2 = (n - 1) / 2;

	cout << nout2 << '\n' << nout1 << '\n';

	pause();
	cls();
}
