#include <iostream>
#include "RacingVehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "FormulaCar.h"
#include "Track.h"

using namespace std;;
int main() {
	
	Track track(50, 0.2, 0.4, 0.1, 0.3);
	cout << "Welcome to my Race car simulation!" << endl;
	cout << "Tahsin Berk Oztekin _ 21070001035\n\n" << endl;
	
	cout << "Race Track: Istanbul Park" << endl;
	cout << "Total Length: "<< track.getLength() << endl;
	cout << "Top Speed Distance: " << track.getLength() * track.getTopSpeedPct() << endl;
	cout << "High Speed Distance: " << track.getLength() * track.getHighHandlingPct() << endl;
	cout << "Medium Speed Distance: " << track.getLength() * track.getMediumHandlingPct() << endl;
	cout << "Cruise Speed Distance: " << track.getLength() * track.getCruiseSpeedPct() << endl;
	cout << "\n";
	Car car("Car", 200, 0.7, "Toyota", "Supra", "John Doe", 0.9);
	cout << "Car before tuning:\n";
	car.display();
	cout << "\n";
	cout << "Time to complete the track (before tuning): " << car.race(track) << " hours\n";
	cout << "\n";
	car.tuning(10, 60);
	cout << "Car after tuning:\n";
	car.display();
	cout << "\n";
	cout << "Time to complete the track (after tuning): " << car.race(track) << " hours\n";

	
	Motorcycle motorcycle("Motorcycle", 180, 0.9, "Yamaha", "YZF-R1", "Jane Doe", 0.8);
	cout << "\nMotorcycle before tuning:\n";
	motorcycle.display();
	cout << "\n";
	cout << "Time to complete the track (before tuning): " << motorcycle.race(track) << " hours\n";
	cout << "\n";
	motorcycle.tuning(15, 15);
	cout << "Motorcycle after tuning:\n";
	motorcycle.display();
	cout << "\n";
	cout << "Time to complete the track (after tuning): " << motorcycle.race(track) << " hours\n";

	
	FormulaCar formulaCar("Formula One Car", 300, 0.95, "Ferrari", "SF-71H", "Sebastian Vettel", 1.0);
	cout << "\nFormula car before tuning:\n";
	formulaCar.display();
	cout << "\n";
	cout << "Time to complete the track (before tuning): " << formulaCar.race(track) << " hours\n";
	cout << "\n";
	formulaCar.tuning(20, 10);
	cout << "Formula car after tuning:\n";
	formulaCar.display();
	cout << "\n";
	cout << "Time to complete the track (after tuning): " << formulaCar.race(track) << " hours\n";

	return 0;
}
