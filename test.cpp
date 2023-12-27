#include <iostream>
#include <iomanip>



void napkinBuffet(int lengthA, int widthB);

int main(){
	int length, width;
	int count;
	int noOfBlanks;


	std::cout << "Enter values between length 8 to 16 and"
		<< " weigth from 8 to 13: " << std::endl;
	
	std::cout << "Enter length: ";
	std::cin >> length;
	std::cout << std::endl;

	std::cout << "Enter weigth: ";
	std::cin >> width;
	std::cout << std::endl;



	while ((8 <= length || width <= 16))
	{

		std::cout << std::setw(10) << "WARNING!!!" << std::endl;
		std::cout << "Napkin sizes are not met stanrdats, "
				<< "please, choose correct sizes "
				<< "length from 8 to 16 and weigth to 8 to 16 " << std::endl;
				std::cout << "try again " << std::endl;
	
		if((8 == length || width == 8)){
		
				break;
			
		};
		
		
		if(13 == length || width == 13 ){

				break;
		};
		
		if(13 == length || width == 13){

				break;
		};
		
		if(16 == length || width == 16){
			
				break;
		};

	
			std::cout << "Length: ";
			std::cin >> length;
			std::cout << std::endl;

			std::cout << "Width: ";
			std::cin >> width;
			std::cout << std::endl;
	};

	std::cout << std::endl;

	noOfBlanks = 1;

	for(count = 0; count < noOfBlanks; count++){
		
		napkinBuffet(length, width);
		
	};
	
	return 0;
};

void napkinBuffet(int lengthA, int widthB){
	
	int count;
	for(count = 1; count < lengthA; count++){
		std::cout << std::setw(3);
		
		std::cout << "*";
	};

	for(count = 1; count <= lengthA; count++){
		std::cout << std::setw(3);
		
		std::cout << "*" << std::endl;

		for(int j = 2; j <= lengthA; j++){

			std::cout << std::setw(3);
			std::cout << "*";
		};
		
	};

	

	std::cout << std::endl;

	return;
};