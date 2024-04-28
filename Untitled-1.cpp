#include <iostream>
#include <random>
int main(int argc, char *argv[])

{
	int array_b[10][10],small =100;
	int column =10, line = 10;
	
	for(int i =0; i<10;i++){
	     for(int j=0; j<10;j++){
	         std::random_device rd;
    
             std::mt19937 gen(rd());
    
                   std::uniform_int_distribution<int>dis(1, 100);
             int random_number =dis(gen);
             array_b[i][j] = random_number;
	    }
	}
	
	for(int i =0; i<10;i++){
	     for(int j=0; j<10;j++){
	        if(small>array_b[j][i]){
	            small= array_b[i][j];
	            column = i;
	            line = j;
	        }
	    }
	}
		for(int i =0; i<10;i++){
	        std::cout<<"Coluna: "<<column<<", ";
	        std::cout<<"Linha: "<<line<< ", ";	         std::cout<<"Numero "<<array_b[column][i];
	        std::cout<<"\n";
	    }
	    std::cout<<"O menor numero e: "<<small;                      
	    return 0;
	}
	