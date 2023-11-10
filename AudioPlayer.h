#pragma once
#include "MediaPlayer.h"
class AudioPlayer : public MediaPlayer
{
private:
	int volume;
public:
	AudioPlayer() {
		this->volume = 0;
	}

	int getVolume() {
		return this->volume;
	}
	void setVolume(int tempVolume) {
		this->volume = tempVolume;
	}
	void turnUpVolume() {
		this->volume++;
		cout << volume << endl;
	}
	void turnOffVolume() {
		this->volume = this->volume-1;
		cout << volume << endl;
	}

};


