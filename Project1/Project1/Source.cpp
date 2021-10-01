#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
#include<vector>
#include <sstream>


using namespace std;

int main() {
	vector<string> a[7];
	FILE* cfptr;
	if ((cfptr = fopen("roa_e.csv", "r")) == NULL) {
		cout << "wrong";
	}
	else {
		char CN[500];
		fscanf(cfptr, "%s", CN);
		while (!feof(cfptr)) {
			char input[500];
			fscanf(cfptr, "%s", input);
			int i = 0;
			char* p = strtok(input, ",");
			//cout << p << endl;
			while (p != NULL) {
				string temp;
				temp = p;
				a[i].push_back(temp);
				i++;
				//cout << p << endl;
				p = strtok(NULL, ",");
			}
		}
	}
	fclose(cfptr);

	//平均資產總和
	
	
	
	//for (int x = 0; x < 7; x++) {
	//	for (int y = 0; y < a[x].size(); y++) {
	//		cout << a[x][y] << endl;
	//	}
	//}

	int MoneyTotal = 0;
	int Row = 3; //
	for (int x = 0; x < (a[Row]).size(); x++) {
		stringstream ss;
		ss << a[Row][x];
		int NumTemp;
		ss >> NumTemp;
		MoneyTotal = NumTemp + MoneyTotal;
	}
	cout << "平均淨值總和=" << MoneyTotal << endl;
	
	
}