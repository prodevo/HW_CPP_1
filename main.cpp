#include <iostream>
using namespace std;

class Microfone
{
public:
	void SetDefault(string br, string mod, int vol, bool out, bool p) {
		brand = br;
		model = mod;
		volume = vol;
		output = out;
		power = p;
	}

	void PrintInfo() {
		cout << "brand: " << brand << "\n";
		cout << "model: " << model << "\n";
		cout << "volume: " << volume << "\n";
		cout << "output: " << output << "\n";
		cout << "power: " << power << "\n";
	}

	void Mute(bool out) {
		output = out;
	}

	void PlugIn(bool p) {
		power = p;
	}

	void ChangeVolume(int vol) {
		volume = vol;
	}


private:
	string brand;
	string model;
	int volume;
	bool output;
	bool power;
};

class Webcam
{
public:
	void SetDefault(string br, string mod, string res, bool out, bool p) {
		brand = br;
		model = mod;
		resolution = res;
		output = out;
		power = p;
	}

	void PrintInfo() {
		cout << "\nbrand: " << brand << "\n";
		cout << "model: " << model << "\n";
		cout << "volume: " << resolution << "\n";
		cout << "output: " << output << "\n";
		cout << "power: " << power << "\n";
	}

	void Blur(bool out) {
		output = out;
	}

	void PlugIn(bool p) {
		power = p;
	}

	void ChangeResolution(string res) {
		resolution = res;
	}


private:
	string brand;
	string model;
	string resolution;
	bool output;
	bool power;
};

class Candy
{
public:
	void SetDefault(string br, string tas, string col, string sha, int l) {
		brand = br;
		taste = tas;
		colour = col;
		shape = sha;
		length = l;
	}

	void PrintInfo() {
		cout << "\nbrand: " << brand << "\n";
		cout << "taste: " << taste << "\n";
		cout << "colour: " << colour << "\n";
		cout << "shape: " << shape << "\n";
		cout << "length: " << length << "\n";
	}

	void ChangeLength(int l) {    //bite :)
		length = l;
	}

	string GetBrand() {
		return brand;
	}

	string GetTaste() {
		return taste;
	}


private:
	string brand;
	string taste;
	string colour;
	string shape;
	int length;
};


class Glasses
{
public:
	void SetDefault(string bra, string ty, string col, int a, bool bro) {
		brand = bra;
		type = ty;
		colour = col;
		age = a;
		broken = bro;
	}

	void PrintInfo() {
		cout << "\nbrand: " << brand << "\n";
		cout << "type: " << type << "\n";
		cout << "colour: " << colour << "\n";
		cout << "age: " << age << "\n";
		cout << "broken: " << broken << "\n";
	}

	void Break(bool bro) {
		broken = bro;
	}

	string GetBrand() {
		return brand;
	}

	string GetColour() {
		return colour;
	}


private:
	string brand;
	string type;
	string colour;
	int age;
	bool broken;
};


class Button
{
public:
	void SetDefault(string br, string sym, string col, bool out, bool p) {
		brand = br;
		symbol = sym;
		color = col;
		output = out;
		power = p;
	}

	void PrintInfo() {
		cout << "\nbrand: " << brand << "\n";
		cout << "symbol: " << symbol << "\n";
		cout << "color: " << color << "\n";
		cout << "output: " << output << "\n";
		cout << "power: " << power << "\n";
	}

	void Break(bool out) {
		output = out;
	}

	void PlugIn(bool p) {
		power = p;
	}

	void Paint(string col) {
		color = col;
	}


private:
	string brand;
	string symbol;
	string color;
	bool output;
	bool power;
};


int main()
{
	Microfone microfone;

	microfone.SetDefault("fifine", "AM8", 100, true, false);
	microfone.ChangeVolume(50);
	microfone.Mute(false);
	microfone.PlugIn(true);
	microfone.PrintInfo();


	Webcam webcam;

	webcam.SetDefault("Logitech", "G100", "1920*1080", true, false);
	webcam.ChangeResolution("1240*720");
	webcam.Blur(false);
	webcam.PlugIn(true);
	webcam.PrintInfo();


	Candy candy;

	candy.SetDefault("Twix", "original", "brown", "rectangle", 10);
	candy.ChangeLength(8);
	candy.GetBrand();
	candy.GetTaste();
	candy.PrintInfo();


	Glasses glasses;

	glasses.SetDefault("Oliver Black", "aviator", "silver", 3, false);
	glasses.Break(true);
	glasses.GetBrand();
	glasses.GetColour();
	glasses.PrintInfo();


	Button button;

	button.SetDefault("Best buttons", "F6", "black", 0, 0);
	button.Break(1);
	button.Paint("White");
	button.PlugIn(1);
	button.PrintInfo();
}










































//easter egg jk
