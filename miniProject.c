#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#define size 10

struct item{
	char name[20];
	float price;
	float quantity;
	};

struct queue{
	struct item it[size];
	int front;
	int rear;
	};


void enqueue(struct queue *ps,struct item prod)
{
++(ps->rear);
strcpy(ps->it[ps->rear].name,prod.name);
ps->it[ps->rear].price=(prod.price)*(prod.quantity);
ps->it[ps->rear].quantity=(prod.quantity);
printf("%s selected costing %f\n",ps->it[ps->rear].name,ps->it[ps->rear].price);
}


int kitchen_dining(struct queue *q,struct item prod)
{
int choice;
do{
printf("\n\n###KITCHEN & DINING####\n");
printf("%-25s%-15s\n","ITEM NAME","PRICE");
printf("%-25s%-15f\n","1> Cooking Oil",120.00);
printf("%-25s%-15f\n","2> Wheat",30.00);
printf("%-25s%-15f\n","3> Sugar",45.00);
printf("%-25s%-15f\n","4> Salt",21.00);
printf("%-25s%-15f\n","5> Rice",65.00);
printf("6> Go to another category or Billing\n");
printf("\nEnter item number\n");
scanf("%d",&choice);
switch (choice){
	case 1: strcpy(prod.name,"Cooking Oil");
		prod.price = 120.00;
		printf("Enter the quantity of Cooking Oil\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 2: strcpy(prod.name,"Wheat");
		prod.price = 30.00;
		printf("Enter the quantity of Wheat\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
		
	case 3: strcpy(prod.name,"Sugar");
		prod.price = 40.00;
		printf("Enter the quantity of Sugar\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 4: strcpy(prod.name,"Salt");
		prod.price = 21.00;
		printf("Enter the quantity of Salt\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 5: strcpy(prod.name,"Rice");
		prod.price = 65.00;
		printf("Enter the quantity of Rice\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 6: return 1;
	
	default : printf("Enter the right choice\n");
	       }
	}while(choice!=6);
}

	
	
int fruits_vegetables(struct queue* q, struct item prod)
{
int choice;
do{
printf("\n\n###FRUITS & VEGETABLES####\n");
printf("%-25s%-15s\n","ITEM NAME","PRICE (per kg)");
printf("%-25s%-15f\n","1> Apples",180.00);
printf("%-25s%-15f\n","2> Banana",70.00);
printf("%-25s%-15f\n","3> Guava",65.00);
printf("%-25s%-15f\n","4> Tomato",30.00);
printf("%-25s%-15f\n","5> Spinach",25.00);
printf("6> Go to another category or Billing\n");
printf("\nEnter item number\n");
scanf("%d",&choice);
switch (choice){
	case 1: strcpy(prod.name,"Apples");
		prod.price = 180.00;
		printf("Enter the quantity of Apples in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 2: strcpy(prod.name,"Banana");
		prod.price = 70.00;
		printf("Enter the quantity of Banana in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
		
	case 3: strcpy(prod.name,"Guava");
		prod.price = 65.00;
		printf("Enter the quantity of Guava in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 4: strcpy(prod.name,"Tomato");
		prod.price = 30.00;
		printf("Enter the quantity of Tomato in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 5: strcpy(prod.name,"Spinach");
		prod.price = 25.00;
		printf("Enter the quantity of Spinach in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 6: return 1;
	
	default : printf("Enter the right choice\n");
	       }
	}while(choice!=6);
}



int dairy(struct queue *q, struct item prod)
{
int choice;
do{
printf("\n\n###DAIRY PRODUCTS####\n");
printf("%-25s%-15s\n","ITEM","PRICE");
printf("%-25s%-15f\n","1> Milk ",40.00);
printf("%-25s%-15f\n","2> Butter",150.00);
printf("%-25s%-15f\n","3> Cheese",100.00);
printf("%-25s%-15f\n","4> Paneer",45.00);
printf("%-25s%-15f\n","5> Yogurt",55.00);
printf("6> Go to another category or Billing\n");
printf("\nEnter item number\n");
scanf("%d",&choice);
switch (choice){
	case 1: strcpy(prod.name,"Milk");
		prod.price = 40.00;
		printf("Enter the quantity of Milk in litres\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 2: strcpy(prod.name,"Butter");
		prod.price = 150.00;
		printf("Enter the quantity of Butter in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
		
	case 3: strcpy(prod.name,"Cheese");
		prod.price = 100.00;
		printf("Enter the quantity of cheese in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 4: strcpy(prod.name,"Paneer");
		prod.price = 45.00;
		printf("Enter the quantity of Paneer in KG\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 5: strcpy(prod.name,"Yogurt");
		prod.price = 55.00;
		printf("Enter the quantity of Yougurt\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 6: return 1;
	
	default : printf("Enter the right choice\n");
	       }
	}while(choice!=6);
}


int cosmetics(struct queue *q, struct item prod)
{
int choice;
do{
printf("\n\n###COSMETICS####\n");
printf("%-25s%-15s\n","ITEM NAME","PRICE");
printf("%-25s%-15f\n","1> Lipstics",320.00);
printf("%-25s%-15f\n","2> Facewash",160.00);
printf("%-25s%-15f\n","3> Face cream",145.00);
printf("%-25s%-15f\n","4> Face pack",240.00);
printf("%-25s%-15f\n","5> Foundation",295.00);
printf("6> Go to another category or Billing\n");
printf("\nEnter item number\n");
scanf("%d",&choice);
switch (choice){
	case 1: strcpy(prod.name,"Lipstick");
		prod.price = 320.00;
		printf("Enter the quantity of Lipstick\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 2: strcpy(prod.name,"Facewash");
		prod.price = 160.00;
		printf("Enter the quantity of Facewash\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
		
	case 3: strcpy(prod.name,"Face cream");
		prod.price = 145.00;
		printf("Enter the quantity of Face cream\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 4: strcpy(prod.name,"Face pack");
		prod.price = 240.00;
		printf("Enter the quantity of Face pack\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 5: strcpy(prod.name,"Foundation");
		prod.price = 295.00;
		printf("Enter the quantity of Foundation\n");
		scanf("%f",&prod.quantity);
		enqueue(q,prod);
		break;
	
	case 6: return 1;
	
	default : printf("Enter the right choice\n");
	       }
	}while(choice!=6);
}


void billing(struct queue* q, struct item prod)
{
int total=0;
int i;
int temp;
printf("\t\t\t\t\t\t**************BILLING****************\n\n");
printf("\t\t\t\t\t\t**************SUPERMARKET****************\n");
printf("%-25s%-25s%-40s\n","ITEM NAME","QUANTITY","PRICE\n\n");
for(i=0;i<=(q->rear);i++)
		{
		total = total+(q->it[q->front].price);
		printf("%-25s%-25f%-40f\n",q->it[q->front].name,q->it[q->front].quantity,q->it[q->front].price);
		(q->front)++;
		}
temp = total;
if(total==0)
;
else if(total>=500 && total<1000){
	printf("You are getting a discount of 5 PERCENT on total bill amount\n");
	total = total*0.05;
	}
else if(total>=1000){
	printf("You are getting a discount of 8 PERCENT on total bill amount \n");
	total = total*0.08;
	}
else{
	printf("You'll get a discount of 2 percent\n");
	total = total*0.02;
	}
printf("------------------------------------------------------------------\n");
printf("\t\t\t\t\tAmount before discount = %d\n",temp);
printf("\t\t\t\t\tDiscounted Price = %d\n",temp-total);
printf("\t\t\t\t\tYou saved %d\n",total);
}


void main()
{
int choice,res;
struct queue q;
q.rear=-1;
q.front=0;
struct item prod;
printf("\t\t\t\t\t**************AUTOMATION OF SUPERMARKET****************\n\n");
printf("\t\t\t\t\t\t\t\t\t\tToday's Offers :\n");
printf("\t\t\t\t\t\t\t\t\t\t------------------------------\n");
printf("\t\t\t\t\t\t\t\t\t\t5 PERCENT discount above 500\n");
printf("\t\t\t\t\t\t\t\t\t\t8 PERCENT discount above 1000\n");
abc:
printf("\n###CATEGORIES###\n");
printf("1> Kitchen & Dining\n2> Fruits & Vegetables\n3> Dairy Products\n4> Cosmetics\n5> Billing\n6> Exit\n\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice){
	case 1: res = kitchen_dining(&q,prod);
		goto abc;
		break;
	
	case 2: res = fruits_vegetables(&q,prod);
		goto abc;
		break;
		
	case 3: res = dairy(&q,prod);
		goto abc;
		break;
	
	case 4: res = cosmetics(&q,prod);
		goto abc;
		break;
	
	case 5: billing(&q,prod);
		break;
	
	case 6: exit(0);
	
	default: printf("Enter a valid choice\n");
		}
}
