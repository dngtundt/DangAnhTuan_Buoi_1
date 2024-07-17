//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//typedef struct {
//	char full_name[100];
//	char birth_date[11]; // dd/mm/yyyy
//	char gender[10];
//} Employee;
//
//int calculate_age(char* birth_date, int current_year) {
//    int day, month, year;
//    sscanf(birth_date, "%d/%d/%d", &day, &month, &year);
//    int age = current_year - year;
//    if (month > 7 || (month == 7 && day > 10)) {
//        age--;
//    }
//    return age;
//}
//    // caculate age
//void retirement_time(Employee employee) {
//    int current_year = 2024; // recent year is 2024
//    int day, month, year;
//    sscanf(employee.birth_date, "%d/%d/%d", &day, &month, &year);
//
//    int age = calculate_age(employee.birth_date, current_year);
//
//    // check sex and age
//    if ((strcmp(employee.gender, "men") != 0 && strcmp(employee.gender, "women") != 0)) {
//        printf("Lỗi: %s\n", "errcode");
//        return;
//    }
//
//    if (age < 18 || (strcmp(employee.gender, "men") == 0 && age > 62) || (strcmp(employee.gender, "women") == 0 && age > 60)) {
//        printf("err number: %d\n", 101);
//        return;
//    }
//
//    int retirement_year;
//    if (strcmp(employee.gender, "men") == 0) {
//        retirement_year = year + 62;
//    }
//    else {
//        retirement_year = year + 60;
//    }
//
//    printf("%s, sex %s, date %s. now (year %d) %s is %d years old. time %s retied is month %02d/%d.\n",
//        employee.full_name, employee.gender, employee.birth_date, current_year, employee.full_name, age,
//        employee.full_name, month, retirement_year);
//}
//
//int main() {
//    Employee employee;
//
//    printf("input name: ");
//    fgets(employee.full_name, sizeof(employee.full_name), stdin);
//    employee.full_name[strcspn(employee.full_name, "\n")] = 0; // del char newline
//
//    printf("input date (dd/mm/yyyy): ");
//    fgets(employee.birth_date, sizeof(employee.birth_date), stdin);
//    employee.birth_date[strcspn(employee.birth_date, "\n")] = 0; // del char newline
//
//    printf("input sex (nam/nữ): ");
//    fgets(employee.gender, sizeof(employee.gender), stdin);
//    employee.gender[strcspn(employee.gender, "\n")] = 0; // del char newline
//
//    // calculate time retierment
//    retirement_time(employee);
//
//    return 0;
//}