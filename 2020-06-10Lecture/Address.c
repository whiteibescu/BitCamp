#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>//�������
struct list//����ü ����
{
    char name[100];
    char address[100];
    char tel[100];
    char number[100];//ũ�Ⱑ 100�� �迭�� �̸�,�ּ�,��ȣ,�й� ���� ����

};

int main()
{
    int a, b, c, d, e, g, h, i, j;//��������
    int f = 0;
    struct list data[1000];//����ü�� ũ��
    char str[10];//����ü�� ũ��
    FILE* list;//������ list ������


    while (1)
    {
        printf("--------------------------E�ּҷ�------------------------\n\n");
        printf("   �� �ּҷ� ����\n     \n");
        printf("   �� �ּҷ� �˻�\n     \n");
        printf("   �� �ּҷ� �߰�\n     \n");
        printf("   �� �ּҷ� ����\n     \n");
        printf("   �� �ּҷ� ����\n     \n");
        printf("   �� ��       ��\n     \n");
        printf("------------------------------------------------------------\n");
        scanf("%d", &a);

        switch (a)
        {
        case 1://�ּ� ����
            system("mode con: cols=150 lines=700");//�����â ũ������
            list = fopen("c:\\ecomsw.txt", "r");//�ؽ�Ʈ ������ �б���� �ҷ�����
            for (b = 0;; b++)
            {
                fscanf(list, "%s %s %s %s", &data[b].name, &data[b].number, &data[b].tel, &data[b].address);
                //fscanf = �ش����Ͽ� �ִ� ���ڸ� ���α׷������� �����´�.
                //&data[b].name,&data[b].number,&data[b].tel,&data[b].address�� �ҷ��� ���ڿ��� �����Ѵ�.


                if (feof(list))//list����ü�� ������.
                {
                    break;
                }

            }
            for (c = 0; c < b; c++)
                printf("%s  %s  %s  %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);//������� ������ ����Ѵ�.
            fclose(list);//�ؽ�Ʈ ���� �ݱ�
            break;

        case 2://�ּ� ã��
            system("mode con: cols=150 lines=700");//�����â ũ�� ����
            list = fopen("c:\\ecomsw.txt", "r"); //�ؽ�Ʈ ���� ����ü�� ����
            printf("�� �̸����� �˻��ϱ�^��^\n");
            printf("�� �й����� �˻��ϱ�^0^\n");
            scanf("%d", &d);
            switch (d)
            {
            case 1: //�̸����� ã��
                printf("�̸��� �Է��ϼ���!!");
                scanf("%s", str);
                for (c = 0; c < b; c++)
                    if (strncmp(data[c].name, str, 6) == 0)//strncmp() = �ٸ� ���ڿ��� ���ϴ� �Լ�
                     //name��str�� 6ũ����� ������ ���Ѵ�.
                    {
                        printf("__________________________________________\n");
                        printf("�̸� : %s\n�й� : %s\n��ȣ : %s\n�ּ� : %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
                        printf("__________________________________________\n");
                    }

                break;
            case 2: //�й����� ã��
                printf("�й��� �Է��ϼ���!!");
                scanf("%s", str);
                for (c = 0; c < b; c++)
                    if (strncmp(data[c].number, str, 7) == 0)//�й����� ã�¹��!
                    {
                        printf("__________________________________________\n");
                        printf("�̸� : %s\n�й� : %s\n��ȣ : %s\n�ּ� : %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
                        printf("__________________________________________\n");
                    }

                break;
                fclose(list);//���� �ݱ�
            }
            break;

        case 3://�ּ� �߰�
            e = b + f;
            list = fopen("c:\\ecomsw.txt", "ab+");//txt���� ���� ab+�� ����txt�������� ������ʰ� ���� �ؿ� �߰���
            printf("�̸� : ");
            scanf("%s", data[e].name);
            printf("�й� : ");
            scanf("%s", data[e].number);
            printf("��ȣ : ");
            scanf("%s", data[e].tel);
            printf("�ּ� : ");
            scanf("%s", data[e].address);

            gets(str);//���ڿ� �Է�



            fprintf(list, "%s %s %s %s\n", data[e].name, data[e].number, data[e].tel, data[e].address);
            printf("����ī��ī �Է¼���!!��\n");

            fclose(list);
            f++;
            break;

        case 4://�ּ� ����
            printf("������ �̸��� �Է��ϼ���!!");
            scanf("%s", str);
            for (i = 0; i < b; i++)
            {
                if (strncmp(data[i].name, str, 6) == 0)
                {
                    g = i;

                }
            }
            printf("�����غ�����!!\n\n1:�̸�\n2:�й�\n3:��ȣ\n4:�ּ�\n");
            scanf("%d", &h);
            switch (h)
            {
            case 1:
                printf("�̸�: ");
                scanf("%s", &data[g].name);
                printf("�ټ����Ϸ��\n");
                break;
            case 2:
                printf("�й�: ");
                scanf("%s", &data[g].number);
                printf("�ټ����Ϸ��\n");
                break;
            case 3:
                printf("��ȣ: ");
                scanf("%s", &data[g].tel);
                printf("�ټ����Ϸ��\n");
                break;
            case 4:
                printf("�ּ�: ");
                scanf("%s", &data[g].address);
                printf("�ټ����Ϸ��.\n");
                break;
            }
            list = fopen("c:\\ecomsw.txt", "w");
            for (c = 0; c < b; c++)
            {
                fprintf(list, "%s %s %s %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
            }
            fclose(list);
            break;

        case 5://�ּ� ����
            printf("�����ϽǺ� �̸��� �Է��ϼ���!!");
            scanf("%s", &str);
            for (i = 0; i < b; i++)
            {
                if (strncmp(data[i].name, str, 6) == 0)
                {
                    for (j = i + 1; j <= b; j++)
                    {
                        strcpy(data[j - 1].name, data[j].name);//data[j].name���ڿ��� null���ڰ� ���ö����� data[j-1].name�� �����ϴ� �Լ�
                        strcpy(data[j - 1].number, data[j].number);
                        strcpy(data[j - 1].tel, data[j].tel);
                        strcpy(data[j - 1].address, data[j].address);
                    }
                    b--;
                }
                list = fopen("c:\\ecomsw.txt", "w");
                for (c = 0; c < b; c++)
                {
                    fprintf(list, "%s %s %s %s\n", data[c].name, data[c].number, data[c].tel, data[c].address);
                }
                fclose(list);
            }
            break;

        case 6://�ּҷ� ����
            exit(0);


        }

    }


    return 0;
}