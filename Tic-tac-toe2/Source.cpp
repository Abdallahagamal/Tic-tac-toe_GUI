#include <iostream>
#include <msclr/marshal.h>
#include <map>
#include "9x9X_O.h"
#include "4X4X_O.h"
#include "pyramidX_O.h"
#include "MisereX_O.h"
#include "5X5X_O.h"
#include "wordX_O.h"
#include <thread>
#include <chrono>
#include <sstream>

std::string labelName77;
int gamenum=4;
int countj = 0;
int counti = 0;
//game8
int countj2 = 0;
int counti2 = 0;
//game7
int countj3 = 0;
int counti3 = 0;
int countj3_px = 0;
int counti3_px = 0;
int countj3_po = 0;
int counti3_po = 0;
//game1
int countj1 = 0;
int counti1 = 0;
//game6
int countj6 = 0;
int counti6 = 0;
//game3
int countj4 = 0;
int counti4 = 0;
//game3
int countj5 = 0;
int counti5 = 0;
//game5
int countj55 = 0;
int counti55 = 0;
//game4
int countj7 = 0;
int counti7 = 0;
///////////////////
bool gm1 = false,gm2 = false,gm3 = false, gm4 = false,gm5 = false,gm6 = false,gm7 = false,gm8=false;
bool AIo = true, AIb = true,HUo=false,HUb=false,RMo=false,RMb=false;
char mm,mm2;
//game8
X_O_Board<char> boardgm8;
std::map<int, std::pair<int, int>> labelIndexMap;

//game7
X_O_Board7<char> boardgm7;
std::map<int, std::pair<int, int>> labelIndexMap7;
std::map<std::pair<int, int>, int> labelIndexMap7inverse;
std::map<int, std::pair<int, int>> picturebox7_X;
std::map<int, std::pair<int, int>> picturebox7_O;
//game1
std::map<int, std::pair<int, int>> labelIndexMap1;
X_O_Board1<char> boardgm1;
X_O_Random_Player1<char> player1('X');

//game6
X_O_Board6<char> boardgm6;
std::map<int, std::pair<int, int>> labelIndexMap6;

//game3
X_O_Board3<char> boardgm3;
std::map<int, std::pair<int, int>> labelIndexMap3;

//game2
std::map<int, std::pair<int, int>> labelIndexMap2;

//game5
std::map<int, std::pair<int, int>> labelIndexMap5;

//game4
X_O_Board4<char> boardgm4;
std::map<int, std::pair<int, int>> labelIndexMap4;

////////////////
void check() {
	if (gm1 == true) {
		gm2 = gm3 = gm4 = gm5 = gm6 = gm7 = gm8 = false;
	}
	else if (gm2 == true) {
		gm1 = gm3 = gm4 = gm5 = gm6 = gm7 = gm8 = false;

	}
	else if (gm3 == true) {
		gm1 = gm2 = gm4 = gm5 = gm6 = gm7 = gm8 = false;
	}
	else if (gm4 == true) {
		gm1 = gm2 = gm3 = gm5 = gm6 = gm7 = gm8 = false;
	}
	else if (gm5 == true) {
		gm1 = gm2 = gm3 = gm4 = gm6 = gm7 = gm8 = false;
	}
	else if (gm6 == true) {
		gm1 = gm2 = gm3 = gm4 = gm5 = gm7 = gm8 = false;
	}
	else if (gm7 == true) {
		gm1 = gm2 = gm3 = gm4 = gm5 = gm6 = gm8 = false;
	}
	else if (gm8 == true) {
		gm1 = gm2 = gm3 = gm4 = gm5 = gm6 = gm7 = false;
	}
}
void checkplayerO() {
	if (AIo == true) {
		 HUo = RMo = false;
	}
	else if (HUo == true) {
		AIo = RMo = false;
	}
	else if (RMo == true) {
		AIo = HUo= false;
	}
	
}
void checkplayerB() {
	if (AIb == true) {
		HUb  = RMb = false;
	}
	else if (HUb == true) {
		AIb = RMb = false;
	}
	else if (RMb == true) {
		 AIb = HUb = false;
	}
}
void searchInMap(int key, std::map<int, std::pair<int, int>> labelIndexMap) {
	auto it = labelIndexMap.find(key);
	if (it != labelIndexMap.end()) {
		std::pair<int, int> value = it->second;
		countj = value.first;
		counti = value.second;
	}
	else {
		std::cout << "Key " << key << " not found in the map.\n";
	}
}

void searchInMapinvers(int keyx, int keyy) {
	auto it = labelIndexMap7inverse.find(std::make_pair(keyx, keyy));
	if (it != labelIndexMap7inverse.end()) {
		int value = it->second;
		labelName77= to_string(value);
		
	}
	else {
		std::cout << "Key (" << keyx << ", " << keyy << ") not found in the map.\n";
	}
}

std::string FindKeyByPair(const std::map<int, std::pair<int, int>>& labelIndexMaptry, const std::pair<int, int>& pairToSearch) {
	// Iterate through the map to search for the pair
	for (const auto& entry : labelIndexMaptry) {
		if (entry.second == pairToSearch) {
			return to_string(entry.first);  // Return the key if the pair is found
		}
	}

	return "";  // Return -1 if the pair is not found
}

// Custom marshaling function to convert System::String^ to std::string
std::string CustomMarshalString(System::String^ managedString)
{
	// Convert System::String^ to const char*
	const char* chars = (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(managedString)).ToPointer();

	// Create std::string from const char*
	std::string stdString = chars;

	// Free the unmanaged memory
	System::Runtime::InteropServices::Marshal::FreeHGlobal(System::IntPtr((void*)chars));

	return stdString;
}

std::string convert(std::stringstream& ss) {
	return ss.str();
}

std::string someFunction(System::String^ managedString) {
	// Convert System::String^ to std::string using custom marshaling function
	std::string stdString = CustomMarshalString(managedString);

	// Now use stdString with std::stringstream
	std::stringstream ss;
	ss << stdString;

	// Call the convert function
	std::string result = convert(ss);
	return result;
}