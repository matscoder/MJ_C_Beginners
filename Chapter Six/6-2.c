#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����6-7
/*void put_stars(int n)
{
	while (n-- > 0)
		putchar('*');
}

int main()
{
	int i, len;
	printf("����1��ֱ�������·��ĵ���ֱ��������\n");
	printf("�̱�:"), scanf("%d", &len);
	for (i = 1; i <= len; i++) {
		put_stars(i);
		putchar('\n');
	}

	return 0;
}*/

//����6-8
/*void put_chars(int ch, int n)
{
	while (n-- > 0)
		putchar(ch);
}
int main()
{
	int i, len;

	printf("����һ��ֱ�����·��ĵ���ֱ�������Ρ�\n");
	printf("�̱�:"), scanf("%d", &len);

	for(i = 1; i <= len; i++){

	put_chars(' ', len - i);
	put_chars('*', i);
	putchar('\n');
}
return 0;
	}*/

//��ϰ6-6
/*void alert(int n)
{
	while (n-- > 0)
		putchar('\a');
}
int main()
{
	int x;
	printf("�����������:"), scanf("%d", &x);
	alert(x);

	return 0;
}*/


//�����嵥6-9

//���������������
/*int scan_pint(void)
{
	int tmp;
	do {
		printf("������1��������");
		scanf("%d", &tmp);
		if (tmp <= 0)
			puts("�벻Ҫ�����������");
	} while (tmp <= 0);

	return tmp;//Ҫ���ؽ����ֵ�����ܵ���0��������
}

//���� ��������ת���ֵ
int rev_int(int num)
{
	int x = 0;
	if (num > 0) {
		do {
			x = x * 10 + num % 10;
			num /= 10;

		} while (num > 0);
	}
	return x;//����tmp!���ܷ���0!
}
//tmp=3      ��321Ϊ����x=0+1    num=32;x=10+2 num=3;x=120 +3 num=3 ���
//num=12
//tmp=32
//num=1

int main(void)
{
	int nx = scan_pint();//������ʵ��
	printf("��������ת���ֵ��:%d��\n", rev_int(nx));

	return 0;
}   //tmp=num=nx;

*/


//��ϰ6-7
/*void hello(void)
{
	printf("���\n");//ֻ��ʾ������Ҫ����ֵ���������
}
int main()
{
	hello();
	return 0;
}*/

//����6-10
/*#define NUMBER 5
int tensu[NUMBER];
int top(void);

int main()
{
	extern int tensu[];//����Ϊ�ļ������򣬿�ʡ�Դ˴��Ƕ�������
	int i;
	printf("������%d��ѧ���ķ���:\n", NUMBER);
	for (i = 0; i < NUMBER; i++) {
		printf("%d��", i+1);
		scanf("%d", &tensu[i]);
	}
	printf("��߷�Ϊ%d", top());

}

//��������tensu�����ֵ(����top�ĺ�������)
int top(void)
{
	extern int tensu[];//����Ϊ�ļ������򣬿�ʡ�Դ˴��Ƕ�������
	int i;
	int max = tensu[0];   //��max��Ϊ�����ʼֵ:tensu[0],�������1-4���бȽϣ�
	for (i = 1; i < NUMBER; i++)
		if (tensu[i] > max)
			max = tensu[i];
	return max;
}*/


//����6-11
/*#define NUMBER 5
int max_of(int v[], int n)   //�Ƚ�����Ĵ�С
{
	int i;
	int max = v[0];
	for (i = 1; i < n; i++)
	{
		if (v[i] > max)
			max = v[i];
	}
	return max;
}

int main(void)
{
	int i;
	int eng[NUMBER];//Ӣ��ķ���
	int mat[NUMBER];//��ѧ�ķ���
	int max_e, max_m;  //��߷�

	printf("������5��ѧ���ķ���:\n");     //����ȫ��ѧ���ķ���
	for (i = 0; i < NUMBER; i++) {
		printf("[%d]: Ӣ��:", i + 1), scanf("%d", &eng[i]);
		printf("      ��ѧ:"), scanf("%d", &mat[i]);
	}

	max_e = max_of(eng, NUMBER);  //������ȽϽ����ֵ������
	max_m = max_of(mat, NUMBER);
	printf("Ӣ�����߷���:%d��\n", max_e);
	printf("��ѧ����߷���:%d��", max_m);
	return 0;
}*/


