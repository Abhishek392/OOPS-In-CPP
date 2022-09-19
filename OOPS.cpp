#include<iostream>
using namespace std;

// Class for Dot operator and Arrow operator
/*class rectangle{
    public:
        float length, breadth;
        
        float area(){
            return length*breadth;
        }

};*/


// Class for data hiding 
/*class rectangle{
    private:
        float length, breadth;
    public:
        void setLength(int l){ // mutator function
            length = l;
        }
        void setBreadth(int b){ // mutator function
            breadth = b;
        }
        float getLength(){ // accessor function
            return length;
        }
        float getBreadth(){ // accessor function
            return breadth;
        }
        float area(){ // facilitator function
            return length*breadth;
        }
    
};*/


// Class for Constructor
/*class rectangle{
    private:
        float length, breadth;
    public:
        rectangle(){  // This is known as default of non-parameterized constructor.
			length = 1;
			breadth = 1;
		}
		rectangle(float l, float b){ // This is known as parameterized constructor.
			length = l;
            breadth = b;
		}
		rectangle(rectangle &r){ // This is known as copy constructor.
			length = r.length;
			breadth = r.breadth;
		}
        void setLength(int l){ 
            length = l;
        }
        void setBreadth(int b){
            breadth = b;
        }
        float area(){
            return length*breadth;
        }
};*/


// Class for Scope Resolution
/*class rectangle{
	private:
		float length;
		float bredth;
	public:
		rectangle(float l=1, float b=1){ // By doing this we don't need to write default constructor separately.
			length = l;
			bredth = b;
		}
		float area(){ // If we create functions inside the class then they are known as inline function.Inline 
        // function is a function that is expanded in line when it is called.
			return length*bredth;
		}
		float perimeter(); // Functions define outside the class are not known as outline function, because 
		//during the call it will go to the function and after the function it will come back to the main 
		// function. So it is good practice in c++ to write code outside the class.  
};
float rectangle::perimeter(){ // Scope resolution shows that the scope of perimeter function is in the class rectangle.
	return 2*(length+bredth);
}*/


// Class for this pointer
/*class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length=1, int breadth=2){
            this->length = length; // Name of local variable is same as the member variable, so
            // we use this pointer to differentiate. 
            this->breadth = breadth;
        }
        int area(){
            return length*breadth;
        }
};*/


// Add two complex number
/*class Complex{
    private:
        int a;
        int b;
    public:
        Complex(int a=0, int b=0){
            this->a = a;
            this->b = b;
        }
        Complex add(Complex c){
            Complex temp;
            temp.a = a+c.a;
            temp.b = b+c.b;
            return temp;
        }
        void display(){
            cout<<a<<" + "<<b<<"i";
        }
};*/


int main(){
    // Dot Operator: Used for direct member selection via object name. 
    /*rectangle r;
    cin>>r.length>>r.breadth;
    cout<<"Area: "<<r.area()<<endl;*/


    //  Arrow Operator: gives the value held by variable_name to class variable pointer_name.
    /*rectangle *r, *r1, r2;
    // First way
    r = &r2; 
    cin>>r->length>>r->breadth;
    cout<<"Area: "<<r->area()<<endl;
    // Second way
    r1 = new rectangle; // Here r1 will create in stacks but the objects will create in heap
    cin>>r1->length>>r1->breadth;
    cout<<"Area: "<<r1->area()<<endl;*/


    // Data Hiding
    /*rectangle r;
    r.setLength(10);
    r.setBreadth(20);
    cout<<"Area: "<<r.area()<<endl;*/


    // Constructor
    /*rectangle r, r1(10, 20), r2(r1);
    cout<<r.area()<<" and "<<r1.area()<<" and "<<r2.area()<<endl;*/


    // Scope Resolution
    /*rectangle r1;
	rectangle r2(10,20);
	cout<<"Area: "<<r2.area()<<endl;
	cout<<"Perimeter: "<<r2.perimeter();*/


    // this pointer
    /*Rectangle r;
    cout<<r.area()<<endl;*/
    

    // Add two complex number
    /*Complex c(4, 5), c1(5, 6), c2;
    c2 = c.add(c1);
    c2.display();*/

    return 0;
}