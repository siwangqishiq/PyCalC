
#include <iostream>
#include <string>

using namespace std;

int add(int a , int b){
	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl;
	return a + b;
}

float addf(float a , float b){
	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl;
	return a + b;
}

char* sayHello(){
	return (char *)"Hello World";
}

string sayHehe(){
	return "hehe hehe";
}


extern "C"  {    
	int cadd(int a,int b){    
		return add(a,b);    
	}  
	
	float caddf(float a,float b){    
		return addf(a,b);    
	}  

	char* csayHello(){
		return sayHello();
	}
	
	string csayHehe(){
		return sayHehe();
	}
} 
