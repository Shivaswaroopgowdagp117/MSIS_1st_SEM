
//class defination for Employee class
class Employee{
	// instance variables
	private int empID;
	private String empName;
	private String empDesignation;
	private double salary;

	//constructor 
	Employee(){

	}
	Employee(int empID,String empName , String empDesignation , double salary){
		this.empID = empID;
		this.empName =empName;
		this.empDesignation = empDesignation;
		this.salary = salary;
	}
	
	public void employeeDetail(){
		System.out.println("ID :" + empID);
		System.out.println("Name:" +empName);
		System.out.println("Designation:" +empDesignation);
		System.out.println("salary:" + salary);
}
//search employee
public boolean searchemployee(int empID){
	if(this.empID==empID)
		return true;
	return false;
     }
 /*public String searchempname(String name){
 	if (this.name==name)
 		return true;
 	return false;
 }
 public String searchempDesignation(String Designation){
 	if(this.designation==designation)
 		return true ;
 	return false;
 } 
 public double searchSalary(double Salary){
 	if(this.salary==salary)
 		return true;
 	return false;
 }*/
 public double hikeSalary(){
 	return (this.salary*1.1);
 }
}
