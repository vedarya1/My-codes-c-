  class  Fraction{
  	private :
  		
  		int numerator;
  		int denominator;
  		
    public:
    	Fraction(){
    		
		}
    	
    	Fraction(int numerator,int denominator){
    		this->numerator = numerator;
    		this->denominator = denominator;
		}
		
		int getNumerator() const {
			return numerator;
		}
		
		int getDenominator() const {
			return denominator;
		}
		
		void setNumerator(int n) {
			numerator = n;
		}
		
		void setDenominator(int d) {
			denominator = d;
		}
		
		void print() const {
			cout<<this->numerator<<"/"<<denominator<<endl;
		}
		
		//to simplify using GCD
		void simplify(){
			int gcd = 1;
		    int j = min(this->numerator,this->denominator);
		    for(int i=1;i<=j;i++){
		      if(this->numerator % i ==0 && this->denominator % i ==0){
		      	gcd  = i;
			  }	
			}
			this->numerator = this->numerator/gcd;
			this->denominator = this->denominator/gcd;
		}
		
		Fraction add(Fraction const &f2){
			int lcm = denominator*f2.denominator;
			int x = lcm/denominator;
			int y = lcm/f2.denominator;
			
			int num = x*numerator + (y*f2.numerator);
			
			//numerator = num;
			//denominator = lcm;
			Fraction fNew(num,lcm);
			fNew.simplify();
			return fNew;
		}
		 
		 //operator overloading
			Fraction operator+(Fraction const &f2)const{
			int lcm = denominator*f2.denominator;
			int x = lcm/denominator;
			int y = lcm/f2.denominator;
			
			int num = x*numerator + (y*f2.numerator);
			
			//numerator = num;
			//denominator = lcm;
			Fraction fNew(num,lcm);
			fNew.simplify();
			return fNew;
		}
		
		Fraction operator*(Fraction const  &f2)const{
		     int n = numerator*f2.numerator;
			 int d = denominator*f2.denominator;
			 Fraction fNew(n,d);
			 fNew.simplify();
			 return fNew;	
		}
		
		bool operator==(Fraction const &f2)const{
			return(numerator==f2.numerator && denominator==f2.denominator);
			
		}
		
		void multiply(Fraction const &f2){
			numerator = numerator * f2.numerator;
			denominator = denominator * f2.denominator;
			
			simplify();
		}
		
		//pre-increment
		Fraction &operator++(){
			numerator = numerator + denominator;
			simplify();
			
			return *this;
		}
		
		//post-increment
		
		Fraction operator++(int){
			Fraction fNew(numerator,denominator);
			numerator = numerator + denominator;
			simplify();
			fNew.simplify();
			return fNew;
		}
		
		
		Fraction &operator+=(Fraction const &f2){
				int lcm = denominator*f2.denominator;
			int x = lcm/denominator;
			int y = lcm/f2.denominator;
			
			int num = x*numerator + (y*f2.numerator);
			
		    numerator = num;
		    denominator = lcm;
			
			simplify();
			return *this;
		}
		
		
		
		
		
		
		
		
		
		
  			
  };
