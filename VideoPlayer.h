#pragma once
#include "MediaPlayer.h"
class VideoPlayer : public MediaPlayer
{
private:
	int currentVideoPosition;
public:
	VideoPlayer() {
		this->currentVideoPosition = 0;
	}

	int getCurrentVideoPosition() {
		return this->currentVideoPosition;
	}
	void changeCurrentVideoPosition(int value) {
		this->currentVideoPosition = value;
	}
};

