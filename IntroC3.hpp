//Couldn't get this one working. Was trying to get istream operator to worth with enum AcademicDegree type.



#include<iostream> 
#include<string>
#include<cstring>
using namespace std;


 enum AcademicDegree { none, associate, bachelor, master, doctor, professional };

   istream& operator >> (istream& is, AcademicDegree& degree) {
	   AcademicDegree a;
	   is >> a;
	   cout << "Istream a = " << a << endl;

			degree = static_cast<AcademicDegree>(a);
	return is;
}


void meetsQualifications()
{
	bool speaksFrench;
	bool speaksEnglish;
	int yearsOfExperience;
	AcademicDegree degree;


		cout << "Academic Degree?" <<endl;
		cin >> degree;
		cout << "Academic Degree = " << degree << endl;


		switch (degree)
		{
			case bachelor || master:
			cout << "Degree accepted";
			break;

		default:
			cout << "Degree not accepted. Sorry you don't meet necessary qualifications.";
			return;
		}


		cout << "Do you speak French? true or false" << endl;
		cin >> speaksFrench;

		cout << "Do you speak English? true or false" << endl;
		cin >> speaksEnglish;

		if (!speaksFrench || !speaksEnglish) {
			cout << "Sorry you don't meet necessary qualifications.";
			return;
		}

		cout << "Years of job experience?" << endl;
		cin >> yearsOfExperience;

		if (yearsOfExperience < 3 || yearsOfExperience > 10) {
			cout << "Sorry you don't meet necessary qualifications.";
			return;
		}
	cout << "You meet all qualifications.";
}