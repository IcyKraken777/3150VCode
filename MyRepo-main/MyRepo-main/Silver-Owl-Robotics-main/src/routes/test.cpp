#include "../movement.hpp"
#include "../helper_functions.hpp"
#include "vex.h"
//PID Straight and turn arguments:
// MoveEncoderPID(TestPara, motor speed, encoder travel distance (inches), time to full speed(sec), relative heading(to starting position), braking?)
// TurnMaxTimePID(TestPara, Desired Heading -180 to 180, time out to calculate turn, Braking?)
// MoveTimePID(TestPara, motor speed, time traveled (sec), time to full speed, heading, false);
// NOTICE, REORGANIZE THE CODE!!!


// Note for Coders: All intakes, positive is INTAKE/SCORE, Negative is OUTAKE
// Pnuematics are their given names... Eg. Wings are Wings 
void nineleft() {
    // declare initial conditions
    //9ball assumption LEFT
    Lift.set(false);
PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
RunSecondStage(16);
RunBottom(100);
MoveEncoderPID(TestPara, 100,3.5, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,-80,false);//curve towards long goal


MoveEncoderPID(TestPara, 20,12.4, 0.1,5,true);//curve towards 2 balls
wait(300,msec);


//Addcodehere


wait(100,msec);
TurnMaxTimePID(AngPara, -24,0.5, true);//turn to goal


MoveEncoderPID(TestPara, -100,11.5, 0.1,-80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,33.3, 0.1,90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.7, true);//turn to goal
Lift.set(true);
wait(400,msec);
MoveEncoderPID(TestPara, 60,19.5, 0.1,0,true);//go toward goal for scoring
RunSecondStage(100);


wait(1800,msec);
RunSecondStage(0);
RunBottom(100);
MoveEncoderPID(TestPara, -100,11, 0.1,0,true);//back up from goal


Scrapper.set(true);
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to match load
MoveEncoderPID(TestPara, 50,15, 0.1,-180,true);//match load
wait(250,msec);
MoveEncoderPID(TestPara, -70,8, 0.1,-180,true);//back up from match load
Scrapper.set(false);
TurnMaxTimePID(AngPara,0,0.4, true);//turn to match load
MoveEncoderPID(TestPara, 70,14, 0.4,0,true);//back up from match load
RunSecondStage(100);

}
void nineright(){
    //9 Ball Right (Get the OG to work first)
   PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
RunSecondStage(20);
RunBottom(100);
MoveEncoderPID(TestPara, 80,4, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,80,false);//curve towards long goal


MoveEncoderPID(TestPara, 20,12, 0.1,-5,true);//curve towards 2 balls
wait(0,msec);


//Addcodehere


TurnMaxTimePID(AngPara, 27,0.2, true);//turn to goal
RunBottom(0);


MoveEncoderPID(TestPara, -100,9.5, 0.1,80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,36, 0.1,-90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.3, true);//turn to goal
Lift.set(true);
wait(200,msec);
MoveEncoderPID(TestPara, 60,18.5, 0.1,0,true);//go toward goal for scoring
RunBottom(100);
RunSecondStage(100);
wait(1800,msec);
RunSecondStage(10);
RunBottom(100);
MoveEncoderPID(TestPara, -100,11, 0.1,10,true);//back up from goal


Scrapper.set(true);
TurnMaxTimePID(AngPara, -160,0.7, true);//turn to match load
MoveEncoderPID(TestPara, 80,17, 0.5,180,true);//match load
wait(170,msec);
MoveEncoderPID(TestPara, -70,14, 0.1,175,true);//back up from match load
Scrapper.set(false);
TurnMaxTimePID(AngPara, 30,0.8, true);//turn toward long goal
MoveEncoderPID(TestPara, 50,10.5, 0.1,4,true);//
TurnMaxTimePID(AngPara, 0,0.4, true);//turn toward long goal
wait(240,msec);


RunSecondStage(100);
wait(1800,msec);
MoveEncoderPID(TestPara,-50,4.5, 0.1,4,true);//

    
}
void AWP(){
    // declare initial conditions
    //AWP
    //6+3Right
    PIDDataSet TestPara={1.1,0.03,0.31};
    PIDDataSet AngPara={1.5,0.1,0.13};
  //6+3 right
RunSecondStage(20);
RunBottom(100);
MoveEncoderPID(TestPara, 80,4, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,77,false);//curve towards long goal


MoveEncoderPID(TestPara, 20,12, 0.1,-5,true);//curve towards 2 balls
wait(300,msec);


//Addcodehere


TurnMaxTimePID(AngPara, 27,0.4, true);//turn to goal
RunBottom(0);
RunSecondStage(0);


MoveEncoderPID(TestPara, -100,9.5, 0.1,80,false);//back up from center
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,5.5, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,32.5, 0.1,-90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,0.7, true);//turn to goal
Lift.set(true);
MoveEncoderPID(TestPara, 80,16.5, 0.1,0,true);//go toward goal for scoring
RunBottom(100);
RunSecondStage(100);
wait(2200,msec);
RunSecondStage(10);
RunBottom(100);
MoveEncoderPID(TestPara, -100,11, 0.1,10,true);//back up from goal


