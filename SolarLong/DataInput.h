#pragma once
#include "CometClass.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;



void ucitavacPodatakaKometa(string fStreamName, int posDaily, int posDate, int posTime, int posSolarLongitude, int maxPositions) {
	vector <CAMS_comet> dateTimeSolLong;
	ifstream dataInput(fStreamName);
	vector <string> tempVector;  
	string tempData, tempDaily, tempDate, tempTime, tempSolarLongitude;
	int counter = 0;

	while (dataInput.good()) {
		getline(dataInput, tempData, ';');
		if (counter == maxPositions) {

			tempDaily = tempVector[posDaily];
			tempDate = tempVector[posDate];
			tempTime = tempVector[posTime];
			tempSolarLongitude = tempVector[posSolarLongitude];

			dateTimeSolLong.push_back(CAMS_comet(tempDaily, tempDate, tempTime, tempSolarLongitude));

			tempVector.clear();
			counter = 0;
		}

		tempVector.push_back(tempData);
		counter++;
	}
	

		
}
	










	



