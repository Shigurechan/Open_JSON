#include <iostream>
#include <fstream>
#include <string>
#include "stdlib.h"

char Path[4][100];

int main(int args,char *argv[])
{

	int num = 1;
	while(true)	
	{
		if(argv[num] != NULL)
		{
			num++;
		}else{
			break;
		}
	}

	//�t�@�C�����Ȃ��ꍇ(.exe�𒼐ڃN���b�N�����ꍇ)
	if(num - 1 == 0)
	{
		printf(".json�t�@�C����.exe��D&D����ƒ��g��\���ł��܂��B�����t�@�C�����\");
		getchar();
		return 0;
	}
	
	
	for(int i = num  - 1; i > 0; i--){
		std::ifstream _file(argv[i]);	
		std::string str;
					
		printf("\n\n********************************************************************************\n");
		printf("     File: %s\n",argv[i]);	  
		printf("********************************************************************************\n\n");
		
		Path[0][0] = { '\0' };	
		Path[1][0] = { '\0' };
		Path[2][0] = { '\0' };
		Path[3][0] = { '\0' };

		while( getline(_file,str) ){
			std::cout<<str<<std::endl;
		}
	}



	getchar();	
	getchar();
	

	return 0;
}
