//                                                  ***HOTEL MANAGEMENT SYSTEM**



#include<stdio.h>           //Header Files
#include<conio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

// escape code for colour text
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define RESET "\x1b[0m"
#define FONT "\033[7;1m"

void begin();               //Function Declarations
void program();
void show_details();
void complaints_suggestions();
void book_room();
void mini_casino();
void GuessGame();
void showAnimation();
void payment();

struct                                       //Struct to store details of a guest
{
    char name[20];
    char address[50];
    char email_id[30];
    char nationality[25];
    int roomno;
    char *roomtype;
    int billprice;
    char *program;
} person;


int main() {
    person.roomno = 0;
    person.billprice = 0;  
    person.program = "notchosen";
    system("cls");      // To clear terminal
    SetConsoleOutputCP(65001);

    showAnimation("\t\t\t\t\t\t\t  **********************\n"FONT"\t\t\t\t\t\t\tWELCOME TO PALM VIEW RESORT\n\n\t\t\t\t\tPlease enter your details before moving to the main page!\n\n"RESET"\t\t\t\t\t\t\t**********************\n\n" );
    Sleep(100);
    printf(GREEN  "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢦⡀⠉⠙⢦⡀⠀⠀⣀⣠⣤⣄⣀⠀⠀⠀⠀\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⣀⡤⠤⠴⠶⠤⠤⢽⣦⡀⠀⢹⡴⠚⠁⠀⢀⣀⣈⣳⣄⠀⠀\n");
    printf(GREEN "⠀⠀⠀⠀⠀⢠⠞⣁⡤⠴⠶⠶⣦⡄⠀⠀⠀⠀⠀⠀⠀⠶⠿⠭⠤⣄⣈⠙⠳⠀\n");
    printf(GREEN "⠀⠀⠀⠀⢠⡿⠋⠀⠀⢀⡴⠋⠁⠀⣀⡖⠛⢳⠴⠶⡄⠀⠀⠀⠀⠀⠈⠙⢦⠀\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⠀⡴⠋⣠⠴⠚⠉⠉⣧⣄⣷⡀⢀⣿⡀⠈⠙⠻⡍⠙⠲⢮⣧     " RESET "\t\t    ██╗    ██╗███████╗██╗      ██████╗ ██████╗ ███╗   ███╗███████╗\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⡞⣠⠞⠁⠀⠀⠀⣰⠃⠀⣸⠉⠉⠀⠙⢦⡀⠀⠸⡄⠀⠈⠟      " RESET  "\t\t    ██║    ██║██╔════╝██║     ██╔════╝██╔═══██╗████╗ ████║██╔════╝\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⢸⠟⠁⠀⠀⠀⠀⢠⠏⠉⢉⡇⠀⠀⠀⠀⠀⠉⠳⣄⢷⠀⠀⠀       " RESET  "\t\t    ██║ █╗ ██║█████╗  ██║     ██║     ██║   ██║██╔████╔██║█████╗\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡾⠤⠤⢼⠀⠀⠀⠀⠀⠀⠀⠀⠘⢿⠀⠀⠀        " RESET  "\t\t    ██║███╗██║██╔══╝  ██║     ██║     ██║   ██║██║╚██╔╝██║██╔══╝\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⡇⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠀⠀⠀        " RESET "\t\t    ╚███╔███╔╝███████╗███████╗╚██████╗╚██████╔╝██║ ╚═╝ ██║███████╗\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠉⠉⠉⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀        "RESET  "\t\t     ╚══╝╚══╝ ╚══════╝╚══════╝ ╚═════╝ ╚═════╝ ╚═╝     ╚═╝╚══════╝\n");
    printf(GREEN "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣀⣀⣀⣻⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⠀⠀⠀⠀⠀⣀⣀⡤⠤⠤⣿⠉⠉⠉⠘⣧⠤⢤⣄⣀⡀⠀⠀⠀⠀⠀⠀⠀\n");
    printf("⠀⠀⢀⡤⠖⠋⠉⠀⠀⠀⠀⠀⠙⠲⠤⠤⠴⠚⠁⠀⠀⠀⠉⠉⠓⠦⣄⠀⠀⠀\n");
    printf("⢀⡞⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⣄⠀\n");
    printf("⠘⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠒⠚⠀\n"RESET);

    printf(FONT"Please Enter your Name: "RESET);
    gets(person.name);
    
    printf(FONT"Please Enter your Address: "RESET);
    gets(person.address);
    
    printf(FONT"Please Enter your Nationality: "RESET);
    gets(person.nationality);
    
    printf(FONT"Please Enter your Email ID: "RESET);
    gets(person.email_id);

    system("cls");
    time_t timer = time(NULL);              // To get the present local time
    begin();

    return 0;
}


