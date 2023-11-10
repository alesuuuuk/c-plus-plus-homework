#include <iostream>
// include classes for task one
#include "VideoPlayer.h"
#include "MediaPlayer.h"
#include "AudioPlayer.h"

// include classes for task two
#include "Car.h"
#include "Motorcycle.h"
#include "Vehicle.h";



using namespace std;


int main()
{
	cout << "Hello World!" << endl << endl << endl << endl;
	// task one
	string choicePlayer;
	while (true)
	{
		cout << "Chouse video(1) or audio player(2) or type ex to exit: ";
		cin >> choicePlayer;
		cout << endl;
		if (choicePlayer == "1") {
			// Video player
			VideoPlayer player;
			while (true)
			{
				string choiceInPlayer;
				cout << "Player will start in" << endl << "3..." << endl << "2..." << endl << "1..." << endl << "Type set to change video positiot; p to pause video; g to get current video position; ex to exit" << endl;;
				if (choiceInPlayer == "set") {
					// changing video player position 
					while (true)
					{
						int value;
						cout << " type video position that you want: ";
						cin >> value;
						cout << endl;
						if (value < 0) {
							cout << "Are u dumb?(just joke))))" << endl;
						}
						else {
							player.changeCurrentVideoPosition(value);
						}
					}
					
				}
				else if (choiceInPlayer == "g") {
					// get video player position
					cout << "Video position: " << player.getCurrentVideoPosition() << endl;
				}
				else if (choiceInPlayer == "p") {
					// player on pause
					while (true)
					{
						player.pausePlayer();
						string unPause;
						cout << "Type c to countinue" << endl;
						cin >> unPause;
						if (unPause == "c") {
							break;
						}
						else {
							cout << "Can`t find this command, try again!!!" << endl;
						}
					}
				}
				else if (choiceInPlayer == "ex") {
					// exit from program
					player.stopPlayer();
					break;
				}
				else {
					// exeption 
					cout << "Can`t find this command, try again!!!" << endl;
				}
			}


		}
		else if (choicePlayer == "2") {
			// here's should be interface for audio player
			AudioPlayer player;
			string choiceInPlayer;
			cout << "Player will start in" << endl << "3..." << endl << "2..." << endl << "1..." << endl << "Type + if you want to turn up volume or - to turn off volume or set to set any volume or ex to exit or p to pause player or g to get actual volume" << endl << "Start proggram" << endl;
			while (true)
			{
				player.startPlayer();
				cin >> choiceInPlayer;
				if (choiceInPlayer == "+") {
					// +1 to volume
					player.turnUpVolume();
				}
				// i know how to check actual value of volume and do exeption but im to lazy to do this))))
				else if (choiceInPlayer == "-") {
					// -1 to volume 
					player.turnOffVolume();
				}
				else if (choiceInPlayer == "set") {
					// setting any volume that >0 and <100
					while (true)
					{
						int value;
						cout << "Type value of volume: ";
						cin >> value;
						cout << endl;
						if (value > 100) {
							cout << "Its too much!!!" << endl;
						}
						else if (value < 0) {
							cout << "Its too low!!!" << endl;
						}
						else {
							player.setVolume(value);
							cout << "Succesfull!! Now your volume is: " << player.getVolume() << endl;
							break;
						}
					}
					
				}
				else if (choiceInPlayer == "p") {
					while (true)
					{
						player.pausePlayer();
						string unPause;
						cout << "Type c to countinue" << endl;
						cin >> unPause;
						if (unPause == "c") {
							break;
						}
						else {
							cout << "Can`t find this command, try again!!!" << endl;
						}
					}
					
				}
				else if (choiceInPlayer == "g") {
					cout << "Your volume is:" << player.getVolume() << endl;
				}
				else if (choiceInPlayer == "ex") {
					player.stopPlayer();
					break;
				}
				else {
					cout << "Can`t find this command, try again!!!" << endl;
				}
			}
			
		}
		else if (choicePlayer == "ex") {
			// exit from proggram
			break;
		}
		else {
			// exeption for uncorrect input
			cout << "Can't found such player, try again!!!" << endl;
		}
	}


	// task two
	// and also now i am too lazy to do menu like this so here's will be just hardcode but ready methods




}