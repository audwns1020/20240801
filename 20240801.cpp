// �Լ�2 ����1
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//
//int main()
//{
//	printf("����� �����?\n");
//	printf("%c%c%c%c%c\n", getA(), getP(), getP(), getL(), getE());
//
//	return 0;
//}

// �Լ�2 ����2
//#include <stdio.h>
//
//char getA() { return 'A'; }
//char getB() { return 'B'; }
//char getE() { return 'E'; }
//char getF() { return 'F'; }
//char getL() { return 'L'; }
//char getG() { return 'G'; }
//char getP() { return 'P'; }
//char getT() { return 'T'; }
//
//int main()
//{	
//	printf("������ �����?\n");
//	printf("%c%c%c%c\n", getL(), getE(), getF(), getT());
//
//	return 0;
//}

// �Լ�3
//#include <stdio.h>
//
//void makeHamburg(int count)
//{
//	printf("�ܹ��� %d�� ���Խ��ϴ�.\n", count);
//}
//
//int main()
//{
//	int ham_count;
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_count);
//
//	return 0;
//}

//#include <stdio.h>
//
//void print_Number();
//void print_Number2(int num);
//void print_Number4_charB(int num, char b);
//void print_characterX(char x);
//
//int main()
//{
//	print_Number();
//	print_Number2(2);
//	print_Number4_charB(4, 'b');
//	print_characterX('x');
//
//	return 0;
//}
//
//void print_Number()
//{
//	printf("Number\n");
//}
//
//void print_Number2(int num)
//{
//	printf("Number : %d\n", num);
//}
//
//void print_Number4_charB(int num, char b)
//{
//	printf("Number : %d, character : %c\n", num, b);
//}
//
//void print_characterX(char x)
//{
//	printf("character : %c\n", x);
//}

//#include <stdio.h>
//
//char rightType(char type)
//{
//	if (type != 'A' && type != 'B') {
//		printf("�ֹ��� �� ���� �ܹ����Դϴ�.\n");
//		return 'C';
//	}
//	return type;
//}
//
//void makeHamburg(char type, int count)
//{
//	if (type == 'A') {
//		printf("AŸ�� �ܹ��� ");
//	}
//	else {
//		printf("BŸ�� �ܹ��� ");
//	}
//	printf("%d�� ���Խ��ϴ�.\n", count);
//}
//
//int main()
//{
//	char ham_type;
//	int ham_count;
//
//	printf("���Ÿ�� �ܹ��Ÿ� ");
//	printf("�ֹ��Ͻðڽ��ϱ�?(AorB)\n");
//	scanf("%c", &ham_type);
//
//	if (rightType(ham_type) == 'C') {
//		return 0;
//	}
//	printf("�ܹ��� �� �� �ֹ��Ͻðڽ��ϱ�?\n");
//	scanf("%d", &ham_count);
//	makeHamburg(ham_type, ham_count);
//
//	return 0;
//}

//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	printf("��� : %d\n", data1);
//	
//	return 0;
//}

// �Լ�3 ����1
//#include <stdio.h>
//
//int add_number(int num1, int num2)
//{
//	int retVal = num1 + num2;
//	return retVal;
//}
//
//int sub_number(int num1, int num2)
//{
//	int retVal = num1 - num2;
//	return retVal;
//}
//
//int mul_number(int num1, int num2)
//{
//	int retVal = num1 * num2;
//	return retVal;
//}
//
//int divi_number(int num1, int num2)
//{
//	int retVal = num1 / num2;
//	return retVal;
//}
//
//int main()
//{
//	int a = 1, b = 2;
//	int data1 = add_number(a, b);
//	int data2 = sub_number(a, b);
//	int data3 = mul_number(a, b);
//	int data4 = divi_number(a, b);
//
//	printf("���� ��� : %d\n", data1);
//	printf("���� ��� : %d\n", data2);
//	printf("���� ��� : %d\n", data3);
//	printf("������ ��� : %d\n", data4);
//
//	return 0;
//}

//#include <stdio.h>
//
//int minus(int n)
//{
//	if (n <= 1) return -1;
//	return minus(n - 1) - 1;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", minus(n));
//
//	return 0;
//}

