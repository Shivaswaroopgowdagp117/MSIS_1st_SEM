import java.util.Scanner;
public class TestEIS{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of employees");
		int size = sc.nextInt();
		Employee[] emp= new Employee[size];
		for (int i=0;i<size;i++){
			System.out.println("Enter ID");
			int id=sc.nextInt();
			System.out.println("Enter Name");
			String empName = sc.next();
			System.out.println("Enter Designation");
			String design =sc.next();
			System.out.println("Enter Salary");
			double sal =sc.nextDouble();

		    emp[i]= new Employee(id,empName,design,sal);
		}
		for(int i=0;i<size;i++){
			emp[i].employeeDetail();
		}

	}
}