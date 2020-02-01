#include <stdio.h>
#include<stdlib.h>


void main() {
	int menu;

	while (1)
	{
		printf("####      system command tool     ####\n");
		printf("======================================\n");
		printf("1. cmd\n");
		printf("2. systeminfo\n");
		printf("3. windows key check\n");
		printf("4. windows 인증상태 확인\n");
		printf("======================================\n");
		printf(" 번호를 선택하세요[종료-> 0] : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");

			printf("cmd 호스트를 실행합니다.\n");
			system("cmd");
			
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");

			printf("시스템 정보를 확인합니다.\n");
			system("systeminfo");

			system("pause");
			system("cls");
			break;

		case 3:
			system("cls");

			printf("Windows 제품 키를 확인합니다.\n");
			system("wmic path softwarelicensingservice get OA3xOriginalProductKey");

			system("pause");
			system("cls");
			break;

		case 4:
			system("cls");

			printf("Windows 제품 인증상태를 확인합니다.\n");
			system("slmgr /dlv");

			system("pause");
			system("cls");
			break;

		default:
			printf(" %d 는 메뉴에 없는 번호입니다. \n", menu);
			return;
		}
	}

	return 0;
}
