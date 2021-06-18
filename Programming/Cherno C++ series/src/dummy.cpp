//#include<iostream>
//
//using namespace std;
//
//class complexRoot {
//protected:
//	float real;
//	float img;
//public:
//	void getcomplex()
//	{
//		cout << "\nEnter real and imaginary numbers:";
//		cin >> real >> img;
//	}
//};
//class add_complex :public complexRoot{
//private:
//	float real1;
//	float img1;
//public:
//	void getnew()
//	{
//		cout << "\nEnter real and imaginary numbers:";
//		cin >> real1 >> img1;
//	}
//	void add() {
//		float sum_real;
//		float sum_img;
//		sum_real = real + real1;
//		sum_img = img + img1;
//		cout << "Sum:" << endl;
//	}
//	friend class sub_complex;
//};
//class sub_complexRoot {
//private:
//	float real2;
//	float img2;
//public:
//	void getnew()
//	{
//		cout << "\nEnter real and imaginary numbers:";
//		cin >> real2 >> img2;
//	}
//	void sub(add_complex c1) {
//		float diff_real;
//		float diff_img;
//		diff_real = c1.real - real2;
//		diff_img = c1.img - img2;
//		cout << "Difference: " << endl;
//	}
//};
//
//
//void main() {
//
//	add_complex obj1;
//	sub_complexRoot obj2;
//	cout<< obj.getcomplex();
//	cout <<
//		obj.getnew();
//	obj.add();
//	cout <<
//		obj2.getnew();
//	obj2.sub(obj1);
//}