//����6-12
//��0 ��ֵ����n��Ԫ�ص�����v������Ԫ��
/*void set_zero(int v[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		v[i] = 0;
}

void print_array(const  int v[], int n)//�������ı������յ�����Ԫ�ص�ֵ���β�ֻ�ܽ���ʵ�Σ��޷��ں����и�дʵ�������Ԫ��ֵ��
//�˴���const��ʲô��˼����������������ȥ�����û��Ӱ�����������������У�
{
	int i;
	printf("{"); //v[1] = 3; ����constʱ�������е�v[1]���ᱻ��ֵΪ���ı���µ�����Ԫ�ص�ֵ
	for (i = 0; i < n; i++)
		printf("%d", v[i]);
	printf("}");
}

int main()
{
	int ary1[] = { 1,2,3,4,5 };
	int ary2[] = { 3,2,1};

	printf("ary1 = "); print_array(ary1, 5); putchar('\n');
	printf("ary2 = "); print_array(ary2, 3); putchar('\n');

	set_zero(ary1, 5); //��0��������ary1������Ԫ��
	set_zero(ary2, 3); //��0��������ary2������Ԫ��

	printf("��0�������������������Ԫ��");
	printf("ary1="), print_array(ary1, 5), putchar('\n');
	printf("ary2="), print_array(ary2, 3), putchar('\n');
}*/


//��ϰ6-8
/*int min_of(const int v[], int n)
{
	int min = v[0];
		int i;
	for (i = 0; i < n; i++) {
		if (v[i] < min)
			min = v[i];
	}
	return min;
}

int main()
{
	int i;
	int x[5];
	printf("������1����:");
	for (i = 0; i < 5; i++) {
		printf("%d��", i + 1), scanf("%d", &x[i]);
	}
	printf("��С������:%d", min_of(x, 5));

	return 0;
}*/


//��ϰ6-9//�Ƿ�Ҫ�Ӻꣿ
/*void rev_intary(int v[], int n)
{
	//temp=1  ���蹲7i,i��1��7��ֵ   temp=v[1]=1,v[1]=v[7-1-1]=5,v[5]=tmp,������ֵ
		//1=5
	//	5=1

	int temp, i;
	for (i = 0; i < n / 2; i++)
	{
		temp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = temp;
	}
}

int main()
{
	int n, i;
	int v[n]=;
		

	printf("�����������Ԫ�ظ���:"), scanf("%d", &n);

	printf("���������Ԫ�ص�ֵ:");
	for (i = 0; i < n; i++) {
		scanf("%d", &v[i]);
	}

	rev_intary(v, n);

	puts("�������Ԫ�ص������е�ֵ");
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}

	return 0;
}*/

//��ϰ6-10





//����6-13
/*#define NUMBER 5
#define FALLED -1

int search(const int v[], int key, int n)
{
	int i = 0;

	while (1)
	{
		if (i == n)         //ʲôԭ��
			return FALLED;
		if (v[i] == key)
			return i;
		i++;
	}
}

int main()
{
	int i, ky, idx; //ky��Ҫ���ҵ�ֵ��idx���պ���search�Ľ��
	int vx[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("vx[%d]:", i);
		scanf("%d", &vx[i]);
		putchar('\n');
	}
	printf("Ҫ���ҵ�ֵ:");
	scanf("%d", &ky);

	idx = search(vx, ky, NUMBER);

	if (idx == FALLED)
		puts("\a����ʧ��");
	else
		printf("%d������ĵ�%d��Ԫ��",ky,idx+1);
	return 0;
}
*/