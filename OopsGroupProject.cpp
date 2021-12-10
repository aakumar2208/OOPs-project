#include <iostream>
using namespace std;
class Questions
{
    private:
    int p=0;

    public:
    int points;
    void quiz1();
    void quiz2();
    void quiz3();
    void quiz4();
    void getpoints()
    {
        points=p;
    }
};

class Quiz : public Questions
{
    private:
    char grade;

    public:
    void getgrade()
    {
        if(points==5)
        grade='A';
        else if(points==4)
        grade='B';
        else if(points==3)
        grade='C';
        else if(points==2)
        grade='D';
        else
        grade='E';
    }
    void result()
    {
    if(grade=='A')
    {
        cout<<"Congratularions,you have answered all questions coorectly.\n"<<endl;
        cout<<"You have won Jackpot prize of Rs 10,000"<<endl;
        cout<<"Your Grade is :"<<grade<<endl;
    }
    else if(grade=='B')
    {
        cout<<"Congratularions,you have answered 4 questions coorectly.\n"<<endl;
        cout<<"You have won runner up prize of Rs 5,000"<<endl;
        cout<<"Your Grade is :"<<grade<<endl;
    }
    else if(grade=='C')
    {
        cout<<"You have answered "<<points<<" questions coorectly.\n"<<endl;
        cout<<"Better luck next time"<<endl;
        cout<<"Your Grade is :"<<grade<<endl;
    }
    else if(grade=='D')
    {
        cout<<"You have answered "<<points<<" questions coorectly.\n"<<endl;
        cout<<"Better luck next time"<<endl;
        cout<<"Your Grade is :"<<grade<<endl;
    }
    else if(grade=='E')
    {
        cout<<"You have answered "<<points<<" questions coorectly.\n"<<endl;
        cout<<"Better luck next time"<<endl;
        cout<<"Your Grade is :"<<grade<<endl;
    }
    else {}
    }
   
};

int main()
{
    Quiz b;

    cout<<"\n\nWelcome to the ultimate quiz\n"<<endl;
    cout<<"There are 4 categories in which you can play the quiz\n"<<endl;
    cout<<"1-Current Affairs by Ashna A. Kumar\n"<<endl;
    cout<<"2-Ancient History by Adarsh Aryan\n"<<endl;
    cout<<"3-General Knowledge by Harsh Vaidh\n"<<endl;
    cout<<"4-Sports by Ayan Nafees\n"<<endl;

    cout<<"Press 1 to play category 1\n"<<endl;
    cout<<"Press 2 to play category 2\n"<<endl;
    cout<<"Press 3 to play category 3\n"<<endl;
    cout<<"Press 4 to play category 4\n"<<endl;
    int ch;
    cin>>ch;
   switch(ch)
   {
       case 1:
       b.quiz1();
       b.getpoints();
       b.getgrade();
       b.result();
       break;
       case 2:
       b.quiz2();
       b.getpoints();
       b.getgrade();
       b.result();
       break;
       case 3:
       b.quiz3();
       b.getpoints();
       b.getgrade();
       b.result();
       break;
       case 4:
       b.quiz4();
       b.getpoints();
       b.getgrade();
       b.result();
       break;
       default:
       printf("Wrong input");
   }
   cout<<"Press 1 to replay the game\nPress 2 to quit the game"<<endl;
   int k;
   cin>>k;
   if(k==1)
   {
       main();
   }
   return 0;
}

void Questions::quiz1()
{

    int s=0,ans;
    cout<<"1-Current Affairs by Ashna A. Kumar\n"<<endl;
    cout<<"Question 1:The recently set-up ‘National Start-up Advisory Council’ is to be chaired by which Union Minister"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Minister of Micro, Small and Medium Enterprises\n"<<endl;
    cout<<"Option 2-Minister of Corporate Affairs\n"<<endl;
    cout<<"Option 3-Minister of Commerce and Industry\n"<<endl;
    cout<<"Option 4-] Minister of Skill Development and Entrepreneurship\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==3)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 2:Which state recently ordered the prohibition of online supply of food without hygiene rating from food business operators (FBOs<<endl"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Kerala\n"<<endl;
    cout<<"Option 2-Odisha\n"<<endl;
    cout<<"Option 3-Punjab\n"<<endl;
    cout<<"Option 4-Rajasthan\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==3)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 3:Which state recently announced to provide credit guarantee of loans for higher education"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Odisha\n"<<endl;
    cout<<"Option 2-Haryana\n"<<endl;
    cout<<"Option 3-Jharkhand\n"<<endl;
    cout<<"Option 4-Bihar\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 4:Which Indian state declared coronavirus (COVID-19<<endl as epidemic, for the first time in the country"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Rajasthan\n"<<endl;
    cout<<"Option 2-Haryana\n"<<endl;
    cout<<"Option 3-Maharashtra\n"<<endl;
    cout<<"Option 4-Karnataka\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 5:.‘Chaitra Jatra’ is an annual festival celebrated in which Indian state"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-West Bengal\n"<<endl;
    cout<<"Option 2-Odisha\n"<<endl;
    cout<<"Option 3-Telangana\n"<<endl;
    cout<<"Option 4-Andhra Pradesh\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    p=s;
    
    return ;
}