//#include <stdio.h>
//
//void printNumber(int n)
//{
//	if (n <= 0) return;
//	printf("%d ", n);
//	printNumber(n - 1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printNumber(n);
//
//	return 0;
//}

// ���ȣ��
//#include <stdio.h>
//
//int fibonacci(int n)
//{
//	printf("%d ", n);
//	if (n <= 2) return 1;
//	printf("(%d)\n", n);
//	return fibonacci(n - 1) + fibonacci(n - 2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("\n%d\n", fibonacci(n));
//
//	return 0;
//}

// ���ȣ�� ����1
//#include <stdio.h>
//
//int add_function(int n)
//{
//	if (n <= 1) return 1;
//	return add_function(n - 1) + n;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("1 ~ %d������ ���� %d�Դϴ�.", n, add_function(n));
//
//	return 0;
//}

// ����ü
//#include <stdio.h>
//
//struct BYTE {
//	char a;
//	char b;
//};
//
//int main()
//{
//	struct BYTE a;
//	a.a = 10;
//	a.b = 20;
//	printf("%d %d", a.a, a.b);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct student {
//	int id;
//	char* name;
//	float aver;
//};
//
//int main()
//{
//	struct student s = { 1, (char*)"�̻�", 90.5 };
//
//	printf("���̵� : %d\n", s.id);
//	printf("�̸� : %s\n", s.name);
//	printf("����� : %.1f\n", s.aver);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct GUN {
//	char name[10];
//	float bullet_type;
//	bool scope;
//	bool muzzle;
//	bool handgrip;
//	bool magazine;
//	bool tactical_stock;
//	int magazine_size;
//};
//
//int main()
//{
//	struct GUN M416 = { "M416", 5.56, true, true, true, true, true, 30 };
//
//	printf("ȭ��� : %s\n", M416.name);
//	printf("ź ���� : %.2lf\n", M416.bullet_type);
//	printf("���������� : %s", M416.scope ? "true" : "false");
//
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;			// ������� S A B C D
//	char personCode;	// �����ڵ�
//	char mileage;		// ���ϸ���
//};
//
//int main()
//{
//	int sizedummy = sizeof(__dummy__);
//	int sizevip = sizeof(VIP_PERSON);
//	printf("���� ũ�� : %d\n", sizedummy);
//	printf("VIP���� ũ�� : %d\n", sizevip);
//
//	return 0;
//}

//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//struct VIP_PERSON {
//	char grade;			// ������� S A B C D
//	char personCode;	// �����ڵ�
//	char mileage;		// ���ϸ���
//};
//
//int main()
//{
//	VIP_PERSON lee_sam;
//	printf("���� ����� �Է��ϼ���\n");
//	while (true) {
//		scanf("  %c", &lee_sam.grade);
//		if (lee_sam.grade == 'S' || 'A' <= lee_sam.grade && lee_sam.grade <= 'D')
//			break;
//	}
//	int tmp;
//	printf("���� �ڵ带 �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.personCode = (char)tmp;
//	printf("���ϸ����� �Է��ϼ���\n");
//	scanf("%d", &tmp);
//	lee_sam.mileage = (char)tmp;
//	printf("%c %d %d\n", lee_sam.grade, lee_sam.personCode, lee_sam.mileage);
//
//	return 0;
//}

// ����ü ����1
//#include <stdio.h>
//
//struct __dummy1__ {
//	float data_0;
//	char data_1;
//};
//
//struct __dummy2__ {
//	char data_0;
//	char data_1;
//	char data_2;
//	char data_3;
//	char data_4;
//	char data_5;
//	char data_6;
//	char data_7;
//};
//
//int main()
//{
//	int sizedummy1 = sizeof(__dummy1__);
//	int sizedummy2 = sizeof(__dummy2__);
//	printf("���� ũ�� : dummy1 = %d, dummy2 = %d\n", sizedummy1, sizedummy2);
//
//	return 0;
//}

// ����ü ����2
//#include <stdio.h>
//
//struct __dummy__ {
//	int data_0;
//	char data_1;
//	float data_2;
//};
//
//int main()
//{
//	struct __dummy__ dummy;
//
//	printf("���� ���� �Ǽ� ������� ���� �Է��ϼ���.>> ");
//	scanf("%d %c %f", &dummy.data_0, &dummy.data_1, &dummy.data_2);
//
//	printf("%d %c %f", dummy.data_0, dummy.data_1, dummy.data_2);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	short pt;
//	scanf("%hd", &pt);
//	printf("�� : %hd\n", pt);
//
//	return 0;
//}

