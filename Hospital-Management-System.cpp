/*HOSPITAL MANAGEMENT
By Ayush Gupta*// 
#include<iostream> 
#include<fstream> 
#include<stdlib.h> 
#include<stdio.h> 
#include<string.h> 
#include<conio.h> 
#include"patient.h" 
#include"appointment.h" 
#include"enquiry.h" 
#include"casualty.h" 
#include"pharmacy.h" 
 
using namespace std; 
 
int main() 
{ ifstream read_file; 
  ofstream write_file; 
  ofstream temp_file; 
   
  PATIENT P; 

 
 
Page | 31  
 
  APPOINTMENT A; 
  ENQUIRY E; 
  CASUALTY C; 
  DELIVERY D; 
  PHARMACY PH; 
  AMBULANCE AMB; 
  int op; 
  int fnd=0; 
  float total=0; 
  int fnddoc=0; 
  while(op!=9) 
 {  system("cls"); 
   
    /*MAIN PROGRAM CODING BEGINS*/ 
    cout<<"\t "; 
    for(int i=0;i<15;i++) 
    cout<<char(178); 
    cout<<" WELCOME TO ST. FRUTUS HOSPITAL "; 
    for(int i=0;i<15;i++) 
    cout<<char(178); 
   
    /*MAIN PROGRAM MENU*/ 
  cout<<"\n\n1. Registration and Enquiry"; 
  cout<<"\n2. Appointments Management"; 
  cout<<"\n3. Casualty and Emergency"; 

 
 
Page | 32  
 
  cout<<"\n4. Pharmacy and Medicines"; 
  cout<<"\n5. Ambulance and Conveyance"; 
  cout<<"\n6. Financial and Billing";  
  cout<<"\n7. Information Feeding (Only for Hospital Staff)"; 
  cout<<"\n8. About Us"; 
  cout<<"\n9. Exit"; 
  cout<<"\n\n  Enter your option "<<char(26)<<" "; 
  cin>>op; 
   
  /*Switching op for main menu*/ 
  switch(op) 
   { case 1: system("cls"); 
                   int reop; 
                   cout<<"\t "; 
                   for(int i=0;i<10;i++) 
                  cout<<char(17); 
                  cout<<" REGISTRATION & ENQUIRY MODULE"; 
                 for(int i=0;i<10;i++) 
                 cout<<char(16); 
              
             /*MENU FOR REGISTRATION AND ENQUIRY BEGINS*/ 
             cout<<"\n\n1. Patient Registration"; 
             cout<<"\n2. Enquiries"; 
             cout<<"\n3. Exit"; 
             cout<<"\n\n   Enter your option "<<char(26)<<" "; 

 
 
Page | 33  
 
             cin>>reop; 
              
 
 /*Switching reop for the menu of the Registration a nd Enquiry module*/ 
            switch(reop) 
                                     { case 1: system("cls"); 
                                   cout<<"\t "; 
                                   cout<<"************** PATIENT REGISTRATION **************"; 
                       cout<<"\n\n"; 
                     /*Patient registration process*/ 
                                     P.registration(); 
            write_file.open("PATIENT",ios::out); 
            write_file.write((char*)&P, sizeof(P)); 
            write_file.close(); 
  
                /*Patient registered*/ 
                        break; 
       
                             
                                        case 2: system("cls"); 
                                                      int eop; 
                             cout<<"\t "; 
                                                      cout<<"???????????? ENQUIRY MODULE ????????????"; 
                             cout<<"\n\n";      
                                               /*MENU FOR ENQUIRY MODULE*/ 
                 cout<<"1. Enquiry about patient"; 

 
 
Page | 34  
 
                 cout<<"\n2. Other enquiries"; 
                             cout<<"\n\n  Enter your option"<<char(26)<<" "; 
                 cin>>eop; 
                       /*Switching eop for the menu of Enquiry Module*/ 
     switch(eop) 
             { case 1: system("cls"); 
                             cout<<"\t "; 
                                                                  for(int i=0;i<10;i++) 
                                          cout<<char(15); 
                                          cout<<" PATIENT ENQUIRY "; 
                              for(int i=0;i<10;i++) 
                               cout<<char(15); 
                               int trg; 
                                                                              /*Enquiry regarding a admitted patient*/        
                                                                       cout<<"\n\n  Enter the registration number of the patient : "; 
                               cin>>trg; 
                                read_file.open("PATIENT", ios::in); 
                                while(read_file.read((char*)&P, sizeof(P))) 
          { if(P.registration_number()==trg) 
                          {   P.show(); 
                              cin.get(); 
                          } 
           else 

 
 
Page | 35  
 
                                                                                      cout<<"\nSorry! We could not find the enquired patient";  
        } 
                   read_file.close(); 
                                                                                                           /*Patient enquiry successful*/ 
    break; 
         
 case 2:  system("cls"); 
             int oten; 
             while(oten!=3) 
                                      {   cout<<"\t "; 
                  for(int i=0;i<10;i++) 
                              cout<<char(15); 
                 cout<<" OTHER ENQUIRIES "; 
                 for(int i=0;i<10;i++) 
                 cout<<char(15); 
                                                                                   /*MENU FOR OTHER ENQUIRIES MODULE*/ 
            cout<<"\n\n1. Informations about the Doctors"; 
            cout<<"\n2. Information about the Hospital Departments"; 
             cout<<"\n3. Exit"; 
             cout<<"\n\n  Enter the option "<<char(26)<<" "; 
             cin>>oten; 
              if(oten==1||oten==2) 

 
 
Page | 36  
 
             cout<<"\n\n For the informations regarding the medical   staff and the departments please choose option 8(About Us) from the main menu of the hospital\n\n"; 
                         
/*Other enquiries case over*/ 
                                                                                        } 
                                   break; 
                                           default: cout<<"\nWRONG OPTION"; 
                                break; 
                                                                               } 
                              break; /*BREAK statement for the case 2 ENQUIRIES*/
 
       
                                   case 3: exit; 
                        break; 
                                 default: cout<<"\nWRONG OPTION"; 
                         break;    
            
                  
     } 
                             break ; /*BREAK statement for the case 1 of the MAIN MENU OF THE PROGRAM*/ 
   
  case 2: system("cls"); 
                int apmn; 
                cout<<"\t "; 

 
 
Page | 37  
 
                 for(int i=0;i<10;i++) 
                 cout<<char(176); 
                              cout<<" APPOINTMENT MANAGEMENT "; 
                              for(int i=0;i<10;i++) 
                  cout<<char(176); 
     
  
/*MENU FOR APPOINTMENT MANAGEMENT*/ 
    cout<<"\n\n1. Fix an Appointment"; 
    cout<<"\n2. Check out scheduled Appointment"; 
    cout<<"\n3. Cancel an Appointment"; 
    cout<<"\n4. Exit"; 
    cout<<"\n\n Enter the option "<<char(26)<<" "; 
    cin>>apmn; 
     
   
 /*Switching apmn for the menu of Appointment Manag ement 
Module*/ 
     
                                           switch(apmn) 
       { case 1: system("cls"); 
                       cout<<"\t "; 
                       for(int i=0;i<15;i++) 
                       cout<<char(177); 
                        cout<<" APPOINTMENT SCHEDULING "; 
                        for(int i=0;i<15;i++) 
                        cout<<char(177); 

 
 
Page | 38  
 
                  
   
                    /*Appointment fixing process*/ 
                       A.appoint(); 
                       write_file.open("APPOINTMENT", ios::out); 
                       write_file.write((char*)&A, sizeof(A)); 
                        write_file.close(); 
                                                          /*Appointment fixed*/ 
                      break; 
             
         case 2: system("cls"); 
                       int chapno; 
          cout<<"\t "; 
          for(int i=0;i<15;i++) 
          cout<<char(254); 
          cout<<" CHECK YOUR APPOINTMENT "; 
          for(int i=0;i<15;i++) 
          cout<<char(254); 
         
   
                   /*Appointment viewing*/ 
     cout<<"\n\n Enter your appointment number: "; 
     cin>>chapno; 
     read_file.open("APPOINTMENT", ios::in); 
     while(read_file.read((char*)&A, sizeof(A))) 
     { if(A.appoint_number()==chapno) 
      {  A.showappoint(); 

 
 
Page | 39  
 
                cin.get(); 
       } 
         else 
         cout<<"\n\nAppointment doesn't exit";  
      } 
     read_file.close(); 
     
/*Appointment viewing done*/ 
     break; 
          
         case 3:     system("cls"); 
              int apcno; 
             char yn; 
             char found; 
             cout<<"\t "; 
             for(int i=0;i<15;i++) 
             cout<<char(240); 
             cout<<" APPOINTMENT CANCELLATION "; 
             for(int i=0;i<15;i++) 
             cout<<char(240); 
    
   /*Appointment cancelling process*/ 
             cout<<"\n\n Enter your appointment number: "; 
             cin>>apcno; 
            read_file.open("APPOINTMENT", ios::in); 
            temp_file.open("tempo",ios::out); 
            while(!read_file.eof()) 

 
 
Page | 40  
 
             { read_file.read((char*)&A, sizeof(A)); 
                if(A.appoint_number()==apcno) 
                  {  A.showappoint(); 
                     found='t'; 
                     cout<<"\nAre you sure you want to cancel/delete your appointment? (Y=Yes and N=No) "; 
           cin>>yn; 
            if(yn=='N') 
                      temp_file.write((char*)&A, sizeof(A));  
       } 
                  else 
     { found='f'; 
       temp_file.write((char*)&A,sizeof(A)); 
     } 
            
            } 
                  if(found=='f') 
            cout<<"\n Appointment not found\n"; 
            read_file.close(); 
            temp_file.close(); 
            remove("APPOINTMENT"); 
            rename("tempo","APPOINTMENT"); 
            cout<<"\n\n Your appointment has been cancelled/deleted"; 
     
       /*Appointment cancelled*/ 

 
 
Page | 41  
 
        break; /*BREAK statement for case 2 (APPOINTMENT CANCELLATION)*/     
        
                    case 4:   exit; 
          break; 
        default: cout<<"\n Wrong Option selected....!"; 
           break;   
                            } 
                             break; /*BREAK statement for the case 2 of the MAIN MENU of the Program*/ 
     
  case 3:   system("cls"); 
                 int casem; 
                 while(casem!=6) 
                    {      cout<<"\t "; 
                            for(int i=0;i<20;i++) 
    cout<<char(174); 
    cout<<" CASUALTY AND EMERGENCY MODULE "; 
    for(int i=0;i<20;i++) 
    cout<<char(175); 
     
   
 /*MENU FOR CASUALTY AND EMERGENCY*/ 
    cout<<"\n\n1. Accident Case"; 
    cout<<"\n2. Accident causing Burning"; 
    cout<<"\n3. Organ Failure"; 

 
 
Page | 42  
 
    cout<<"\n4. Child Delivery"; 
    cout<<"\n5. View a casualty/emergency case"; 
    cout<<"\n6. Exit"; 
    cout<<"\n\n Enter your option "<<char(26)<<" "; 
    cin>>casem; 
     
     
   
 /*Switching casem for the menu of Casualty and Eme rgency*/ 
    switch(casem) 
      { case 1: system("cls"); 
                     C.imm_reg(); 
                    write_file.open("casualty", ios::out); 
                    write_file.write((char*)&C, sizeof(C)); 
                    write_file.close(); 
                    break; 
      case 2: system("cls"); 
                    C.imm_reg(); 
                     write_file.open("casualty", ios::out); 
                     write_file.write((char*)&C, sizeof(C)); 
                     write_file.close(); 
                     break; 
                  case 3: system("cls"); 
                    C.imm_reg(); 
                    write_file.open("casualty", ios::out); 
                    write_file.write((char*)&C, sizeof(C)); 

 
 
Page | 43  
 
                    write_file.close(); 
                    break; 
        case 4: system("cls"); 
                     D.del_reg(); 
                     write_file.open("delivery", ios::out); 
                     write_file.write((char*)&D, sizeof(D)); 
                     write_file.close(); 
                     break; 
                   case 5: system("cls"); 
                    int casemch; 
                    cout<<"\t "; 
                      for(int i=0;i<16;i++) 
                      cout<<char(177); 
                                                           cout<<" CASUALTY/EMERGENCY CASE "; 
                      for(int i=0;i<16;i++) 
                      cout<<char(177); 
     /*Searching for the case in the file*/ 
          cout<<"\n\n Enter the registration number: "; 
          cin>>casemch; 
                       read_file.open("casualty",ios::in); 
           while(read_file.read((char*)&C, sizeof(C))) 
                                                                { if(C.get_casrg()==casemch) 
                   { fnd=1;  
                      C.show_cas(); 
                      cin.get(); 

 
 
Page | 44  
 
                                } 
                 else 
                             cout<<"\n\n Case not found\n\n"; 
                            } 
             read_file.close(); 
                          if(fnd==0) 
                { read_file.open("delivery", ios::in); 
                               while(read_file.read((char*)&D, sizeof(D))) 
              { if(D.get_del_rg()==casemch) 
                     { D.show_del(); 
                                    cin.get(); 
                     } 
                            } 
                  read_file.close();   
                            } 
     /*Casualty record found*/ 
              break; 
          
                               case 6:  exit; 
                     break; 
       default: cout<<"\n Wrong option!"; 
          break; 
                 
                                          } /*Brackket of while statement*/
 

 
 
Page | 45  
 
      break; /*BREAK statement for case 3 of the MAIN MENU of the program*/ 
       
  case 4: system("cls"); 
                char ysno; 
                cout<<"\t "; 
                for(int i=0;i<18;i++) 
                cout<<char(4); 
                cout<<" PHARMACY AND MEDICINES "; 
                for(int i=0;i<18;i++) 
                cout<<char(4); 
           
               cout<<"\n\nFor information about a medicine enter Y for yes and N for no: "; 
               cin>>ysno; 
               if(ysno=='y' || ysno=='Y') 
                    { int j; 
                      cout<<"\nEnter the batch no. of the medicine: "; 
                      cin>>j; 
                      read_file.open("Pharmacy", ios::in); 
                      while(read_file.read((char*)&PH, sizeof(PH))) 
                           { if(PH.get_bno()==j) 
                                  {   PH.Show_med(); 
              cin.get(); 
                      } 
                else 

 
 
Page | 46  
 
                cout<<"\nMedicine not available..!!";  
              } 
                                         read_file.close();  
                  } 
                         else  
             exit; 
                          break; /*BREAK statement for case 4 of the main menu of the program*/ 
   
   
  case 5: system("cls"); 
                char no; 
                char aminfo; 
                cout<<"\t "; 
                for(int i=0;i<18;i++) 
                cout<<char(127); 
                cout<<" +AMBULANCE+ AND +CONVEYANCE+ "; 
                for(int i=0;i<18;i++) 
               cout<<char(127); 
           
             /*AMBULANCE SEARCH PROCESS*/ 
              cout<<"\n\nAmbulance service is provided for 24*7 "; 
             cout<<"\nFor information about the Ambulance click Y for yes and N for no "<<char(26)<<" "; 
             cin>>aminfo; 
              if(aminfo=='Y'||aminfo=='y') 

 
 
Page | 47  
 
                         { cout<<"\n\n  Enter the Ambulance number: "; 
                           cin>>no; 
                          read_file.open("Ambulance",ios::in); 
                          while(read_file.read((char*)&AMB,sizeof(AMB))) 
                                       { if(AMB.getrtno()==no) 
                                                  { AMB.Show_amb(); 
                                                    cin.get(); 
                          } 
                             else 
                             cout<<"\nAmbulance couldn't found..!!";  
                           } 
                           read_file.close(); /*Object associated with file Ambulance is closed*/ 
                          }  
                 else 
                 exit; 
              break; /*BREAK statement for the case 5 of the MAIN MENU of the program*/
 
     
               case 6: system("cls"); 
                 cout<<"\t "; 
                 cout<<"$$$$$$$$$$$$$$$$$$ FINANCIAL AND BILLING MODULE $$$$$$$$$$$$$$$$$$"; 
                 float t; 
                 int n; 
                 int med[10]; 

 
 
Page | 48  
 
                 cout<<"\n\n\n Enter the number of medicines you purchased from the hospital: "; 
                 cin>>n; 
                 if(n==0) 
      { exit; 
      } 
                else 
                                       
                                          { for(int k=0;k<n;k++) 
                                    { cout<<"\nEnter the batch no of "<<k+1<<"th medicine: "; 
                                      cin>>med[k]; 
                                                 }     
                    read_file.open("Pharmacy", ios::in); 
                    while(read_file.read((char*)&PH,sizeof(PH))) 
                               { for(int k=0;k<n;k++) 
                {if(PH.get_bno()==med[k]) 
                            { t=(float)(PH.get_mrp()); 
                               total= (float)(total+t); 
                             } 
                                                                    } 
                                } 
                   read_file.close();  
          
                             } 
                    cout<<"\n\nYour amount(in Rs.) to be paid: "<<total; 

 
 
Page | 49  
 
                    break; /*BREAK statement for the case 6 of the MAIN MENU of the Program*/ 
      
      
  case 7:     char passwrd[10]; 
                   cout<<"\n\n Enter the password (to ensure that you belong to the hospital staff) "<<char(26)<<" "; 
                   cin.get(); 
                   cin.getline(passwrd,80); 
                   if((strcmp(passwrd,"frutus")==0)||(strcmp(passwrd,"FRUTUS")==0)) 
                                 {  int infofeed; 
                                    int docinfo;   
                        while(infofeed!=4) 
            {  system("cls"); 
                cout<<"\t "; 
                for(int i=0;i<14;i++) 
                cout<<char(30); 
                cout<<"!!!!! INFORMATION FEEDING MODULE !!!!!"; 
                for(int i=0;i<14;i++) 
                cout<<char(30); 
   
           /*INFORMATION FEEDING process begins*/ 
                          /*INFORMATION FEEDING MENU*/ 
    cout<<"\n\n\n1. Information about doctors"; 
    cout<<"\n2. Information about medicines"; 
    cout<<"\n3. Information about ambulance"; 

 
 
Page | 50  
 
    cout<<"\n4. Exit"; 
    cout<<"\n\n Enter the option "<<char(26)<<" "; 
    cin>>infofeed; 
     
  
/*Switching infofeed for the menu of INFORMATION FEE DING MODULE*/ 
     
    switch(infofeed) 
      { case 1:  system("cls"); 
                       char foundoc; 
                       char sure; 
                       cout<<"\t "; 
                       for(int i=0;i<16;i++) 
                       cout<<char(5); 
                       cout<<" ~~~~INFORMATION ABOUT MEDICAL STAFF~~~~ "; 
                       for(int i=0;i<16;i++) 
                       cout<<char(5); 
   
 /*Information feeding about doctors, the process s tarts here by the 
MENU*/ 
                        cout<<"\n\n1. Create a record"; 
            cout<<"\n2. Delete a record"; 
                        cout<<"\n3. Exit"; 
            cout<<"\n\n Enter the option "<<char(26)<<" "; 
            cin>>docinfo;      
            if(docinfo==1) 

 
 
Page | 51  
 
             { cout<<"\n\n\t "; 
               cout<<"###########+++ CREATING A NEW RECORD +++##########\n\n";  
                                                                            E.docinfo(); 
               write_file.open("ENQUIRY",ios::out);  
               write_file.write((char*)&E, sizeof(E)); 
               write_file.close(); 
               cout<<"\nThe record has been created.\n"; 
               cin.get(); 
               cin.get(); 
              }  
         else if(docinfo==2) 
         { int deldoc; 
           cout<<"\n\n\t "; 
           for(int i=0;i<10;i++) 
           cout<<char(176); 
           cout<<" DELETING A DOCTOR'S RECORD "; 
           for(int i=0;i<10;i++) 
           cout<<char(176); 
                      
     
                  /*Doctor's record deletion proces s begins*/ 
                                               cout<<"\n\n\nEnter the ID of the doctor whose record is to be deleted: ";         cin>>deldoc; 
     read_file.open("ENQUIRY",ios::in); 
     temp_file.open("tempdoc",ios::out); 

 
 
Page | 52  
 
     while(!read_file.eof()) 
       { read_file.read((char*)&E,sizeof(E)); /*Searching the record*/ 
              if(E.doctor_id()==deldoc) 
      { E.showdoc(); 
         foundoc='t'; 
                     cout<<"\n\nAre you sure you want to delete this  record?? 
                                                                                                  (Y for yes and N for no): "; 
         cin>>sure; 
         if(sure=='N') 
                                                                      temp_file.write((char*)&E,sizeof(E));  
       } 
               else 
      {   foundoc='f'; 
                       temp_file.write((char*)&E,sizeof(E)); 
       } 
               
         } 
            
         if(foundoc=='f') 
         cout<<"\n\n\tRecord not found\n"; 
         read_file.close(); 
         temp_file.close(); 
         remove("ENQUIRY"); 

 
 
Page | 53  
 
         rename("tempdoc","ENQUIRY"); 
         cout<<"\n\n The record has been deleted"; 
          cin.get(); 
     
      /*Record deletion successfull*/ 
           }  
     else  
     cout<<"\n\n Wrong Option..!!"; 
     exit; 
                                                                   break;           
           
    case 2:   system("cls"); 
       char fundmed; 
       char suremed; 
       int infomed; 
        cout<<"\t "; 
        for(int i=0;i<10;i++) 
        cout<<char(24); 
        cout<<" !!!! INFORMATION FEEDING FOR MEDICINES !!!"; 
        for(int i=0;i<10;i++) 
         cout<<char(24); 
          
          /*information feeding about medicines, the process starts here*/ 
          cout<<"\n\n1. Create a new entry"; 
          cout<<"\n2. Delete a pre-existing medicine info"; 
          cout<<"\n\n Enter the option "<<char(26)<<" "; 

 
 
Page | 54  
 
          cin>>infomed;     
          if(infomed==1) 
              {  cout<<"\n\n\t "; 
                 cout<<"##########+++ CREATING A RECORD OF A NEW MEDICINE +++#########\n\n";                      
                                                                              PH.Get_med(); 
                                          write_file.open("Pharmacy", ios::trunc|ios::out);                                            write_file.write((char*)&PH, sizeof(PH)); 
                write_file.close(); 
                cout<<"\nThe medicine is registered."; 
                cin.get(); 
              }  
         else if(infomed==2) 
                   {  int delmed;  
                                                                                    cout<<"\n\n\t "; 
                       for(int i=0;i<15;i++) 
                       cout<<char(176); 
                       cout<<" DELETING A MEDICINE RECORD "; 
                       for(int i=0;i<15;i++) 
                       cout<<char(176); 
     
                /*Medicine record deletion process begins*/ 
                             cout<<"\n\n\nEnter the batch no. of the medicine whose record is to be deleted: ";    cin>>delmed; 
                                         read_file.open("Pharmacy",ios::in); 
    temp_file.open("tempmed",ios::out); 

 
 

 
    while(!read_file.eof()) 
                 { read_file.read((char*)&PH,sizeof(PH)); /*Searching the record*/ 
    if(PH.get_bno()==delmed) 
        { PH.Show_med(); 
                       foundmed='t'; 
           cout<<"\n\nAre you sure you want to delete this record?? (Y for yes and N for no): "; 
           cin>>suremed; 
           if(suremed=='N') 
          temp_file.write((char*)&PH,sizeof(PH)); /*writing record in the temporary file*/ 
                                } 
               
                                                          else 
                 { foundmed='f'; 
       temp_file.write((char*)&PH,sizeof(PH)); 
      } 
               
    } 
            
    if(foundmed=='f') 
    cout<<"\n\n\tRecord not found\n"; 
    read_file.close(); 
    temp_file.close(); 
    remove("Pharmacy"); 

 
 

 
    rename("tempmed","Pharmacy"); 
    cout<<"\n\n The record has been deleted"; 
    cin.get(); 
    
/*Record deletion successfull*/ 
                        
            
      } 
    break; /*BREAK STATEMENT for case 2(INFO ABOUT MEDICINES) of the INFORMATION FEEDING MENU*/ 
           
           
                               case 3:  system("cls"); 
                      cout<<"\t "; 
                      for(int i=0;i<8;i++) 
                                  cout<<char(176)<<char(177)<<char(178); 
                      cout<<" INFORMATION FEEDING FOR AMBULANCES "; 
                      for(int i=0;i<8;i++) 
                     cout<<char(176)<<char(177)<<char(178); 
    
            /*Information feeding about ambulances, the process 
starts here*/ 
      AMB.Take_amb(); 
      write_file.open("Ambulance",ios::out); 
      write_file.write((char*)&AMB, sizeof(AMB)); 
     write_file.close();  
                     /*Information feeding for ambulances done*/ 

 
 

 
          
      break;    
                
        case 4: exit; 
                      break; 
                                                         default: cout<<"\n\n\tWrong option....!!\n"; 
                       break;            
                   
                   
                  } 
    
       
                       } /*Brackket for the while statement of checking pass word*/  
                                     } 
      
                  else 
                  cout<<"\n\n WARNING!! You are not authorised for this task\n\n"; 
     
                  break; /*BREAK Statement for the case 7 of the MAIN MENU of the program*/ 
    
 case 8:    system("cls"); 
                 int abt; 
                 cout<<"\t "; 
                 cout<<"**************ABOUT US*************"; 

 
 
 
 
                 cout<<"\n\n1. Info regarding doctor staff"; 
                 cout<<"\n2. Info regarding departments"; 
                 cout<<"\n Enter your option "<<char(26)<<" "; 
                 cin>>abt; 
                 int l; 
                 if(abt==1) 
                       {    cout<<"\n Enter the doctor ID: "; 
                             cin>>l; 
                             read_file.open("ENQUIRY",ios::in); 
                             while(read_file.read((char*)&E, sizeof(E))) 
                                  { if(E.doctor_id()==l) 
               { cin.get(); 
                  E.showdoc(); 
                  cin.get(); 
                  cin.get(); 
               } 
                      } 
                         } 
   else if(abt==2) 
                                 {   system("cls"); 
                         int hd; 
                                                 cout<<"\n\n\t\t*****HOSPITAL DEPARTMENTS*****"; 
                        cout<<"\n\n\nFollowing is the list of all the departments in our hospital: "; 
            cout<<"\n\n\n1.Internal Diseases"; 

 
 

 
            cout<<"\n2.Surgery\n3.Gynecology Dept.\n4.Dentistry Dept.\n5.Emergency Room"; 
            cout<<"\n6.Nursing Dept."; 
           cout<<"\n  For the details about the departments, enter the number corresponding to the\n"; 
           cout<<"departments mentioned above\n\t\t\tAND\n\nFor exit to the previous menu, press '0'."; 
           cin>>hd; 
           switch(hd) 
                { case 1:  system("cls"); 
              cout<<"\n\t\t\t********************"; 
              cout<<"\n\t\t\t INTERNAL DISEASES"; 
              cout<<"\n\t\t\t********************"; 
              cout<<"\n\nThis unit includes specialties of cardiology, dermatology, diabetics, endocrine glands, \ndigestive                          system, hematology diseases, infectious diseases, internal diseases, kidney and urology unit, neurology, \npsychiatry  clinic, lung diseases, and rheumatic diseases. "; 
                                 break; 
                   case 2: system("cls"); 
                    cout<<"\n\t\t\t**********"; 
                   cout<<"\n\t\t\t SURGERY"; 
                   cout<<"\n\t\t\t**********"; 
                   cout<<"\n\nIt includes general surgery unit, orthopedics unit, urinary tracts surgery, \nplastic surgery, brain and neurology surgery, children surgery, ophthalmic surgery, and ENT surgery.";  
                                                                    cout<<"\nPatients who visited the hospital for these units totaled 72.331 persons and operations \nmade    totaled 10.730 surgical operations among which 2.982 operations were made in daily surgery rooms."; 

 
 
                                                                     break; 
                                  case 3:           system("cls"); 
        cout<<"\n\t\t\t******************"; 
        cout<<"\n\t\t\t GYNECOLOGY DEPT."; 
        cout<<"\n\t\t\t******************"; 
        cout<<"\n\nThe Department of Obstetrics and Gynaecology caters to women of all age group.\n It deals with diseases of female reproductive organs, family planning and care of women during pregnancy, \nchildbirth and postpartum. The department is committed to deliver quality and \nevidence based clinical services to all patients coming under its domain after establishment of fully functional department."; 
          break; 
                    case 4:             system("cls"); 
        cout<<"\n\t\t\t******************"; 
        cout<<"\n\t\t\t DENTISTRY DEPT."; 
        cout<<"\n\t\t\t******************"; 
        cout<<"\n\nThe Department of Dentistry cares for children, adolescents, teens and \npeople with special health care needs, like cerebral palsy. Our team includes pediatric dentists, orthodontists \nas well as specialists in endodontics, oral and maxillofacial surgery, periodontics and prosthodontics. We treat patients with a broad range of conditions�including common pediatric conditions like overbites and \nchipped teeth to more serious conditions that require complex treatment."; 
        break; 
        case 5:           system("cls"); 
       cout<<"\n\t\t\t******************"; 
       cout<<"\n\t\t\t EMERGENCY ROOM."; 
       cout<<"\n\t\t\t******************"; 
       cout<<"\n\nPatients who visited the hospital for this unit totaled 116.011 persons representing 15.5% \nof total visiting patients of the hospital. The 

 
 

 
inpatients through this emergency room totaled 15%, while \npatients who were referred to other hospitals totaled 1% of total visiting patients of emergency room at the hospital.";                   
                                 break; 
          case 6:        system("cls"); 
      cout<<"\n\t\t\t******************"; 
      cout<<"\n\t\t\t NURSING DEPT."; 
      cout<<"\n\t\t\t******************"; 
      cout<<"\n\nNursing services are considered one of the most important aspects in the process of distinguished medical care. \nNursing Division provides nursing to patients at all general and specialized clinics in addition to specialized care services to inpatients at all units."; 
       break; 
          case 0:        exit; 
      break; 
          default: cout<<"\nWRONG OPTION"; 
       break;             
   }   
                               } 
       else 
                    cout<<"\nWrong option...!!\n"; 
                    exit; 
        
         break; /*BREAK Statement for the case 8 of the main menu*/
 
        
        

 
 

 
  case 9: exit; 
               break; 
   
             default: cout<<"\nWrong option...!"; 
                exit; 
                break; 
    } 
                
 } /*closing brackket for the while statement for the MAIN MENU*/ 
      
     
  return(0);  
       
 } /* closing Brackket of the int main() */
 
 
 
