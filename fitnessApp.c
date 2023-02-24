#include"INTRO.h"
#include<stdio.h>
#include<string.h>
#include<math.h>

float cal_bmi(float height, float weight)
{
	return (weight/(pow(height,2)));	
}
	void colorit(int col)
	{                  
		HANDLE hstdout;
		hstdout = GetStdHandle( STD_OUTPUT_HANDLE );
		                                //12=red, 15=white---------------->this.colorit(12);  this.colorit(15);
        SetConsoleTextAttribute( hstdout, col );
    }
	void showmenu()
	{
		system("COLOR C0");
    	int index=0;
    	int key=0;
        
        system("cls");
        printf("~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n\t\t\t\t\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~\n~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ");
        while(key!=13){
        gotoxy(3,2);
        colorit(15);
        printf("\t\t\t\t\t==============");
        gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   FIT LIFE   ");
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
        gotoxy(3,6);
        colorit(15);
        if(index==1){colorit(12);}
        printf("\t\t\t\t\tHOME WORKOUT");
        gotoxy(3,8);
        colorit(15);
        if(index==2){colorit(12);}
        printf("\t\t\t\t\tBMI CALCULATOR");
        gotoxy(3,10);
        colorit(15);
        if(index==3){colorit(12);}
        printf("\t\t\t\t\tCUSTOMIZE DIET PLAN");
        gotoxy(3,12);
        colorit(15);
        if(index==4){colorit(12);}
        printf("\t\t\t\t\tSETTING UP GOALS");
        gotoxy(3,14);
        colorit(15);
        if(index==5){colorit(12);}
        printf("\t\t\t\t\tMOTIVATIONAL QUOTES");
        
         gotoxy(3,16);
        colorit(15);
        if(index==6){colorit(12);}
        printf("\t\t\t\t\tHEALTH CONDITION");
        gotoxy(3,18);
        colorit(15);
        if(index==7){colorit(12);}
        printf("\t\t\t\t\tHEART RATE");
        
        gotoxy(3,20);
        colorit(15);
        if(index==8){colorit(12);}
        printf("\t\t\t\t\tFAQs");
        gotoxy(3,24);
        colorit(15);
        if(index==9){colorit(12);
		}printf("\nBACK");
        
        /////////////UP=224/72 Down=224/80 Enter=13
        key=getch();
        if(key==80){index++;}
        else if(key==72){index--;}
        if(index==10){index=1;}
        if(index==0){index=9;}
        }
        
        if(index==8)
        {
        	system("cls");
        	system("COLOR D3");
        	
        	gotoxy(3,1);
        colorit(15);
        printf("\t\t\t\t\t==============");
	     gotoxy(3,2);
        colorit(15);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,3);
        printf("\t\t\t\t\t==============");
        printf("\n");
        printf("\n");
        
        
        printf("\n\t\t\t\t   Frequently Asked Questions");
        printf("\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><> ");
        printf("\n\n");
        printf("\n1. Is working out in the morning better for you?");
        printf("\nYou should exercise at a time that suits you and your body. There’s no evidence to suggest that an early morning workout is better for you, but some people are just more efficient at this time. You’ll get results regardless of the time of day, as long as it works for you.");
        printf("\n\n");
        printf("2. Should I approach my sessions with a plan?");
        printf("\nYes, this will help you get the most out of your workout. Decide which muscle groups you want to work on, whether you’re doing a strength session or a HIIT workout and what equipment you’ll need. Then, think about how many reps and sets you’re going to perform. That way, you won’t waste time procrastinating and you’ll work harder as a result.");
		printf("\n\n");
		printf("3. Do I need to work out every day?");
		printf("\nA good workout week doesn’t necessarily mean training every day. Three to four gym or home workouts each week is enough if you work as hard as you can in each session. Try to balance the week with a mix of cardio, HIIT, strength and yoga or Pilates. However, when it comes to being active you should aim to move as much as you can every day – whether that’s with brisk walking, jogging, swimming, gardening or putting your all into the housework!");
		printf("\n\n");
		printf("4. How long do I need to work out for?");
		printf("\nThis depends on your fitness levels, what type of training you’re doing and what intensity you’re training at. Just remember, something is always better than nothing. If you only have 30 minutes, try to fit in a quick HIIT (High Intensity Interval Training) workout or go for a run.If you’re doing a strength workout, set aside more time for warming up and mobilising to help avoid injury and make sure you’re getting enough rest between sets. Either way, you definitely don’t need to be slogging it out for hours!");
		printf("\n\n");
		printf("5. Do I need to vary my workout to see results?");
		printf("\nIf you want to see real change in your body you need to mix up your routine. The body quickly adapts to exercise and if you continue to do the same workout or use the same weights, it will plateau as it stops responding to the training stimulus. Increase frequency, intensity or the type of training as often as you can.");
		printf("\n\n\n Press Any Key to Go Back");
		getch();
		showmenu();
		
		
		}
		if(index==7)
		{
			
			system("cls");
			system("COLOR 10");
			
        	gotoxy(3,1);
        colorit(15);
        printf("\t\t\t\t\t==============");
	     gotoxy(3,2);
        colorit(15);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,3);
        printf("\t\t\t\t\t==============");
        printf("\n");
        printf("\n");
        int h,a;
        
        
        printf("\n\t\t\t\t                  Heart Rate");
        printf("\n<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><> ");
        printf("\n\n");
        printf("\n Enter Your age ");
        scanf("%d",&a);
        printf("\n Place your finger on the sensor and note your reading: ");
        scanf("%d",&h);
        
		if(a>=10)
		{
			if(h>=60||h<=100)
			{
				printf("\nNormal Heartbeat");
			}
			else if(h>100)
			{
				printf("\n Abnormal Heart Beat ");
			}
		}
		else if(a<10)
		
		{
			if(h>=70||h<=110)
			{
				printf("\n Normal Heartbeat");
			}
			else if(h>110)
			{
				printf("\nAbnormal Heartbeat");
			}
		}
		printf(" \n Press Any key To Go Back");
		getch();
		showmenu();
		
		
        
		}
        
		if(index==1)
		{
			
			system("cls");
			system("COLOR 20");
			gotoxy(3,1);
        colorit(15);
        printf("\t\t\t\t\t==============");
	     gotoxy(3,2);
        colorit(15);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,3);
        printf("\t\t\t\t\t==============");
        printf("\n");
        printf("\n");
        
        int index3=0;
	int key3=0;
	while(key3!=13)
	{
		colorit(15);
		if (index3==1){colorit(12);
		}gotoxy(4,6);
		printf("\n");
		printf("\t\t\t\t\tBeginner Routine");
		
		colorit(15);
		if (index3==2){colorit(12);
		}gotoxy(4,8);
		printf("\t\t\t\t\tIntermediate Routine");
		
		colorit(15);
		if (index3==3){colorit(12);
		}gotoxy(4,9);
		printf("\t\t\t\t\tAdvance Routine");
		key3=getch();
	if(key3==80){index3++;}
        else if(key3==72){index3--;}
        if(index3==4){index3=1;}
        if(index3==0){index3=3;}
		
		
		
	}
	
	if(index3==1)
	{
		system("cls");
		system("COLOR 20");
		gotoxy(3,2);
        printf("\t\t\t\t\t==============");
		gotoxy(3,3);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
        
        gotoxy(3,6);
        printf("\t\t\t\t\tBeginner Routine");
        printf("\n");
		printf("\n1. Bicycle crunch");
		printf("\n2. Forearm plank");
		printf("\n3. Bird Dog");
		printf("\n4. Straight Leg Donkey Kick");
		printf("\n5. Staionary  Lunge");
		printf("\n6. Knee Pushup");
		printf("\n7. Chair Squat");
		
		printf("\nPress any Key to return Back");
		getch();
        showmenu();
       
		
	}
	
	if(index3==2)
	{
		system("cls");
		system("COLOR 20");
		gotoxy(3,2);
        printf("\t\t\t\t\t==============");
		gotoxy(3,3);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
        
        gotoxy(3,6);
        printf("\t\t\t\t\tIntermediate  Routine");
        printf("\n");
        
        printf("\n1. Single Leg Bridge ");
        printf("\n2. Squat ");
        printf("\n3. Pushup ");
        printf("\n4. Walking Lunges ");
        printf("\n5. Get up Squat ");
        printf("\n6. Pike Pushup ");
        printf("\n7. Superman ");
        
        printf("\nPress any Key to return Back");
        getch();
        showmenu();
       
		
	}
	
	if(index3==3)
	{
		system("cls");
		system("COLOR 20");
		colorit(15);
		gotoxy(3,2);
        printf("\t\t\t\t\t==============");
		gotoxy(3,3);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
        
        gotoxy(3,6);
        printf("\t\t\t\t\tAdvance Routine");
        printf("\n");
        printf("\n1. Bridge With Leg Extended ");
        printf("\n2. Over head Squat ");
        printf("\n3. One Leg Pushup ");
        printf("\n4. Elevated Pike Pushup ");
        printf("\n5. Get up Squat with Jump");
        printf("\n6. Side Plank");
        printf("\nPress any Key to return Back");
        getch();
        showmenu();
       
		
	}
            
		}
        
		else if (index==2)
		{
          	system("cls");
          	system("COLOR 68");
          	gotoxy(3,2);
        printf("\t\t\t\t\t==============");
          	gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
          	
          	float height,weight;
			printf("\n enter height in meters and weight in kgs: ");
			scanf("%f%f",&height,&weight);
			float bmi=cal_bmi( height,  weight);
			printf("\n your BMI is %.2f",bmi);
			(bmi<18.5)?printf("\nYou are under weight\nDon't worry we have got you covered  "):(bmi>=18.5&&bmi<=24.9)?printf("\nPerfect you have normal BMI"):(bmi>=25&&bmi<=29.9)?printf("\nyou are overweight"):(bmi>=30)?printf("\n you are at health risk "):0;
			
        	printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
        }
        
		else if (index==3)
		{
			
			system("cls");
			system("COLOR 80");
			 gotoxy(3,2);
			 colorit(15);
        printf("\t\t\t\t\t==============");
			gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
            
            int index1=1;
    	int key1=0;
    	system("cls");
    	
    	while(key1!=13)
    	{
    		  gotoxy(3,2);
        printf("\t\t\t\t\t==============");
    		gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
    		gotoxy(3,5);
        colorit(15);
        printf("\t\t\t\t\n    Choose your current body type");
    		gotoxy(3,6);
    		colorit(15);
    		if(index1==1){colorit(12);
			}
    		printf("\t\t\t\t\tSkinny");
    		
    		gotoxy(3,7);
    		colorit(15);
    		if(index1==2){colorit(12);
			}
    		printf("\t\t\t\t\tPlump");
    		
    		
    		
    		
    		
    		key1=getch();
        if(key1==80){index1++;}
        else if(key1==72){index1--;}
        if(index1==4){index1=1;}
        if(index1==0){index1=5;}
        
		}
		if (index1==1)
		{
			    gotoxy(3,4);
			       colorit(15); 
        printf("\t\t\t\t\t==============");
			gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
			system("cls");
			system("COLOR 80");
			gotoxy(3,2);
        printf("\t\t\t\t\t==============");
          	gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
			printf("\n\nSkinny guys should undergo progressive weight training only for 3 days a week, not more than that for example, Monday .Wednesday.Friday or Tuesday.Thursday.Saturday. So, that their muscles have time to recover.\nEndurance exercise or high-intensity conditioning, which could include running, cycling, swimming, long hikes, snowboarding, metcons, and sprinting \n\nDiet: After an intense workout, it is imperative to follow a proper diet and have at least 6 meals a day. You can help your muscles recover faster by eating carbs and proteins, fibres, and essential fat after every 2 to 3 hours. Protein is an ingredient that is vital for a post-workout snack, because it helps build muscle, which is important for recovery after a workout. Likewise, protein also helps you build muscles.");
			printf("\n press any key1 to go back to menu");
			getch();
			showmenu();
		}
		if(index1==2)
		{
			        
        gotoxy(3,2);
        colorit(15);
        printf("\t\t\t\t\t==============");
			gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
			int key2=0,index2=0;
			system("cls");
			printf("\n\t\t\t\t   Select your goal");
			while(key2!=13){
			
			gotoxy(3,5);
    		colorit(15);
    		if(index2==1){colorit(12);
			}
    		printf("\t\t\t\t\tShred");
    		
    		gotoxy(3,7);
    		colorit(15);
    		if(index2==2){colorit(12);
			}
    		printf("\t\t\t\t\tBulk");
    		key2=getch();
        if(key2==80){index2++;}
        else if(key2==72){index2--;}
        if(index2==3){index2=1;}
        if(index2==0){index2=2;}
    		
    	}
    	if(index2==1){
    		system("cls");
    		gotoxy(3,2);
        printf("\t\t\t\t\t==============");
          	gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
    		
    		printf("\n\nDaily Exercise\n\n\nPush up --- 3 sets\n\nPull up --- 3 sets\n\nCrunches --- 3 sets\n\nDumbell Press(biceps) --- 3 sets\n\nDumbell Press(chest) --- 3 sets\n\nDumbell Press(back) ---3 sets\n\n300 metre ---walk\n1000 metre jog\n\n\nDIETPLAN\n\n\nlean meat and poultry, oily fish, and eggs.\n\nmilk, yogurt, and low fat cheese.\n\nprotein powders such as whey, hemp, rice, and peas.\nbeans and pulses.\n\nnuts and seeds.\n\navocados, olive oil, and olives.");
		printf("\n press any key to go back to menu");
			getch();
			showmenu();
		}
		if(index2==2){
		system("cls");
		gotoxy(3,2);
        printf("\t\t\t\t\t==============");
          	gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t   Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
		printf("\n\nDaily Exercise\n\n\nPush up --- 3 sets\n\nPull up --- 3 sets\n\nCrunches --- 3 sets\n\nDumbell Press(biceps) --- 3 sets\n\nDumbell Press(chest) --- 3 sets\n\nDumbell Press(back) ---3 sets\n\n300 metre ---walk\n1000 metre jog");
		printf("\n press any key to go back to menu");
			getch();
			showmenu();
		}
		
		}
            
            
            
            
			getch();
            showmenu();
			               
        }
        
		else if (index==4)
		{
			system("cls");
			system("COLOR A0");
			gotoxy(3,2);
			colorit(15);
        printf("\t\t\t\t\t==============");
			
			gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t  Fit Life    ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
			int w,r;
			int c;
		 
		printf("\n you can save your goals below\n");
		label:{
		printf("\n How many workouts will you do weekly? ");
		scanf("%d",&w);
		printf("\n How many rest days ? ");
		scanf("%d",&r);
		printf("\n How many cheat days in a week ? ");
		scanf("%d",&c);}
		
		if(r>5||c>2)
		{
			printf("\n %d rest days and %d cheat days  are too much reconsider your goals ",r,c);
			goto label;
			
		}
		
		if(r<5||c<=2)
		{
			printf("\n Perfect your goals are set\n with %d workouts in a week and %d rest days and %d cheat days you will achieve your goals soon",w,r,c);
		}
		
		
            printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
        }
        
		else if (index==5)
		
		{
			system("cls");
			system("COLOR 45");
			  gotoxy(3,2);
			  colorit(15);
        printf("\t\t\t\t\t\t\t\t\t  ==============");
			gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t\t\t\t\t     Fit Life   ");
        
        gotoxy(3,4);
        printf("\t\t\t\t\t\t\t\t\t  ==============");
				printf("\n\n\t\t\t\t\t\t\t<_(._.)_> M O T I V A T I O N A L <_(._.)_> \n");
	printf("\t\t\t\t\t\t\t\t      Q U O T E S");
	printf("\n\n\n\t1. The only person you are destined to become is the person you decide to be. - Ralph Waldo Emerson");
	printf("\n\n\t2.Once you learn to quit, it becomes a habit. Vince Lombardi Jr\n\n\t3. A year from now you may wish you had started today. - Karen Lamb");
printf("\n\n\t4.Our growing softness, our increasing lack of physical fitness, is a menace to our security.- John F. Kennedy");
printf("\n\n\t5. Don't give up on your dreams, or your dreams will give up on you.- John Wooden");
printf("\n\n\t6. The last three or four reps is what makes the muscle grow. This area of pain divides a champion from someone who is not a champion.- Arnold Schwarzenegger");
printf("\n\n\t7.Most people fail, not because of lack of desire, but, because of lack of commitment.- Vince Lombardi");
printf("\n\n\t8.Success usually comes to those who are too busy to be looking for it. -Henry David Thoreau");
printf("\n\n\t9.Exercise is labor without weariness. - Samuel Johnson");
printf("\n\n\t10.Some people want it to happen, some wish it would happen, others make it happen.- Michael Jordan");
printf("\n\n\t\t\t\t\t\t\t    S T A Y   M O T I V A T E D ;)");


            printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
			
           
        }
        else if(index==6)
        {
        	system("cls");
        	system("COLOR 80");
		gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t==============");
        printf("\t\t\t\t\t  Fit Life    ");
        printf("\t\t\t\t\t==============");
        
        
        struct hc{
        	char gender;
        	int age;
        	float bfat;
		}s1;
		
		printf("\n Enter your gender m for male f for female: ");
		scanf(" %c",&s1.gender);
		printf("\n Enter age ");
		scanf("%d",&s1.age);
		printf("\n Enter your body fat percentage ");
		scanf("%f",&s1.bfat);
		if(s1.gender=='m')
		{
			if(s1.bfat>=2&&s1.bfat<=4)
			{
				printf("\n Essential fat ");
				
			}
			if(s1.bfat>4&&s1.bfat<=13)
			{
				printf("\nAthletic Fat ");
			}
			if(s1.bfat>13&&s1.bfat<=17)
			{
				printf("\n Fit ");
			}
			if(s1.bfat>17&&s1.bfat<=25)
			{
				printf("\n Acceptable fat percentage ");
			}
			if (s1.bfat>25)
			{
				printf("\n Obese fat ");
			}
	}
			
			if(s1.gender=='f')
		{
			if(s1.bfat>=10&&s1.bfat<=12)
			{
			printf("\n Essential fat ");
				
			}
			if(s1.bfat>12&&s1.bfat<=20)
			{
			printf("\nAthletic Fat ");
			}
			if(s1.bfat>20&&s1.bfat<=24)
			{
				printf("\n Fit ");
			}
			if(s1.bfat>24&&s1.bfat<=31)
			{
				printf("\n Acceptable ");
			}
			if (s1.bfat>32)
			{
			printf("\n Obese");
			}
		}
		
        
        	printf("\n\n\n\nPRESS ANY KEY TO GO BACK TO MAIN MENU...");
			getch();
            showmenu();
			
        	
		}
		 
        
        
         if(index==9)
        {
        	system("cls");
        	system("COLOR C0");
        	
        	gotoxy(3,2);
        printf("\t\t\t\t\t==============");
          	gotoxy(3,3);
        colorit(15);
        printf("\t\t\t\t\t  Fit Life    ");
        gotoxy(3,4);
        printf("\t\t\t\t\t==============");
        	printf("\n Thankyou for using our app :) :)");
        	getch();
        	system("cls");
        	Intro();
        	system("taskkill/IM ConsolePauser.exe");
		}
    }


        
		
		
		
		
		 