//#include <stdio.h>
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printf("�� : %hd\n", pt);
//
//	return 0;
//}

//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("�� : %hd\n", pt2);
//}

// ���� 2-1
//#include <stdio.h>
//
//short getDefaultData();
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = pt + 5;
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//void printData(short pt2)
//{
//	printf("�� : %hd\n", pt2);
//}

// ���� 2-2
//#include <stdio.h>
//
//short getDefaultData();
//short add_5(short pt);
//void printData(short pt2);
//
//int main()
//{
//	short pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add_5(pt);
//	printData(pt);
//
//	return 0;
//}
//
//short getDefaultData()
//{
//	short pt1;
//	scanf("%hd", &pt1);
//
//	return pt1;
//}
//
//short add_5(short pt)
//{
//	pt = pt + 5;
//
//	return pt;
//}
//
//void printData(short pt2)
//{
//	printf("�� : %hd\n", pt2);
//}

// ���� 2-3 **�߿�**
//#include <stdio.h>
//
//struct POINT {
//	short x, y;
//};
//
//POINT getDefaultData();
//POINT add_5(POINT pt);
//void printData(POINT pt2);
//
//int main()
//{
//	POINT pt;
//	pt = getDefaultData();
//	printData(pt);
//
//	pt = add_5(pt);
//	printData(pt);
//
//	return 0;
//}
//
//POINT getDefaultData()
//{
//	POINT pt1;
//	scanf("%hd %hd", &pt1.x, &pt1.y);
//
//	return pt1;
//}
//
//POINT add_5(POINT pt2)
//{
//	pt2.x += 5;
//	pt2.y += 5;
//
//	return pt2;
//}
//
//void printData(POINT pt3)
//{
//	printf("x �� : %hd / y �� : %hd\n", pt3.x, pt3.y);
//}

// �迭
//#include <stdio.h>
//
//int main()
//{
//	char arr[3];
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[4];
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char alpah[4] = { 'a', 'b', 'c', 'd' };
//	printf("%c%c%c%c\n", alpah[0], alpah[1], alpah[2], alpah[3]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	printf("num�� �ȿ� ����ִ� ");
//	printf("1��° ���ڴ�? %d\n", num[1]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//
//	printf("%d��°�� %d ����\n", 0, num[0]);
//	printf("%d��°�� %d ����\n", 1, num[1]);
//	printf("%d��°�� %d ����\n", 2, num[2]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	int k = 0;
//
//	printf("%d��°�� %d ����\n", k, num[k]);	k++;
//	printf("%d��°�� %d ����\n", k, num[k]);	k++;
//	printf("%d��°�� %d ����\n", k, num[k]);	k++;
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[3] = { 3, 6, 9 };
//	for (int k = 0; k < 3; k++) {
//		printf("%d��°�� %d ����\n", k, num[k]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[3];
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}

// �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int num[5];
//
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &num[i]);
//	}
//	printf("\n\n");
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

// �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	int num[10];
//	int input;
//
//	printf("���� 10���� �Է����ּ���.\n");
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &num[i]);
//	}
//
//	int flag = 1;
//	while (flag) {
//		printf("���� �ϳ��� �Է����ּ���. ���� �Է��� 10���� ���� �� �ϳ��� �����մϴ�.\n");
//		scanf("%d", &input);
//
//		for (int i = 0; i < 10; i++) {
//			if (input == num[i]) {
//				printf("exist\n");
//				flag = 0;
//			}
//		}
//	}
//
//	return 0;
//}

// swap�� �߸��� ����
//#include <stdio.h>
//
//int main()
//{
//	int left = 3, right = 5;
//	left = right;
//	right = left;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//
//	return 0;
//}

// swap�� �ùٸ� ����1
//#include <stdio.h>
//
//int main()
//{
//	int left = 3, right = 5;
//	int temp;
//	temp = left;
//	left = right;
//	right = temp;
//	printf("left = %d, ", left);
//	printf("right = %d\n", right);
//
//	return 0;
//}

