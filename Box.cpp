#include <iostream>
#include <string>

using namespace std;

class Box{
	private:
		int height, width, depth;
	public:
		Box(int, int, int);
		int volume();
};
Box::Box(int ht, int wd, int dp){
	height = ht;
	width = wd;
	depth = dp;
}
int Box::volume(){
	return height * width * depth;
}

int main(int argc, char *argv[]) {
	Box box(7,8,9); // declare a Box
	int vol = box.volume(); // compute & display volume
	cout << box.volume();
}