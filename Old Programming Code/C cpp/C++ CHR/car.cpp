#include<iostream>

using namespace std;

class wheels {
private:
	string s;
public:

	void set_wheel_state(string s);
	string get_wheel_state();
};

class car : public wheels {

private:
	string wheels[4];
public:
	void set_car_to_moving();
	void  set_car_to_stopped();

	string set_wheel_state(string s) {

		if (s == "move") {

			set_car_to_moving();
		}
		else if (s == "stop") {
			set_car_to_stopped();
		}
	}


	void print_car_wheels_state() {
		for (int i = 0; i < 4; i++) {
			cout << "wheel " << i << " is " << wheels[i] << endl;
		}
	}

	string get_wheel_state() {
		int count = 0, i;
		for (i = 0;i < 4;i++) {
			if (wheels[i] == "moving") { count++; }
		}

		if (count == 4) {
			return "turning";
		}
		else {
			return "stopped";
		}

	}

};




int main() {

	car object;
	object.set_wheel_state("move");


}


void car::set_car_to_stopped() {
	wheels[0] = "stopped";
	wheels[1] = "stopped";
	wheels[2] = "stopped";
	wheels[3] = "stopped";
}

void car::set_car_to_moving() {
	wheels[0] = "moving";
	wheels[1] = "moving";
	wheels[2] = "moving";
	wheels[3] = "moving";
}












