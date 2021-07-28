#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char arr[6][50]={"",
                 "Cricket",
                "Football",
                "Chess",
                "Film",
                "Web-Series"
    
};

int op;

struct node{
    int data;
    struct node *link;
};
struct node *top=0;

void push(int op){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=op;
    newnode->link=top;
    top=newnode;
}

void hist(){
    struct node *temp;

    temp=top;
    printf("\n------------------------------------------------------------\n\n");
    if(top==NULL){
        printf("Please visit website First : \n");
    }
    else{
        while(temp!=0){
            printf("                     %d.  ",temp->data);
            printf("%s\n",arr[temp->data]);
            temp=temp->link;
        }
    }
    printf("\n------------------------------------------------------------\n");
}
void all_hist(){

    while (top!=NULL) {
        top=top->link;
        free(top);
    }
    free(top);
}
void Delete_per(int x){
    struct node *temp,*t,*w;
    temp=top;
    while(temp->data!=x){
        w=temp;
        temp=temp->link;
    }
    t=temp->link;
    w->link=t;

}

void pop(){
    struct node *temp;
    temp=top;
    if(top==NULL){
        printf("There is no History :");
    }
    else{
        top=top->link;
        free(temp);
    }
}

int main(){
    int n=1;
    while(n!=0){
        
        printf("Please select option from the list :\n");
        printf("1. Cricket\n");
        printf("2. Football\n");
        printf("3. Chess\n");
        printf("4. Film\n");
        printf("5. Web-Series\n");
        printf("6. Watch History\n");
        printf("7. Delete perticular History\n");
        printf("8. Delete all History\n");
        printf("9. Delete recent History\n");
        printf("0. exit\n");
        scanf("%d",&op);
        if(op==0){
            n=op;
        }
        else if(op==1){
            printf("==============================================================================================\n");
            printf("                      ----- |---| ----- ----- |  / |---- -----\n");
            printf("                      |     |   |   |   |     | /  |       |\n");
            printf("                      |     |   |   |   |     |/   |       |\n");
            printf("                      |     |---|   |   |     |    |--     |\n");
            printf("                      |     |\\      |   |     |\\   |       |\n");
            printf("                      |     | \\     |   |     | \\  |       |\n");
            printf("                      ----- |  \\  ----- ----- |  \\ |----   |\n");
            printf("==============================================================================================\n");
            
            
            
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("-  NEW DELHI: The 13th edition of the Indian Premier League is nearing its end with defending champions Mumbai Indians once again in familiar territory. Rohit Sharma and co. Are in their sixth IPL final, which they entered with an emphatic 57-run victory over Delhi Capitals in the Qualifier 1.\n-  Ahead of Qualifier 2 between Sunrisers Hyderabad and Delhi Capitals, TimesofIndia.com conducted a poll on the site and on Twitter, asking fans to vote for the team they think are the favourites to win the title. The three options were the three remaining teams - Mumbai Indians, Delhi Capitals and Sunrisers Hyderabad\n-  Mumbai, the tournament's most successful team with four titles so far, emerged as the clear winner by a big margin with 52 and 49.3 vote share on the site and Twitter respectively. Mumbai, who became the first side to reach the playoffs this season lost a bit of their momentum as they suffered a 10-wicket thrashing at the hands of the Sunrisers Hyderabad on Tuesday. But they still finished the league stage on top of the points table with nine wins from 14 matches.Mumbai entering the IPL final this season after winning their first playoff game is only the third instance of a team finishing as the Numero Uno team in the league phase and entering the title round after winning Qualifier 1.Since the IPL playoffs began in 2011, only Chennai Super Kings (in 2013) and MI (2019) are teams that have finished on top of the table and won the Qualifier 1 game.");
            printf("\n-  Also, MI remain the only team in IPL history to have won the title without losing any of their playoff matches, which they did last year. They are on course for an encore this year.Delhi might have finished second in the standings, but Sunrisers have a big edge over DC in the poll conducted on the TOI site and on Twitter. SRH got 35 vote on the site and 31.9 on Twitter. Only 13 fans on the site and 18.8 on Twitter opined that Delhi will end their wait for their elusive maiden title.");
            printf("\n-  SRH were pushed to the limit after a slow start in the tournament, but picked up momentum at the right time and dished out a scintillating effort in the second leg to qualify for the play-offs by finishing third in the league standings, just ahead of Royal Challengers Bangalore. SRH effected a remarkable turnaround in their final three games -- defeating Delhi Capitals, RCB and table-toppers Mumbai Indians to book a last-four berth.");
            printf("\n-  The Capitals, on the other hand, were cruising till their first nine games. They won seven in that phase before an inexplicable slump saw them lose five out of their next six matches. But they roared back to form by thrashing Royal Challengers Bangalore by six wickets to grab the second spot, after four successive losses.");
           printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            push(op);
        }
        else if(op==2){
            printf("==============================================================================================\n");
            printf("                      _____ _____ _____ _____ _____  _____      \n");
            printf("                      |     |   | |   |   |   |    | |   | |     |\n");
            printf("                      |     |   | |   |   |   |    | |   | |     |\n");
            printf("                      |__   |   | |   |   |   |____/ |___| |     |\n");
            printf("                      |     |   | |   |   |   |    \\ |   | |     |\n");
            printf("                      |     |   | |   |   |   |    | |   | |     |\n");
            printf("                      |     |___| |___|   |   |____/ |   | |____ |____\n");
            printf("\n==============================================================================================\n");
            
            
            printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("-  Lionel Messi came on at half-time to rescue Barcelona by scoring twice, including his first goal from open play this season, in a 5-2 victory over Real Betis on Saturday. Messi had been rested by Ronald Koeman but was thrown on with the game in the balance after Antoine Griezmann missed a penalty in the Argentinian's absence, before Antonio Sanabria cancelled out Ousmane Dembele's opener. But within four minutes of his introduction, Messi gave Griezmann an open goal with a superb dummy and then scored twice himself, the first a penalty that saw Betis' Aissa Mandi sent off for a handball on the line. \n-  In between, Loren Moron had given Betis brief hope but Messi's second and a late strike from Pedri ensured Barcelona ended their four-match winless run, and climbed to eighth in La Liga.\n-  Koeman's assistant Alfred Schreuder said before the match Messi was not fresh, but the 33-year-old gave a resounding answer to those suggesting his performances this season, have been evidence of decline.\n-  Even before registering his first goal of the season from open play, Messi had turned this game, putting Barcelona in control with his brilliant dummy for Griezmann and then a penalty won from a Dembele shot, teed up by his pass.\n-  Griezmann also got his goal with Messi on the pitch, but was unable to prove a point without him.Despite a lively opening half an hour, Griezmann missed a penalty before Messi scored his and the Frenchman was eventually substituted, pictured sitting in the stands with a gloomy expression while Barca romped to victory.\n-  Neither team seemed too interested in defending early on as Griezmann and Ansu Fati fired off two shots each, while Marc-Andre ter Stegen had to be alert to push away William Carvalho's header.\n-  Barca broke through after 22 minutes when Dembele cut inside onto his left foot, before hammering a finish past Claudio Bravo for his first league goal in 13 months.When Mandi conceded a penalty after sliding in on Ansu at the front post, Griezmann had his chance to add a goal to his busy first-half display.\n-  But Griezmann missed, a tame shot easily saved by Bravo, before Betis scored, Sanabria finishing after Cristian Tello had again surged clear down the left.Messi came on and four minutes later Barca were ahead, the Argentinian scuttling to meet Jordi Alba's cross at the front post, only to step over the ball, fooling his marker and the goalkeeper, to leave Griezmann with an open net.");
           printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

            push(op);
        }
        else if(op==3){
            printf("==============================================================================================\n");
            printf("                      _____       _____ _____ _____ \n");
            printf("                      |     |     |     |     |     \n");
            printf("                      |     |     |     |     |     \n");
            printf("                      |     |___  |__   |___  |___ \n");
            printf("                      |     |   | |         |     |\n");
            printf("                      |     |   | |         |     |\n");
            printf("                      |____ |   | |____ ____| ____|\n");
            printf("\n==============================================================================================\n");
            
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("-  It's been seven years since a chess player got the Arjuna award and the iconic Viswanathan Anand is hoping that India's triumphant campaign at the online Chess Olympiad will change this when the national sporting honours are announced next year. In an interview to PTI after India won the top honours jointly with Russia on Sunday, Anand, a recipient of both the Arjuna and the Khel Ratna, said award recognition is due for the sport's practitioners in India.\n-  I hope this will lead to all sorts of positive things including the reconsideration in the Sports Ministry of the Arjuna award and the Dronacharya awards for chess. It has been a long time, said the country's first Khel Ratna awardee, India's highest sporting honour.\n-The last time a chess player received the Arjuna was in 2013 when Abhijeet Gupta was bestowed the honour, while a chess coach has been given the Dronacharya just twice -- Raghunandan Vasant Gokhale (1986) and Koneru Ashok (2006).\n-  Sometimes you need to show that we are still there and I hope this results in positive impetus for many things, Anand said.The five-time world champion was expectedly ecstatic about the triumph even though he didn't expect it after server malfunction led to two Indian losses, prompting an appeal from the team.\n-Nihal Sarin and Divya Deshmukh lost in the second round of the finale due to disconnection and server malfunction.\n-  I didn't anticipate this. I mean clearly the strongest argument in our favour was that this disconnection was not our fault. The rules are clear that if a team loses by disconnection, they forfeit the game.\n-  I expected something along the lines of replaying the second match...You know the Russians may not have been happy with this and there would have been discussions. I was expecting a replay.I think then the FIDE opted for the other route, declared both as winners. Look these are teething problems. We are starting online chess, this will not be the last disconnection in online chess. I think this was a fair decision, he said.\n-  The senior Indian men's team comprised, apart from Anand, Vidit Gujarati (captain), P. Harikrishna and Arvindh Chithambaram (reserves).The senior women's side featured Koneru Humpy, Dronavalli Harika, Bhakti Kulkarni and R. Vaishali.");
          printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            push(op);
        }
        else if(op==4){
            printf("==============================================================================================\n");
            printf("                      _____ _____       |\\      /|\n");
            printf("                      |       |   |     | \\    / |\n");
            printf("                      |       |   |     |  \\  /  |\n");
            printf("                      |__     |   |     |   \\/   |\n");
            printf("                      |       |   |     |        |\n");
            printf("                      |       |   |     |        |\n");
            printf("                      |     __|__ |____ |        |\n");
            printf("\n==============================================================================================\n");
            
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("New Delhi: Looks like Amitabh Bachchan has added one more film to his impressive list of upcoming projects. On Saturday, trade analyst Taran Adarsh reported that Mr Bachchan and Ajay Devgn have collaborated for a new film titled Mayday. By Taran Adarsh's description, it appears that Mayday will turn out to be a compelling thriller. Ajay Devgn, who has shared screen space with Big B, will direct the 78-year-old megastar in Mayday. Ajay Devgn to direct Amitabh Bachchan in an edge-of-the-seat human drama titled Mayday, tweeted Taran Adarsh.While Ajay Devgn will also co-star with Mr Bachchan in the film, the rest of the cast is yet to be finalized. The film's schedule will begin in December: Ajay is playing a pilot in the film... Remaining cast under finalisation... Produced and directed by Ajay Devgn... Starts this December in Hyderabad, tweeted Taran Adarsh.\n-   After six long months, it looks like Bollywood is finally back on track with people resuming shooting of their stalled films. While films like Akshay Kumar starrer ‘Bell Bottom’ and Salman Khan starrer ‘Radhe: Your Most Wanted Bhai’ have called it a wrap, others like Shahid Kapoor starrer ‘Jersey’ is in the last schedule of their shoot.Well, this is not all. This month also saw as much as five new upcoming film announcements in Bollywood. From Rohit Shetty’s ‘Cirkus’ starring Ranveer Singh to Rajkummar Rao and Bhumi Pednekar starrer ‘Badhaai Do’ to Ayushmann Khurrana and Vaani Kapoor starrer ‘Chandigarh Kare Aashiqui’, here’s a rundown of films that you can look forward to.After their successful collaboration in ‘Simmba’, Rohit Shetty and Ranveer Singh are all set to team up for the second time for their upcoming film, ‘Cirkus’. The film is reportedly based on William Shakespeare’s play, ‘The Comedy of Errors’.Ranveer Singh will reportedly be seen playing a double role in the movie alongside Jacqueline Fernandez and Pooja Hegde. The film, which will be shot around Mumbai, Ooty, and Goa, is slated for a Diwali 2021 release.");
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            push(op);
        }
        else if(op==5){
            printf("==============================================================================================\n");
            
            printf("         \\                    / _____ _____    _____ _____ _____ _____ _____ _____ \n");
            printf("          \\                  /  |     |    |   |     |     |   |   |   |     |     \n");
            printf("           \\                /   |     |    |   |     |     |   |   |   |     |     \n");
            printf("            \\      /\\      /    |__   |____/ _ |___  |__   |___|   |   |__   |___  \n");
            printf("             \\    /  \\    /     |     |    \\       | |     |\\      |   |         | \n");
            printf("              \\  /    \\  /      |     |    |       | |     | \\     |   |         | \n");
            printf("               \\/      \\/       |____ |____/   ____| |____ |  \\  __|__ |____ ____| \n");
            
            printf("\n==============================================================================================\n");
            printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            printf("-  Best Indian Hindi Web Series to Watch:  Over the last few years, the internet has become a hub of new talent and an amazing collection of hindi web series that has made binge-watching our favourite activity.While with the emergence of the Hindi web series in the country, a fresh wave has made us watch innovative and interesting Indian web series content. Today creators are not shying away from thinking and creating excellent content and this is helping the audience as well to understand the depth of cinema and enjoy it at the same time.\n-  The round two of Mirzapur series returned to Amazon Prime Video with throat-slittings, subtle clash of egos and a few new faces. Although people are quite familiar with the grammar of the show but this time story struggles to catch the momentum with the same effect to that of the previous season.For the ones who love their celluloid filled with blood, revenge and rage might be a little disappointed by the crime-drama as this time the show is more about mind games, toned down conversations, building networks and lack of dark humour. However, in the first season the story was a little unaware of its hero, but this time it has many. The position can be held by Isha Talwar’s Madhuri Yadav, Shweta Tripathi’s Golu or even Ali Fazal’s Guddu Bhaiyya. Meanwhile, the plot this season holds a lot of resemblance between the characters and apart from the constant hunger to win Mirzapur, the only thing which is even more common between them is revenge.");
           printf("\n-------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            push(op);
        }
        else if(op==6){
            hist();
        }
        else if(op==7){
            printf("please enter which number Histroy you want to delete :");
            int x;
            scanf("%d",&x);
            Delete_per(x);
        }
        else if(op==8){
            all_hist();
        }
        else if (op==9){
            pop();
        }
        else{
            printf("Please enter Valid inpute");
        }
    }
    return 0;
}
