class student{
	
	public:
		
	int rollNumber;
	
	private:
		
	int age;
	
	public:
		
		//destructor
		~student(){
			cout<<"Destructiore called ! "<<endl;
		}
		
		
		//Default constructor
		student(){ //name same as class
		cout<<"constructor1 called! "<<endl;	//called when zero argument passed
		}
		
		//parameterized constructor
		student(int rollNumber){  //called when rollnumber argument passed
		    cout<<"constructor 2 called !"<<endl;
		this-> rollNumber = rollNumber;
		}
		
		student(int a,int r){
			cout<<"this : "<<this<<endl;  //holds memory address or act as pointer
			cout<<"constructor 3 called ! "<<endl;
			this-> age =a;
			this-> rollNumber = r;
		}
		
		void display(){
			//within the class accessable
			cout<<age<<" "<<rollNumber<<endl;
		}
		
		//getter
		int getAge(){
			return age;
		}
		
		//setter
		void setAge(int a, int password){
			if(password!=123){
				return;
			}
			if(a<0){
				return;
			}
			age=a;
		}
};