void begin(void)                            //Function for Home Page
{
    int decide;
    printf(FONT "\n-----------------------HOME PAGE--------------------------\n");
    printf("\n      HOW CAN WE HELP YOU? \n");
    printf("\n1.Book a Room\n2.Program\n3.Mini Casino\n4.Show My Details\n5.Complaints or Suggestion \n6.Check Out \n7.About Us\nEnter your choice:" RESET);
    scanf("%d",&decide);
    switch(decide)
    {
    case 1:  // book room
        book_room();
        break;
    case 2: // program 
        program();
        break;
    case 3: // mini casino
        mini_casino();
        break;
    case 4: // show details
        show_details();
        break;
    case 5: // Complaint and suggestion
        complaints_suggestions();
        printf("Thank you for your valuable suggestions!\n");
        begin();
        break;
    case 6: // Check out
        payment(person.billprice);
        printf("\t\t\t"FONT "Visit again!");
        printf("Thank you for trusting our service.\n" RESET);
        break;
    case 7:  // About us
        printf(YELLOW FONT "PALM VIEW RESORT:\n");
        printf("A beautiful cosmopolitan destination for a picturesque natural scenario, a blend of Natural and Artificial effort located on the border of");
        printf(" NANDA DEVI National park (A UNESCO World Heritage Site) allows you to enjoy the breeze of GANGA River flowing through the lap of NANDA DEVI National Park.\n");
        printf("Enjoying the spectacular sunset and its reflection on GANGA River along with grazing of deer on the bank by relaxing on our rugged cottages is the memorable experience you could enjoy only at ITC RESORTS. \n");
        printf("We would be more than happy to experience you Jungle Safari, canoe ride to Trekking and exploring the beauty of Joshimath.\n");
        printf("Clean and Comfortable room, Hot and Cold Water facilities, beautiful garden, family environment, local food are our salient features to give you taste of our Pahadi Culture.\n");
        printf("Satisfying you totally with our unique culture is our primary motto.\n" RESET);
        begin();
        break;
    }
}


void book_room(void)                       //Function to book rooms
{
    system("cls");
    if(person.roomno == 0){
        int type_of_rooms;
        char ch,c;
        printf("\nWhat type of room do you want to book?\n");
        printf("\n1.Basic Room Rs 1000\n2.Medium room Rs 2000\n3.DELUXE ROOM Rs 3000\n4.I don't want to choose anything\n");
        scanf("%d",&type_of_rooms);
        fflush(stdin);
        if(type_of_rooms==1){
            printf("\nDo you accept this room?(y/n)\n");
            scanf("%c",&c);
            if (c=='y')
            {
                system("cls");
                printf("\nYou choose Basic Room. Enjoy your stay\n");
                printf("Your Room No is 121");
                person.roomno = 121;
                person.roomtype = "Basic";
                person.billprice += 1000;
                begin();
            }
            else
                begin();
        }
        else if(type_of_rooms==2){
            printf("\nDo you accept this room?(y/n)\n");
            scanf("%c",&c);
            if(c=='y')
            {
                system("cls");
                printf("\nYou choose Medium Room. Enjoy your stay\n");
                printf("Your Room No is 212");
                person.billprice += 2000;
                person.roomno = 212;
                person.roomtype = "Medium";
                begin();
            }
            else
                begin();
        }
        else if(type_of_rooms==3){
            printf("\nDo u accept this room?(y/n)\n");
            scanf("%c",&c);
            if(c=='y')
            {
                system("cls");
                printf("\nYou choose Deluxe room. Enjoy your stay\n");
                printf("Your Room no is 312");
                person.billprice += 3000;
                person.roomtype = "Deluxe";
                person.roomno = 312;
                begin();
            }
            else
                begin();
        }
        else if(type_of_rooms==4)
            begin();
    }
    else{
        printf("You have already booked a room\n");
        begin();}
}


