
#ifdef Myxmp_h
#define Myxmp_h



/*!
		Klasa MyExp
		*/
		
		class MyExp{
			
			public :
			/** metoda publiczna void MyExp()*/
			void MyExp();
			/** metoda publiczba void MxExp(double x)*/
			void MyExp(double x);
			/** metoda publiczba void MyExp ( const MyExp &obj)*/
			void MyExp ( const MyExp &obj);
			/** metoda publiczna void ~MyExp()*/
			void ~MyExp();
			/** metoda publiczna double value()*/
			double value();
			/** metoda publiczna setX(double)*/
			void setX(double);
			/** metoda publiczna double getX()*/
			double getX();
			
			private:
			/**Funkcja value zwraca wartość \f$e^x\f$
			, jest wiliczana na podstawie pierwszych 10 wyrazów szeregu
			* /*\f$e^x=\sum_{k=0}^\infty=\frac{x^k}{k!}\f$ \ image html funkcja.png
			*/
			
				double mX();
				
		};
		
		#endif // Myxmp_h
			