void Questions::quiz2()
{
    int s=0,ans;
    cout<<"2-Ancient History by Adarsh Aryan\n"<<endl;
    
    cout<<"Question 1:Which among the following is not a correct pair"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Ellora Caves-Rastrakuta Rulers\n"<<endl;
    cout<<"Option 2-Mahabalipuram-Pallava Rulers\n"<<endl;
    cout<<"Option 3-Khajuraho-Chandellas\n"<<endl;
    cout<<"Option 4-Elephanta Caves-Mauyra Era\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==4)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 2:Which among the following Kavya of Sanskrit, deal with court intrigues & access to power of Chandragupta Maurya"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Mrichhakatika\n"<<endl;
    cout<<"Option 2-Ritusamhara\n"<<endl;
    cout<<"Option 3-Kumarasambhava\n"<<endl;
    cout<<"Option 4-Mudrarakshahsa\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==4)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 3:On which of the following systems of Hindu Philosophy , Shankaracharya wrote commentary in 9th century AD"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Sankhya\n"<<endl;
    cout<<"Option 2-Vaisheshika\n"<<endl;
    cout<<"Option 3-Yoga\n"<<endl;
    cout<<"Option 4-Uttarmimansa\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==4)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 4:The eighth-century tripartite power struggle was among which of the following"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Cholas, Rastrakutas and Yadavas\n"<<endl;
    cout<<"Option 2-Chalukyas, Pallavas and Pandyas\n"<<endl;
    cout<<"Option 3-Cholas, Pandyas and Chalukyas\n"<<endl;
    cout<<"Option 4-Chalukyas, Pallavas and Yadavas\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 5:Which among the following is not correct"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-The capital of pandyas was Madurai\n"<<endl;
    cout<<"Option 2-The capital of Cheras was Vanchi\n"<<endl;
    cout<<"Option 3-Capital of the Videha Kingdom – Mithila\n"<<endl;
    cout<<"Option 4-Capital of Gahadwal Dynasty – Kannauj\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==3)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    p=s;

    return ;
}

void Questions::quiz3()
{
    int s=0,ans;
    cout<<"3-General Knowledge by Harsh Vaidh\n"<<endl;
    
    cout<<"Question 1:Who was the first Indian woman in Space"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1- Kalpana Chawla\n"<<endl;
    cout<<"Option 2- Sunita Williams\n"<<endl;
    cout<<"Option 3- Koneru Humpy\n"<<endl;
    cout<<"Option 4- Jessica Meir \n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==1)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 2:Who was the first Indian in space"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Vikram Ambalal\n"<<endl;
    cout<<"Option 2-Ravish Malhotra\n"<<endl;
    cout<<"Option 3-Rakesh Sharma\n"<<endl;
    cout<<"Option 4-Nagapathi Bhat\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==3)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 3: Who was the first Man to Climb Mount Everest Without Oxygen"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Junko Tabei\n"<<endl;
    cout<<"Option 2-Reinhold Messner\n"<<endl;
    cout<<"Option 3-Peter Habeler\n"<<endl;
    cout<<"Option 4-Phu Dorji\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==4)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 4:Who built the Jama Masjid"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Jahangir\n"<<endl;
    cout<<"Option 2-Akbar\n"<<endl;
    cout<<"Option 3-Imam Bukhari\n"<<endl;
    cout<<"Option 4-Shah Jahan\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==4)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 5:Who wrote the Indian National Anthem"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Bakim Chandra Chatterji\n"<<endl;
    cout<<"Option 2-Rabindranath Tagore\n"<<endl;
    cout<<"Option 3-Swami Vivekanand\n"<<endl;
    cout<<"Option 4-Sarojini Naidu\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    p=s;
    return ;
}

void Questions::quiz4()
{ 
    int s=0,ans;
    cout<<"4-Sports by Ayan Nafees\n"<<endl;
    
    cout<<"Question 1:.Durand Cup is associated with"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Swimming\n"<<endl;
    cout<<"Option 2-Football\n"<<endl;
    cout<<"Option 3-Table Tennis\n"<<endl;
    cout<<"Option 4-Hockey\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 2:Who was the first Indian International Cricket Council President"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Sharad Pawar\n"<<endl;
    cout<<"Option 2-Jag Mohan Dalmia\n"<<endl;
    cout<<"Option 3-Ray Mali\n"<<endl;
    cout<<"Option 4-Sunil Gavaskar\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 3:Birdie and Eagle are two terms related to which of the following sports"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Polo\n"<<endl;
    cout<<"Option 2-Golf\n"<<endl;
    cout<<"Option 3-Chess\n"<<endl;
    cout<<"Option 4-Billiards\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==2)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 4:.The word “Agricultural shot” is known to be used sometimes in which among the following sports"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Cricket\n"<<endl;
    cout<<"Option 2-Hockey\n"<<endl;
    cout<<"Option 3-Golf\n"<<endl;
    cout<<"Option 4-Polo\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==1)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    cout<<"Question 5:Who is the current manager of Manchester United"<<endl;
    cout<<"?\n"<<endl;
    cout<<"Option 1-Jose Mourinho\n"<<endl;
    cout<<"Option 2-Marco Silva\n"<<endl;
    cout<<"Option 3-Claude Puel\n"<<endl;
    cout<<"Option 4-Ole Gunnar Solskjaer\n"<<endl;
    cout<<"Option 5-Pass the question\n"<<endl;
    cout<<"Press- 1 for option 1, 2 for option 2, 3 for option 3, 4 for option 4, 5 for option  5\n"<<endl;
    cin>>ans;
    if(ans==5)
    {
        cout<<"Ok passed\n"<<endl;
    }
    else if(ans==4)
    {
        cout<<"Right answer\n"<<endl;
        s++;
    }
    else
    {
        cout<<"Wrong answer\n"<<endl;
    }

    p=s;
    return ;
}