void program(void)                         //Function to choose programs
{
    system("cls");
    int p;
    printf("\nWhich program do you want to choose?\n");
    printf("\n1.Jungle Walk (Rs 1000) \n2.Jungle Jeep Drive (Rs 2000)\n3.Canoe ride (Rs 800) \n4. Cultural show (Rs 1000) \nEnter your choice: ");
    scanf("%d",&p);
    switch(p){
        case 1:
            system("cls");
            printf("\nYou choose Jungle Walk!!!\n");
            person.program = "Jungle Walk";
            person.billprice += 1000;
            begin();
            break;
        case 2:
            printf("\nYou choose Jungle Jeep Drive!!!\n");
            person.program = "Jeep Drive";
            person.billprice += 2000;
            begin();
            break;
        case 3:
            printf("\nYou choose Canoe Ride!!!\n");
            person.billprice+= 800;
            person.program = "Canoe Ride";
            begin();
            break;
        case 4:
            printf("\nYou choose Cultural Show!!!\n");
            person.billprice+= 1000;
            person.program = "Cultural show";
            begin();
            break;
        default:
            begin();
    }
}


void show_details(void)                    //Function to print details
{
    system("cls");
    time_t timer = time(NULL);
    printf("You can get your details in the hotel.txt file.\n");
    FILE* ifp;
    ifp = fopen("hotel.txt", "w+");
    if (ifp == NULL) 
    {
        printf("File cannot be opened.\n");
    }
    else 
    {
        fprintf(ifp, "+---------------------+----------------------------------------+\n");
        fprintf(ifp, "|       FIELDS        |              DETAILS                   |\n");
        fprintf(ifp, "+---------------------+----------------------------------------+\n");
        fprintf(ifp, "|        NAME         |          %-30s|\n", person.name);
        fprintf(ifp, "|     NATIONALITY     |          %-30s|\n", person.nationality);
        fprintf(ifp, "|      EMAIL ID       |          %-30s|\n", person.email_id);
        fprintf(ifp, "|      ADDRESS        |          %-30s|\n", person.address);
        fprintf(ifp, "|    ARRIVAL TIME     |          %s", ctime(&timer));
        fprintf(ifp, "|      ROOM NO        |          %-30d|\n", person.roomno);
        fprintf(ifp, "|     ROOM TYPE       |          %-30s|\n", person.roomtype);

        if (strcmp(person.program, "notchosen") != 0)
        fprintf(ifp, "|      PROGRAM        |          %-30s|\n", person.program);

        fprintf(ifp, "|     BILL PRICE      |          %-30d|\n", person.billprice);
        fprintf(ifp, "+---------------------+----------------------------------------+\n");
        fprintf(ifp, "Press 'p' to print your details.\n");
        fflush(ifp);
        fclose(ifp);
        begin();
    }
}


void complaints_suggestions(void)          //Function to receive Feedback
{
    system("cls");
    char complain[500];
    FILE *fpt;
    if(fpt == NULL)
    {
        printf("File cannot be opened\n");
    }
    printf("Please Enter your Complaints/Suggestions");
    fflush(stdin);
    gets(complain);
    fpt = fopen("complain.txt","w+");
    fputs(complain,fpt);
    fclose(fpt);
}