// swap�� �ùٸ� ����2
//#include <stdio.h>
//
//int main()
//{
//	int num[2] = { 10, 3 };
//	int temp;
//	temp = num[0];
//	num[0] = num[1];
//	num[1] = temp;
//	printf("num[0] = %d, ", num[0]);
//	printf("num[1] = %d\n", num[1]);
//
//	return 0;
//}

// ���� ����1
//#include <stdio.h>
//
//void swap(int &x, int &y);
//
//int main()
//{
//	int num[4] = { 4, 3, 1, 2 };
//
//	swap(num[0], num[2]);
//	swap(num[1], num[3]);
//	swap(num[2], num[3]);
//
//	printf("������������ ������ ��� : ");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}
//
//void swap(int &x, int &y)
//{
//	int temp;
//
//	temp = x;
//	x = y;
//	y = temp;
//}

// ���� ����2
//#include <stdio.h>
//
//int main()
//{
//	int num[4];
//	int temp;
//
//	printf("������ �� �� ���� �Է��ϼ���.\n");
//	for (int i = 0; i < 4; i++) {
//		scanf("%d", &num[i]);
//	}
//	
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3 - i; j++) {
//			if (num[j] > num[j + 1]) {
//				temp = num[j];
//				num[j] = num[j + 1];
//				num[j + 1] = temp;
//			}
//		}
//	}
//
//	printf("������������ ������ ��� : ");
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//
//	return 0;
//}

// 1���� �迭, if��
//#include <stdio.h>
// �� ���� �߿� ���� ū ��
//int main()
//{
//	int one = 1, two = 2;
//	int max = 0;
//
//	if (one > two) max = one;
//	else
//		max = two;
//
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
// �� ���� �߿� ���� ū ��
//int main()
//{	// �� �ٲ㼭 �����غ���
//	int one = 1, two = 3, three = 2;
//	int max = 0;
//
//	if (one > two) {
//		if (one > three)
//			max = one;
//		else
//			max = three;
//	}
//	else {
//		if (two > three)
//			max = two;
//		else
//			max = three;
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

//#include <stdio.h>
//// N�� ���� �߿� ���� ū ��
//int main()
//{	// array(=�迭)�� ���ڷ� arr�̳� a�� ���
//	int arr[3] = { 1, 3, 2 };
//	int max = arr[0];
//
//	for (int i = 1; i < 3; i++) {
//		if (max < arr[i])
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//
//	return 0;
//}

// 1���� �迭, if�� ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1, 3, 6, 4, 2 };
//	int max = arr[0];
//	int min = arr[0];
//	int sum = arr[0];
//	double avg = 0;
//
//	for (int i = 1; i < 5; i++) {
//		if (max < arr[i])
//			max = arr[i];
//		if (min > arr[i])
//			min = arr[i];
//
//		sum += arr[i];
//	}
//
//	avg = (double)sum / 5;
//
//	printf("�ִ밪 : %d\n", max);
//	printf("�ּҰ� : %d\n", min);
//	printf("���� : %d\n", sum);
//	printf("��� : %.2lf\n", avg);
//
//	return 0;
//}

// 1���� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 1, 1, 4, 5, 6, 2, 3, 3, 4, 1 };
//	int num[7] = {};	// 0��° �ε����� ���� �ʰ�, 1-6��° �ε����� ��
//
//	// * num�� �ε����� arr[i]�� �����ν�, �ֻ��� ���� ���� Ƚ���� ������Ŵ (if���� �� �ʿ� X)
//	for (int i = 0; i < 10; i++) {
//		num[arr[i]] += 1;
//	}
//
//	printf("�� �ֻ��� ���� ���� Ƚ��\n");
//	for (int i = 1; i <= 6; i++) {
//		printf("%d : %d��\n", i, num[i]);
//	}
//
//	return 0;
//}

// 2���� �迭
//#include <stdio.h>
//
//int main()
//{
//	char arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	printf("%d\n", sizeof(arr));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr2d[5][4] = {
//	   // [0] [1] [2] [3]
//		{ 662, 7, 4, 74 },		// arr2d[0]
//		{ 8, 396, 299, 95 },	// arr2d[1]
//		{ 66, 73, 86, 0 },		// arr2d[2]
//		{ 116, 26, 586, 42 },	// arr2d[3]
//		{ 84, 7, 41, 11 }		// arr2d[4]
//	};
//
//	// 2���� �迭�� ��Ҹ� �ϳ��� ���
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 4; j++) {
//			printf("%3d ", arr2d[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[3][3] = {
//		{ 2, 4, 6 },
//		{ 8, 10, 12 },
//		{ 14, 16, 18 }
//	};
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%3d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	const int m = 4;
//	const int n = 3;
//	long data[m][n];
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = i + j;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	int num = 1;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����3
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	int num = 1;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = m - 1; i >= 0; i--) {
//		for (int j = n - 1; j >= 0; j--) {
//			printf("%3d ", data[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// 2���� �迭 ����4
//#include <stdio.h>
//
//int main()
//{
//	const int m = 5;
//	const int n = 5;
//	long data[m][n];
//	long data2[m * n];
//	int num = 1;
//	int str = 0;
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data[i][j] = num;
//			num += 1;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			data2[str] = data[i][j];
//			str++;
//		}
//	}
//
//	for (int i = 0; i < m * n; i++) {
//		printf("%3d ", data2[i]);
//	}
//
//	return 0;
//}

// 2���� �迭 ����5
//#include <stdio.h>
//
//int main()
//{
//	int n;
//	int arr[10] = {};
//	char arr2[10][10] = {};
//
//	printf("10 �̸��� ���� n�� �Է��ϰ� n����ŭ�� ���ڸ� �Է��ϼ���.>> ");
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < arr[i]; j++) {
//			arr2[j][i] = '*';
//		}
//	}
//
//	// *** 5-4 �߿� ***
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (arr2[i][j] == 0)
//				printf(" ");
//			else
//				printf("%c", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

// 2���� �迭 ����6
// ** ó������ �� �����Ϸ����� ����, �ϳ��� �������� �ϸ鼭 ����� ���� �Ŀ�, ���� �� �ִ� �κ� ���̸鼭 �����ϴ� ���� �߿� **
//#include <stdio.h>
//
//int main()
//{
//	const int n = 5;		// ���� n�� �ٲ㵵 5x5�� �ƴ϶� nxn�� ����� �� ����
//	long arr[n][n] = {};
//	int num = 1;
//	int x = -1, y = 0;
//	int count = n;
//	int index = 1;
//
//	while (true) {
//		// �ݺ��� ����, 2���� �迭�� �ε����� ���� �ٸ� ������ �����ϴ� ���� �߿�
//		for (int i = 0; i < count; i++) {
//			x += index;
//			arr[y][x] = num;
//			num++;
//		}
//		if (--count == 0)
//			break;
//
//		for (int i = 0; i < count; i++) {
//			y += index;
//			arr[y][x] = num;
//			num++;
//		}
//		// ** �߿� **
//		index = -index;
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

// ������
//#include <stdio.h>
//
//int main()
//{
//	int b = 100;
//	int* pB = &b;
//
//	printf("b = %d\n", b);
//	printf("b = %x\n", &b);
//	printf("b = %d\n", *pB);
//	printf("b = %x\n", pB);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char a = 'A';
//	char* pA = &a;
//
//	int b = 100;
//	int* pB = &b;
//
//	double c = 3.14;
//	double* pC = &c;
//
//	printf("pA�� ũ�� : %d byte\n", sizeof(pA));
//	printf("pB�� ũ�� : %d byte\n", sizeof(pB));
//	printf("pC�� ũ�� : %d byte\n", sizeof(pC));
//
//	printf("*pA�� ũ�� : %d byte\n", sizeof(*pA));
//	printf("*pB�� ũ�� : %d byte\n", sizeof(*pB));
//	printf("*pC�� ũ�� : %d byte\n", sizeof(*pC));
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "programming";
//	char* ptr1, * ptr2;
//
//	ptr1 = &str[0];
//	ptr2 = &str[7];
//
//	printf("�� ������ ���� ���� %d �Դϴ�.\n", ptr2 - ptr1);
//
//	printf("%x\n", ptr1 + 1);
//	printf("%c\n", *(ptr1 + 1));
//
//	printf("%x\n", ptr1 + 3);
//	printf("%c\n", *(ptr1 + 3));
//
//	return 0;
//}

// ������ ����
//#include <stdio.h>
//
//int main()
//{
//	int* numPtr;
//	int num1 = 10;
//	int num2 = 20;
//
//	numPtr = &num1;
//	printf("%d\n", *numPtr);
//
//	numPtr = &num2;
//	printf("%d\n", *numPtr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int number[2] = { 1, 2 };
//	void* p = number;
//
//	// ** void �����ͷ� �����Ͽ����� (int*)���� ĳ�����������.
//	printf("%d\n", *(int*)p);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int fibonacci[5] = { 3, 5, 8, 13, 21 };
//	int* ptrFibo;
//	ptrFibo = fibonacci;
//
//	int* ptrFibo1 = &fibonacci[1];
//	int* ptrFibo4 = fibonacci + 4;
//	printf("> %d - %d", *ptrFibo4, *ptrFibo1);
//	// 4�������� 1������ ���ٴ� �ǹ� 4 - 1 = 3
//	printf(" >> %d\n", ptrFibo4 - ptrFibo1);
//
//	printf("%d ", ptrFibo[1]);
//	printf("%d ", ptrFibo1[0]);
//	printf("%d ", ptrFibo4[-1]);
//
//	return 0;
//}

// ������ ����
//#include <stdio.h>
//
//int main()
//{
//	int numArr[5] = { 11, 22, 33, 44, 55 };
//	int* numPtrA;
//	void* ptr;
//
//	numPtrA = &numArr[2];
//	ptr = numArr;
//
//	printf("%d\n", *(numPtrA - 1));		// 1. numPtrA ����Ͽ� 22���
//	printf("%d\n", *((int*)ptr + 4));	// 2. ptr ����Ͽ� 55���
//
//	return 0;
//}

// ������ ����1
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = {};
//	int* ptr;
//
//	printf("������ �� 5���� �Է��ϼ���.\n");
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//	ptr = arr;
//
//	ptr = ptr + 2;
//
//	printf("%d\n", *ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 2, 4, 6, 8, 10 };
//	int* p = &arr[0];
//
//	for (int i = 0; i < 5; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int arr[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } };
//	int* p = arr[0];
//	for (int i = 0; i < 6; i++) {
//		printf("%d ", *p++);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int num[4] = { 1, 2, 3, 4 };
//	int* pt = num;					// ������ pt�� �迭�� 1��° ��Ҹ� ����Ŵ = 1
//	pt++;							// ������ pt�� �迭�� 2��° ��Ҹ� ����Ŵ = 2
//	*pt++ = 5;						// ������ pt�� �迭�� 2��° ��Ҹ� 5�� �ٲٰ� 3��° ��Ҹ� ����Ŵ
//	*pt++ = 10;						// ������ pt�� �迭�� 3��° ��Ҹ� 10���� �ٲٰ� 4��° ��Ҹ� ����Ŵ
//	pt--;							// ������ pt�� �迭�� 4��° ��ҿ��� 3��° ��Ҹ� ����Ŵ
//	*pt++ += 20;					// ������ pt�� �迭�� 3��° ��ҿ� 20�� ���� ��, 4��° ��Ҹ� ����Ŵ
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", num[i]);
//	}
//	printf("\n");
//	// ��� ���� ���������� 1 5 30 4�� ��µ�.
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
	// �ѱ��� �⺻������ 2����Ʈ���ε�, ������ ptr�� 7��° ��� ���ķ� ����ؾ���.
	// ������ ���ķ� ����� �ؾ��ϳ�, �����̽���(����)�� ?�� ����ϰ� �� ���ķδ� ��� ���ڰ� ��µ�.
//	char str[] = "������ ��� : ���ʺ��� ������ ������ �� �� ���� ��Ȳ�� ���������� �̸��� ��.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", ptr);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	char str[] = "������ ��� : ��� �� ������ ������ ��忡���� �ƹ��� �پ ����̶� ��⿡�� �̱� �� ���ٴ� ���� ����.";
//	char* ptr = &str[7];
//
//	printf("%s\n\n", str);
//	str[15] = 'a';				// ��� ������ ������ 15��° ���. ������ 'a'�� �ٲ�.
//	str[23] = 'b';				// '��' �̶�� ���ڰ� 23, 24��° ��Ҹ� ��ƸԴµ�, 23��° ��Ҹ� b�� �ٲ�.
//	str[25] = 'c';				// '��' �̶�� ���ڿ��� 24��° ��Ұ� ���µ�, 25��° ���(����)�� c�� �ٲٰ�,
//	printf("%s\n\n", ptr);		// ���� 24��° ��ҿ� �������� c�� ��µ��� �ʰ� ?�� ��µ�.
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����1
//#include <stdio.h>
//
//int main()
//{
//	int num = 1;
//	int arr[100] = {};
//
//	for (int i = 0; i < 100; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[99];
//
//	for (int i = 99; i >= 0; i--) {
//		printf("%3d ", *ptr);
//		ptr--;
//	}
//
//	return 0;
//}

// �����͸� �̿��� �迭 ����2
//#include <stdio.h>
//
//int main()
//{
//	const int index = 100;
//	int num = 1;
//	int arr[index] = {};
//
//	for (int i = 0; i < index; i++) {
//		arr[i] = num;
//		num++;
//	}
//
//	int* ptr = &arr[index / 2];
//
//	// �� ���ķδ� arr �迭 ���� ����.
//	// ** �߿� **
//	for ( ; *ptr != index / 2; ptr++) {
//		printf("%3d ", *ptr);
//		if (*ptr == index) {
//			ptr -= index;
//		}
//	}
//
//	return 0;
//}

// string �Լ�
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "memmove can be very useful......";
//	// 'v' ��ġ���� 11����Ʈ ��ŭ�� 'very useful'�� 'u' ��ġ���� 11����Ʈ ��ŭ �����Ѵ�.
//	// ��� : memmove can be very useful.
//	memmove(str + 20, str + 15, 11);
//	puts(str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//struct mydata
//{
//	int a;
//	char b[25];
//};
//
//int main()
//{
//	char buf[5];
//	memset(buf, '1', 5);
//	printf("%s\n", buf);
//
//	// 0x00 = NULL
//	buf[4] = 0x00;
//	printf("%s\n", buf);
//
//	struct mydata data;
//	memset((void*)&data, 0x00, sizeof(data));
//	data.b[0] = 'k';
//	printf("%d - %s\n", data.a, data.b);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char* ptr1 = (char*)"coding";
//	char* ptr2 = (char*)"coding";
//	char* ptr3 = (char*)"coding.ne.kr";
//	char* ptr4 = (char*)"ne.kr";
//	char* ptr5 = (char*)"abcd";
//
//	// ������ strlen��ŭ ���ذ�.
//	printf("%s with %s = %d\n", ptr1, ptr2, memcmp(ptr1, ptr2, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr1)));
//
//	printf("%s with %s (ptr3 size) = %d\n", ptr1, ptr3, memcmp(ptr1, ptr3, strlen(ptr3)));
//
//	printf("%s with %s = %d\n", ptr1, ptr4, memcmp(ptr1, ptr4, strlen(ptr1)));
//
//	printf("%s with %s (ptr1 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr1)));
//
//	printf("%s with %s (ptr5 size) = %d\n", ptr1, ptr5, memcmp(ptr1, ptr5, strlen(ptr5)));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	int src_data[10] = { 0, 1, 2, 3, 4, 5 };
//	int dst_data[10] = { 10, 20, 30, 40, 50 };
//	// src_data�� ���� 4��(32����Ʈ)�� dst_data ���� 4���� �����Ѵ�.
//	memcpy(dst_data, src_data, sizeof(int) * 4);
//
//	printf("%d %d %d %d %d\n", src_data[0], src_data[1], src_data[2], src_data[3], src_data[4]);
//
//	// ��� : 0 1 2 3 50
//	printf("%d %d %d %d %d\n", dst_data[0], dst_data[1], dst_data[2], dst_data[3], dst_data[4]);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[20] = "coding";
//
//	strcat(str, ".ne.kr");
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[10];
//
//	scanf("%s", str);
//
//	printf("�Է��� ���ڿ� : %s\n", str);
//	printf("���ڿ��� ���� : %d\n", strlen(str));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a sample string";
//	char* pch;
//	printf("Looking for the 's' character in \"%s\"...\n", str);
//
//	pch = strchr(str, 's');
//
//	// 4, 7, 11, 18����Ʈ �ڸ��� s�� ����.
//	// pch�� ó���� &str[3] ����, str�� &str[0] ������.
//	// pch - str + 1�� �ϰ� �Ǹ� 4�� ����.
//	// �׷��� �� ��, pch�� pch + 1, �� &str[4] ��ġ���� �����ؼ� 's'�� ã��.
//	// �� �۾��� pch�� NULL�� ������ �ݺ�.
//	// �׷��� �Ǹ� �� 's'�� ��ġ�� ����ϰ� pch�� NULL�̸� �ݺ����� ���������� ����.
//	while (pch != NULL) {
//		printf("found at %d\n", pch - str + 1);
//		pch = strchr(pch + 1, 's');
//	}
//	
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char* pch;
//
//	// pch�� &str[10] ����
//	pch = strstr(str, "simple");
//	// 'sample'�� pch ��ġ���� 6����Ʈ��ŭ ����.
//	// 'simple' -> 'sample'
//	strncpy(pch, "sample", 6);
//
//	printf("%s\n", str);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	const char* str1 = "LPUX";
//	const char* str2 = "HINUX";
//	const char* str3 = "SOLARIS";
//
//	// str1�� ù ��° ���� 'L'�� str2�� ù ��° ���� 'H'���� ũ�Ƿ� 1�� ����
//	printf("s1[%-7s], s2[%-7s] => ret = [%2d]\n", str1, str2, strcmp(str1, str2));
//
//	// str2�� ù ��° ���� 'H'�� str3�� ù ��° ���� 'S'���� �����Ƿ� -1�� ����
//	printf("s2[%-7s], s3[%-7s] => ret = [%2d]\n", str2, str3, strcmp(str2, str3));
//
//	// str3�� ù ��° ���� 'S'�� str1�� ù ��° ���� 'L'���� ũ�Ƿ� 1�� ����
//	printf("s3[%-7s], s1[%-7s] => ret = [%2d]\n", str3, str1, strcmp(str3, str1));
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buf[25];
//
//	strcpy(buf, "hello world");
//	printf("%s\n", buf);
//	// ���ڿ� �迭 buf�� 'hello world'�� ����� ��, 'www w'�� buf�� 5����Ʈ��ŭ ������.
//	strncpy(buf, "www world", 5);
//	printf("%s\n", buf);
//
//	return 0;
//}

// string �Լ� ����1
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char buff[100];
//	char search;
//	char* q;
//
//	printf("���ڿ��� �Է����ּ���>> ");
//	// gets_s�� ���� ó������ ���ֹǷ�
//	gets_s(buff);
//
//	while (true) {
//		printf("�˻��� ���ڸ� �Է����ּ���(���� : 0)>> ");
//		// %c �տ� ������ ó�����־�� ��.
//		scanf(" %c", &search);
//
//		q = strchr(buff, search);
//
//		if (search == '0') {
//			printf("\n���� �˻� ���α׷��� �����մϴ�.\n");
//			break;
//		}
//		if (q != NULL) {
//			printf("\n�˻��� ���ڰ� ���ڿ��� �ֽ��ϴ�!\n");
//			while (q != NULL) {
//				printf("%d��°�� �˻��� ���ڰ� �ֽ��ϴ�.\n", q - buff + 1);
//				q = strchr(q + 1, search);
//			}
//			printf("\n");
//		}
//		else {
//			printf("\n�˻��� ���ڰ� ���ڿ��� �����ϴ�...��.��\n\n");
//		}
//	}
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int parsing(char* String, int* data)
//{
//	char* p;
//	int cnt;
//
//	cnt = 0;
//	// strtok�� �̿��ؼ� String ���ڿ��� _ �� ����
//	p = strtok(String, "_");
//	while (p) {
//		// atoi�� �̿��ؼ� ���е� ���ڹ��ڿ��� ������ ��ȯ
//		data[cnt++] = atoi(p);
//		// strtok�� �̿��ؼ� String ���ڿ� ����ؼ� _ �� ����
//		p = strtok(NULL, "_");
//	}
//
//	return cnt;
//}
//
//int main()
//{
//	char String[] = "101_102_103_104_105";
//	int data[10];
//	int cnt, i;
//
//	cnt = parsing(String, data);
//
//	for (int i = 0; i < cnt; i++) {
//		printf("%d\n", data[i]);
//	}
//
//	return 0;
//}