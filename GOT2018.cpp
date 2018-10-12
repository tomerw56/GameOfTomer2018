/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
int main()
{
	int playerCount; // the amount of players (always 2)
	int myId; // my player ID (0 or 1)
	int zoneCount; // the amount of zones on the map
	int linkCount; // the amount of links between all zones
	cin >> playerCount >> myId >> zoneCount >> linkCount; cin.ignore();
	for (int i = 0; i < zoneCount; i++) {
		int zoneId; // this zone's ID (between 0 and zoneCount-1)
		int platinumSource; // Because of the fog, will always be 0
		cin >> zoneId >> platinumSource; cin.ignore();
	}
	for (int i = 0; i < linkCount; i++) {
		int zone1;
		int zone2;
		cin >> zone1 >> zone2; cin.ignore();
	}

	// game loop
	while (1) {
		int myPlatinum; // your available Platinum
		cin >> myPlatinum; cin.ignore();
		for (int i = 0; i < zoneCount; i++) {
			int zId; // this zone's ID
			int ownerId; // the player who owns this zone (-1 otherwise)
			int podsP0; // player 0's PODs on this zone
			int podsP1; // player 1's PODs on this zone
			int visible; // 1 if one of your units can see this tile, else 0
			int platinum; // the amount of Platinum this zone can provide (0 if hidden by fog)
			cin >> zId >> ownerId >> podsP0 >> podsP1 >> visible >> platinum; cin.ignore();
		}

		// Write an action using cout. DON'T FORGET THE "<< endl"
		// To debug: cerr << "Debug messages..." << endl;


		// first line for movement commands, second line no longer used (see the protocol in the statement for details)
		cout << "WAIT" << endl;
		cout << "WAIT" << endl;
	}
}