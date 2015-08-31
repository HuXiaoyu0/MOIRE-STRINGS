#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

//Functions that we are going to use.
//square() for square patterns; right_triangle() for right_triangle patterns;
//isosceles_triangle patterns.
// parallelogram() for extra credit, it will return a parallelogram pattern.
void square(int k, int h, string letter, char* name);
void right_triangle(int k, int h, string letter, char* name);
void isosceles_triangle(int k, int h, string letter, char* name);
void parallelogram(int k, int h, string letter, char* name);

int
main(int argc, char*argv[])
{
  //Check the command line arguments.
    if (!(argc==5))
	{std::cerr <<"Wrong command line arguments.";
	exit(1);}

  //File nama for output.
  char* name=argv[4];
	
  //Get the elements to construct the pattern.
  //Convert it into a string for convenience and get the size.
  string letter=argv[1];
  int k=letter.size();

  //Get the hight of our pattern. Also convert it into a integer.
  char* convert = argv[2];
  int h = atof(convert);
  
  //Determine which functon to use.
  string format=argv[3];
  if (format=="square")
	 square(k,h,letter,name);
	 else if (format=="right_triangle")
		  right_triangle(k,h,letter,name);
	   else if (format=="isosceles_triangle")
		   isosceles_triangle(k,h,letter,name);
	     else if (format=="parallelogram")
		     parallelogram(k, h, letter, name);
return 0;
}


void square(int k, int h, string letter, char* name)
{	
  //Create the file so that we could use out_str to write in it.
  //Check whether the fike is opened.
  ofstream out_str(name);
  if (!out_str.good()) {
    std::cerr << "Can't open " << name << " to write.\n";
    exit(1);
  }
  
  //The first line and the nothers lines without 'elements' in it.
  string star_line(h,'*');
  string blanks(h-2,' ');
  string letter_line='*'+blanks+'*';
  
  //Output the first line.
  cout<< star_line<<'\n';
  out_str<< star_line<<'\n';

  //Fill the 'elements' into the basis and output them at the same time.
  int n=0;
  for (int i=1; i<=h-2; i++)
  {
	  string fill=letter_line;
	  for (int j=1; j<=h-2; j++)
	  {
		  n++;
		  int remainder=n%k;
		  if (remainder==0)
			  fill[j]=letter[k-1];
		  else
	      fill[j]=letter[remainder-1];
		   
		 
	  }
  cout<<fill<<'\n';
  out_str<<fill<<'\n';
  }
  //Output the final line.
  cout<< star_line<<endl;
  out_str<< star_line<<endl;
}

void right_triangle(int k, int h, string letter, char* name)
{
  //Create the file and check whether the file is opened.
  ofstream out_str(name);
  if (!out_str.good()) {
    std::cerr << "Can't open " << name << " to write.\n";
    exit(1);
  }

  //First line, second line, final line and basis for another lines.
  string star_line(h,'*');
  string star_line1(1,'*');
  string star_line2(2,'*');
  
  cout<< star_line1<<'\n';
  out_str<< star_line1<<'\n';

  
  cout<< star_line2<<'\n';
  out_str<<star_line2<<'\n';

  //Fill the 'elements' into the basis and out put them at the same time.
  int n=0;
  for (int i=1; i<=h-3; i++)
  {		
	  string blanks(i+1,' ');
	  string fill='*'+blanks;
	  for (int j=1; j<=i; j++)
	  {
		  n++;
		  
		  int remainder=n%k;
		  if (remainder==0){
			  fill[j]=letter[k-1];fill[j+1]='*';}
		  else
		  {
	      fill[j]=letter[remainder-1];fill[j+1]='*';
		  }
	  }
   cout<<fill<<'\n';
   out_str<<fill<<'\n';
  }
  //Final line;
  cout<< star_line<<endl;
  out_str<<star_line<<endl;
}

void isosceles_triangle(int k, int h, string letter, char* name)
{
  //Create the file, and check whether the file is opened.
  ofstream out_str(name);
  if (!out_str.good()) {
    std::cerr << "Can't open " << name << " to write.\n";
    exit(1);
  }

  //Build the first line, final line and the basis for all the other lines.
  string star_line(2*h-1,'*');
  
  string blanks(h-1,' ');
  string first_line=blanks+'*';
  cout<<first_line<<'\n';
  out_str<<first_line<<'\n';
  
  //Fill the 'elements' into the basis and output them.
  int n=0;
  for (int i=1; i<=h-2; i++)
  {
	  string fill(h+i,' ');
	  fill[h+i-1]='*';
	  fill[h-i-1]='*';
	  for (int j=h-i; j<=h+i-2; j++)
	  {
		  n++;
		  int remainder=n%k;
		 if (remainder==0)
			  fill[j]=letter[k-1];
		  else
	      fill[j]=letter[remainder-1];
	  }
   cout<<fill<<'\n';
   out_str<<fill<<'\n';
  }
  //Final line.
  cout<< star_line<<endl;
  out_str<<star_line<<endl;

}

void parallelogram(int k, int h, string letter, char* name)
{	
  //Create the file so that we could use out_str to write in it.
  //Check whether the fike is opened.
  ofstream out_str(name);
  if (!out_str.good()) {
    std::cerr << "Can't open " << name << " to write.\n";
    exit(1);
  }
  
  //The first line and the nothers lines without 'elements' in it.
  string star_line(h,'*');
  string blanks(h-2,' ');
  string letter_line='*'+blanks+'*';
  
  //Output the first line.
  string move(h,' ');
  cout<<move<<star_line<<'\n';
  out_str<<move<< star_line<<'\n';

  //Fill the 'elements' into the basis and output them at the same time.
  int n=0;
  for (int i=1; i<=h-2; i++)
  {
	  string fill=letter_line;
	  for (int j=1; j<=h-2; j++)
	  {
		  n++;
		  int remainder=n%k;
		  if (remainder==0)
			  fill[j]=letter[k-1];
		  else
	      fill[j]=letter[remainder-1];
		   
		 
	  }
  string move(h-i,' ');
  cout<<move<<fill<<'\n';
  out_str<<move<<fill<<'\n';
  }
  //Output the final line.
  cout<< star_line<<endl;
  out_str<< star_line<<endl;
}
