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

    

    return 0;
}