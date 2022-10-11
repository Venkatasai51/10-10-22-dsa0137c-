#include<iostream>
class base{
	public:
		void a(){
			std::cout<<"a";}
     };
     class derived1:public base{
    public:
    	void b(){
    		std::cout<<"b";}
	 };
	 class derived2:public base
	 {
	 public:
	 void c(){
	 	std::cout<<"c";}
	 };
	 class derived3:public derived1,public derived2
	 {
	public:
		void d(){
			std::cout<<"d";}
	};
	int main()
	{
		derived3 obj;
		obj.b();
		obj.c();
		return 0;
	}
