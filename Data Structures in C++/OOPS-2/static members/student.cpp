class Student{
	
	public:
	
	int rollNumber; //non-static
	int age;
	
    static	int totalStudents; //total number of students present
    
	Student(){
		totalStudents++;
	}
	
	int getRollNumber(){
		return rollNumber;
	}
	
    static	int getTotalStudents(){
		return totalStudents;
	}
			
};

int Student :: totalStudents = 0; //initialise static data members
