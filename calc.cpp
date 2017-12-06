//list of libraries included, no need of the .h extension
#include <iostream> //same as C's stdio.h
#include <cstdlib>  // stdlib.h
#include <cassert>  // assert.h
#include <cmath>    // Math (pow)



void menu(std::string&); //declaration

int main(int argc, const char* argv[]) //like C
{
  std::string scelta= "ciao", fine, ina, inb; //standard string object
  float a, b;
  const char * cstr; 
  char ** endp;
  
  while(scelta != "esc") //sugary string comparison
    {
      menu(scelta);

      if(scelta == "1")
	std::cout << "\nhai scelto somma\n" << std::endl;
      else if(scelta == "2")
	std::cout << "\nhai scelto sottrazione\n" << std::endl;
      else if(scelta == "3")
	std::cout << "\nhai scelto moltiplicazione\n" << std::endl;
      else if(scelta == "4")
	std::cout << "\nhai scelto divisione\n" << std::endl;
      else if(scelta == "5")
	std::cout << "\nhai scelto esponenziale\n" << std::endl;

      if(scelta == "1" || scelta == "2" || scelta == "3" || scelta == "4" || scelta == "5")
	{
	  std::cout << "inserisci a:";
	  std::cin >> ina; // std::cin >> a; wuold work but would not check if the input is correct
	  cstr = ina.c_str(); // get the char array form the string object 
	  a = strtof(cstr, endp); // string to float (works whit C like strings)
	  if(!a && cstr == *endp) //check if the conversion took place
	    {
	      std::cout << "inserisci numeri" << std::endl;
	      continue;
	    }
	  std::cout << "inserisci b:";
	  std::cin >> inb;
	  cstr = inb.c_str();
	  b = strtof(cstr, endp);
	  if(!b)
	    if(cstr == *endp)
	      {
		std::cout << "inserisci numeri" << std::endl;
		continue;
	      }
	    else if(scelta == "4")
	      {
		std::cout << "hai diviso per zero" << std::endl;
		continue;
	      }
	  
	  std::cout << "\nil risultato è:";
	}
      
      if(scelta == "1")
	std::cout << a+b << std::endl;
	else if(scelta == "2")
	  std::cout << a-b << std::endl;
	else if(scelta == "3")
	  std::cout << a*b << std::endl;
	else if(scelta == "4")
	  std::cout << a/b << std::endl;
	else if(scelta == "5")
	  std::cout << pow(a,b) << std::endl;

      if(scelta != "esc")
	{
	  std::cout << "desideri continuare? si/no :";
	  std::cin >> fine;
	}
      if(fine == "no")
	break;

      std::cout << "____________________________________________" << std::endl;
    }
}

void menu(std::string& scelta) //definition
{
  std::cout << // standard output object replace stdout stream, << replace printf
    "\n\tbenvenuto nella calcolatrice\n" //as in C
    "\tper somma = 1\n"
    "\tper sott = 2\n"
    "\tper molt = 3\n"
    "\tper div = 4\n"
    "\tper espon = 5\n"
    "\tper esc = esc\n"
	    << std::endl; // \n that also flush the buffer
  std::cout << "inserisci qui il numero corrispondente: ";
  std::cin >> scelta; // standard input object replace stdin stream, >> get the first word
}