Scrapper.set(true);
TurnMaxTimePID(AngPara, -170,0.7, true);//turn to match load
MoveEncoderPID(TestPara, 70,17, 0.5,180,true);//match load
wait(200,msec);
MoveEncoderPID(TestPara, -80,8, 0.1,180,true);//back up from match load
Scrapper.set(false);
TurnMaxTimePID(AngPara, -45,0.8, true);//turn toward long goal
RunSecondStage(-20);
RunBottom(-10);
MoveEncoderPID(TestPara,100,23, 0.1,-45,false);//
RunBottom(-100);
RunSecondStage(-100);
MoveEncoderPID(TestPara,100,33, 0.1,-45,true);//



    
}
void testskills(){
    //Skills
    PIDDataSet TestPara={2.4,0.02,0.31};
    PIDDataSet AngPara={2.4,0.03,0.13};
    PIDDataSet SpecialPara={2,0.01,0.27};
    //NOTE:time inbetween matchloaders (second and bottom stage) is determind by moves
    Lift.set(true);
    RunBottom(15);
    Scrapper.set(true);
    MoveEncoderPID(TestPara, 70,34, 0.6,0,true);
    wait(100,msec);
    TurnMaxTimePID(AngPara, 90,1, true);
    RunBottom(100);
    wait(100,msec);
    //Matchload
    MoveEncoderPID(TestPara, 80,26, 0.3,87,true);
    wait(200,msec);
    RunSecondStage(17);
    wait(400,msec);
    RunSecondStage(100);
    wait(400,msec);
    RunSecondStage(12);
    wait(200,msec);
    RunSecondStage(0);
    MoveEncoderPID(TestPara, -80,12, 0.4,95,true);
    RunBottom(0);
    Scrapper.set(false);
    TurnMaxTimePID(SpecialPara, -90,1.2, true);
    //Scoring
    MoveEncoderPID(TestPara, 70,14, 0.4,-90,true);
    RunSecondStage(100);
    RunBottom(100);
    wait(1700,msec);
    RunSecondStage(-17);
    //Next side movement
    MoveEncoderPID(TestPara, -80,12, 0.1,-90,true);
    RunSecondStage(0);
    TurnMaxTimePID(AngPara, -45,0.5, true);
    MoveEncoderPID(TestPara, 80,16, 0.4,-45,true);
    TurnMaxTimePID(AngPara, -90,0.7, true);
    MoveEncoderPID(TestPara, 100,100, 0.1,-90,true);
    Scrapper.set(true);
    //Tuning Next side movement to the MatchLoader
    TurnMaxTimePID(AngPara, -180,0.5, true);
    MoveEncoderPID(TestPara, 50,13, 0.4,180,true);
    wait(100,msec);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    wait(100,msec);
    MoveEncoderPID(TestPara, 70,37, 0.1,-90,true);
    wait(200,msec);
    //Second Matchload
    RunSecondStage(17);
    wait(200,msec);
    RunSecondStage(100);
    wait(500,msec);
    RunSecondStage(17);
    wait(200,msec);
    RunSecondStage(0);
    MoveEncoderPID(TestPara, -100,11, 0.2,-86,true);
    RunBottom(0);
    Scrapper.set(false);
    TurnMaxTimePID(SpecialPara, 96,1, true);
    //Scoring
    MoveEncoderPID(SpecialPara, 70,10, 0.4,91,true);
    RunSecondStage(100);
    RunBottom(100);
    wait(1700,msec);
    MoveEncoderPID(TestPara, -100,39, 0.4,70,true);
    wait(200,msec);
    RunSecondStage(12);
    //Clearing the blue goals
    TurnMaxTimePID(AngPara, 185,0.7, true);
    MoveEncoderPID(TestPara, 150,100, 0.1,188,true);
    MoveEncoderPID(TestPara, -70,20, 0.3,180,true);
    MoveEncoderPID(TestPara, 70,20, 0.3,180,true);
    //MoveEncoderPID(TestPara, 100,25, 0.1,165,true);
    //MoveEncoderPID(TestPara, 100,30, 0.1,180,true);
    //MoveEncoderPID(TestPara, 40,12, 0.1,180,true);
    //tuning this part
    TurnMaxTimePID(AngPara, 140,0.7, true);
    MoveEncoderPID(TestPara, 70,35, 0.1,140,true);
    TurnMaxTimePID(AngPara, 90,0.7, true);
    MoveEncoderPID(TestPara, 50,15, 0.1,90,true);
    RunSecondStage(100);
    wait(1700,msec);
    MoveEncoderPID(TestPara, -70,23, 0.1,90,true);
    TurnMaxTimePID(AngPara, -90,0.7, true);
    MoveEncoderPID(TestPara, 70,23, 0.1,-90,true);
    //Matchload once more 3rd corner
    RunSecondStage(17);
    wait(200,msec);
    RunSecondStage(100);
    wait(500,msec);
    RunSecondStage(17);
    wait(200,msec);
    RunSecondStage(0);
    MoveEncoderPID(TestPara, -100,12, 0.4,-87,true);
    RunBottom(0);
    Scrapper.set(false);
    //Scoring
    MoveEncoderPID(SpecialPara, 70,10, 0.4,91,true);
    RunSecondStage(100);
    RunBottom(100);
    wait(1700,msec);
    MoveEncoderPID(TestPara, -100,39, 0.4,70,true);
    wait(200,msec);
    RunSecondStage(12);
    //Clearing the blue goals
    TurnMaxTimePID(AngPara, 185,0.7, true);
    MoveEncoderPID(TestPara, 150,100, 0.05,187,true);
    


    //Test
    MoveEncoderPID(TestPara, -80,12, 0.1,-90,true);
    RunSecondStage(0);
    TurnMaxTimePID(AngPara, -45,0.5, true);
    MoveEncoderPID(TestPara, 80,16, 0.4,-45,true);
    TurnMaxTimePID(AngPara, -90,0.7, true);
    MoveEncoderPID(TestPara, 100,100, 0.1,-90,true);
    Scrapper.set(true);
    //Tuning Next side movement to the MatchLoader
    TurnMaxTimePID(AngPara, -180,0.5, true);
    MoveEncoderPID(TestPara, 50,13, 0.4,180,true);
    wait(100,msec);
    TurnMaxTimePID(AngPara, -90,0.5, true);
    wait(100,msec);
    MoveEncoderPID(TestPara, 70,37, 0.1,-90,true);
    wait(200,msec);
    //4th Matchload
    RunSecondStage(17);
    wait(200,msec);
    RunSecondStage(100);
    wait(500,msec);
    RunSecondStage(17);
    wait(200,msec);
    RunSecondStage(0);
    MoveEncoderPID(TestPara, -100,11, 0.2,-86,true);
    RunBottom(0);
    Scrapper.set(false);
    TurnMaxTimePID(SpecialPara, 96,1, true);
    //Scoring
    MoveEncoderPID(SpecialPara, 70,10, 0.4,91,true);
    RunSecondStage(100);
    RunBottom(100);
    wait(1700,msec);
    //Clear park 
    MoveEncoderPID(TestPara, -100,39, 0.4,70,true);
    wait(200,msec);
    RunSecondStage(12);
    //Park
    TurnMaxTimePID(AngPara, 185,0.7, true);
    MoveEncoderPID(TestPara, 150,100, 0.05,187,true);
    
}
//Ignore all code after this point for now
void test4(){
    //Possible 6+3
    PIDDataSet TestPara={1.1,0.03,0.31};
    PIDDataSet AngPara={1.5,0.1,0.13};
    //6+3 left
    Lift.set(false);
RunSecondStage(20);
RunBottom(100);
MoveEncoderPID(TestPara, 100,3.5, 0.4,0,false);//go toward 3 balls
wait(200,msec);
MoveEncoderPID(TestPara, 80,48, 0.1,-80,false);//curve towards long goal
MoveEncoderPID(TestPara, 20,12.4, 0.1,5,true);//curve towards 2 balls
wait(300,msec);
wait(100,msec);
TurnMaxTimePID(AngPara, -24,0.5, true);//turn to goal
RunSecondStage(0);
MoveEncoderPID(TestPara, -100,11.5, 0.1,-80,false);//back up from center
RunBottom(0);
Scrapper.set(false);
MoveEncoderPID(TestPara, -100,6, 0.1,0,false);//back up towards scoring area
MoveEncoderPID(TestPara, -100,34.7, 0.1,90,false);//curve around goal
TurnMaxTimePID(AngPara, 0,1, true);//turn to goal
Lift.set(true);
wait(400,msec);
MoveEncoderPID(TestPara, 60,22, 0.1,0,true);//go toward goal for scoring
RunSecondStage(100);
RunBottom(100);
wait(1800,msec);
RunSecondStage(0);
RunBottom(100);
MoveEncoderPID(TestPara, -100,10.5, 0.1,0,true);//back up from goal
Scrapper.set(true);
TurnMaxTimePID(AngPara, 180,0.5, true);//turn to match load
MoveEncoderPID(TestPara, 60,17, 0.1,-173,true);//match load
wait(300,msec);
MoveEncoderPID(TestPara, -70,7.5, 0.1,-180,true);//back up from match load
PIDDataSet NewPara={2.4,0.03,0.13};
TurnMaxTimePID(AngPara, 42,0.5, true);//turn to match load
Lift.set(false);
Scrapper.set(false);
MoveEncoderPID(TestPara, 90,50.5, 0.1,42,true);//back up from match load
wait(100,msec);
RunSecondStage(100);
RunBottom(100);

}
void test5(){
// Use this to tune PID values
PIDDataSet TestPara={1.1,0.03,0.31};
PIDDataSet AngPara={1.5,0.1,0.13};
RunSecondStage(17);
RunBottom(100);
MoveEncoderPID(TestPara, 80,17, 0.4,31,true);
wait(200,msec);
Scrapper.set(true);
MoveEncoderPID(TestPara, 100,14, 0.1,29,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 135,0.3, true);
MoveEncoderPID(TestPara, 100,39.5, 0.1,135,true);
wait(100,msec);
TurnMaxTimePID(AngPara, 180,0.5, true);
MoveEncoderPID(TestPara, 70,25, 0.1,180,true);
wait(670,msec);
MoveEncoderPID(TestPara, -70,19, 0.1,180,true);
Scrapper.set(false);
TurnMaxTimePID(AngPara, 0,0.5, true);
MoveEncoderPID(TestPara, 70,11, 0.1,0,true);
wait(100,msec);
RunSecondStage(100);

//MoveEncoderPID(TestPara, -100,24, 0.1,0,true);
//wait(500, msec);

}


void ninetest() {

    }
