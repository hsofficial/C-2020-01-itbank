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
		printf("4. windows �������� Ȯ��\n");
		printf("======================================\n");
		printf(" ��ȣ�� �����ϼ���[����-> 0] : ");
		scanf_s("%d", &menu);

		if (menu == 0)
			return;

		switch (menu)
		{
		case 1:
			system("cls");

			printf("cmd ȣ��Ʈ�� �����մϴ�.\n");
			system("cmd");
			
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");

			printf("�ý��� ������ Ȯ���մϴ�.\n");
			system("systeminfo");

			system("pause");
			system("cls");
			break;

		case 3:
			system("cls");

			printf("Windows ��ǰ Ű�� Ȯ���մϴ�.\n");
			system("wmic path softwarelicensingservice get OA3xOriginalProductKey");

			system("pause");
			system("cls");
			break;

		case 4:
			system("cls");

			printf("Windows ��ǰ �������¸� Ȯ���մϴ�.\n");
			system("slmgr /dlv");

			system("pause");
			system("cls");
			break;

		default:
			printf(" %d �� �޴��� ���� ��ȣ�Դϴ�. \n", menu);
			return;
		}
	}

	return 0;
}
