#include <iostream>

using namespace std;

class Line {
   public:
      void setLength( double len );
      double getLength( void );
      Line();  // This is the constructor

   private:
      double length;
};

// Member functions definitions including constructor
Line::Line(void) {
   cout << "helloo" << endl;
}

void Line::setLength( double len ) {
   length = len;
}

double Line::getLength( void ) {
   return length;
}

// Main function for the program
int main( ) {
   Line line;
   Line line1;

   // set line length
   line1.setLength(9.0);
   line.setLength(6.0);
   cout << "Length of line : " << line.getLength() <<endl;
    cout << "Length of line 1: " << line1.getLength() <<endl;

   return 0;
}