void GuessGame(int amount_bet, int* inhand_cash)
{
    char num[3] = { 'N', 'R', 'N' };
    printf("\nWait !! Number is shuffling its position...\n");
    srand((time(NULL)));
    int i, x, y, temp;
    /*Swapping the number's position five times using
    the random number for random index*/
    for (i = 0; i < 5; i++)
    {
        x = rand() % 3;
        y = rand() % 3;
        temp = num[x];
        num[x] = num[y];
        num[y] = temp;
    }
    int PlayerGuess;
    printf("\nYou may now guess the number in which R is present: ");
    scanf("%d", &PlayerGuess);
    if (num[PlayerGuess - 1] == 'R')
    {
        (*inhand_cash) += 2 * amount_bet;
        printf("You win ! The numbers are as follows: ");
        printf("\"%c %c %c\" ", num[0], num[1], num[2]);
        printf("\nYour inhand cash is now = %d \n", *inhand_cash);
    }else
    {
        (*inhand_cash) -= amount_bet;
        printf("You Loose ! The numbers are as follows: ");
        printf("\"%c %c %c\" ", num[0], num[1], num[2]);
        printf("\nYour inhand cash is now = %d \n", *inhand_cash);
    }
}


void mini_casino()                         //Casino Game
{
    int amount_bet, inhand_cash;
    /*You have to guess the right number among 3 numbers.The position where right number is is named as 'R' and rest two are named as 'N'
    If your guess is wrong, you loose the amount_bet from your inhand_cash.If you guess it right, you win twice the amount_bet in your
    inhand_cash. Keep playing and keep winning until you go out of cash*/
    printf("\n\t\t\t\t***-WELCOME TO MINI CASINO-*** \n");
    printf("\n----Enter the inhand_cash you have right now---- :\n ");
    scanf("%d", &inhand_cash);
    while (inhand_cash > 0)
    {
        printf("\n----Enter the amount_bet you want to play for---- : \n");
        scanf("%d", &amount_bet);
        if (inhand_cash == 0 || amount_bet > inhand_cash || amount_bet==0)
            break;
        else
            GuessGame(amount_bet, &inhand_cash);
    }

    if(amount_bet==0)
    {
        printf("\n\t\t\t\t Here's your cash: Rs %d ",inhand_cash);
        printf("\n\t\t\t\t*** Thank You for playing ***\n");
        printf("\n\t\t\t\t*** Do visit us next time ***\n");
    }

    if (inhand_cash == 0 || amount_bet > inhand_cash)
    {
        printf("\n\n\t\t\t**Sorry you don't have enough cash to play more**\n");
        printf("\n\t\t\t\t*** Thank You for playing ***\n");
        printf("\n\t\t\t\t*** Do visit us next time ***\n");
    }
    begin();
}

void payment(int bill)
{
    

    printf(FONT "\n\nTotal bill: Rs%d\n"RESET, bill );

    printf(FONT"\nSelect payment method:\n");
    printf("1. UPI\n");
    printf("2. Cash\n");
    printf("3. Credit Card\n");
    printf("4. Debit Card\n\n" );

    int paymentMethod;
    printf("Enter payment method number: "RESET);
    scanf("%d", &paymentMethod);

    printf("\nPayment Details:\n");

    switch (paymentMethod) {
        case 1:
            printf("\t\t\t\t   "FONT"Payment method: UPI\n");
            printf("\t\t\t\tUPI ID: palmviewresort@paytm\n");
            printf("\t\t\tPlease make the payment to the above UPI ID.\n"RESET);      
            break;
        case 2:
            printf("\t\t\t\t   "FONT"Payment method: Cash\n");
            printf("\t\t\tPlease pay the cash amount at the reception counter.\n"RESET);
            break;
        case 3:
            printf("\t\t\t\t   "FONT"Payment method: Credit Card\n");
            printf("\t\t\tPlease provide your credit card details for payment.\n"RESET);
            // Additional code to handle credit card payment goes here
            break;
        case 4:
            printf("\t\t\t\t   "FONT"Payment method: Debit Card\n");
            printf("\t\t\tPlease provide your debit card details for payment.\n"RESET);
            // Additional code to handle debit card payment goes here
            break;
        default:
            printf("Invalid payment method.\n");
            return;
    }
    printf("\t\t\t   "FONT"*****PAYMENT SUSCCESSFUL*****\n"RESET);
}

void showAnimation(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", str[i]);
        if (str[i] == '\n')
            Sleep(100);
        else
            Sleep(10);
    }
}
