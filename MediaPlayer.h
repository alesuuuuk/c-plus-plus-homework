#pragma once
#include <iostream>
using namespace std;
class MediaPlayer
{
private:

public:
	void startPlayer() {
		cout << "Is playing..." << endl;
	}
	void pausePlayer() {
		cout << "Player on pause..." << endl;
	}

	void stopPlayer() {
		cout << "Player is stopped" << endl;
	}


};
