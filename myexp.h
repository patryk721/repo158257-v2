#ifndef MYEXP_H
#define MYEXP_H


/ *!
  Klasa MyExp
* /
class MyExp
{
	
	
    public:
	/**metoda publiczna void MyExp()*/
        void MyExp();
		/**metoda publiczna  ~MyExp()*/
        void ~MyExp();
		/**metoda publiczna void MyExp(double x)*/
        void MyExp(double x);
		/**metoda publiczna void MyExp(const MyExp &obj)*/
        void MyExp(const MyExp &obj);
		/**metoda publiczna double value()*/
        double value();
		/**metoda publiczna void setX(double)*/
        void setX(double);
		/**metoda publiczna double getX()*/
        double getX();
	

        private:
	/**Funkcja value ma zwracać wartość \f$e^x\f$
	, jest wyliczona na podstawie pierwszych 10 wyrazów szeregu
	* \f$e^x=\sum_{k=0}^\infty=\frac{x^k}{k!}\f$ 
	*  \image html funkcja.png

*/
            double mX();
};

#endif // MYEXP_H
			