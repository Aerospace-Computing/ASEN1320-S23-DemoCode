#include<string>

class Dog{

   private:
   std::string name;
   double age;
   
   public:
   // Accessor (Get) Methods
   std::string getName() const;
   double getAge() const;
   
   //Mutator (Set) Methods;
   void setName(std::string );
   void setAge(double );

   //Function prototype For doubleAge
   // input:  double 
   // return: double
   double doubleAge(double );

};