int main()
{
	
	system("COLOR F0");
		
	
	Intro();
	system("cls");	
	
		int i,c=0;
	char ch1[20],ch2[20],ch;

printf("\n************************************************************************************************************************************************************************\n");
printf("\n                                                              ******  ***   *****      *       ***   ******  *****                                         \n");
printf("\n                                                              *        *      *        *        *    *       *                                           \n");
printf("\n                                                              ******   *      *        *        *    ****    ****                                     \n");
printf("\n                                                              *        *      *        *        *    *       *                                  \n");
printf("\n                                                              *       ***     *        *****   ***   *       *****                               \n");
printf("************************************************************************************************************************************************************************\n");
printf("                                                              Enter your username\n");
gets(ch1);
printf("                                                              Enter your password\n");
while(1)
{
	ch=getch();
	if(ch==13)
	break;
	else if(ch==8)
	{
		if(c!=0)
		{
			printf("\b");
			printf("%c",32);
			printf("\b");
			c--;
		}
else
continue;
}
else
{
	putchar('*');
	ch2[c]=ch;
	c++;
}
ch2[c]='\0';		
}
if(strcmp(ch1,"user")==0)
{
	if(strcmp(ch2,"1234")==0)
	{
		printf("\n");
	printf("                                                              *LOGIN SUCCESSFUL*\n");
	printf("                                                           PRESS ENTER FOR NEW SCREEN");
	getch();
	system("cls");
	showmenu();
	system("COLOR F2");
	
	}
	else
	printf("\n                                                           *INCORRECT PASSWORD*");
}
else{

printf("\n                                                               *INCORRECT USERNAME*");
}
if(strcmp(ch1,"USER")==0||strcmp(ch1,"User")==0)
{
printf("\n\n                                                             CAPSLOCK IS ON! Input Username in Lower Case");
}
}
