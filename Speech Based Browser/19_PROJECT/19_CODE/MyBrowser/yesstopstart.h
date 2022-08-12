#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<fstream>
#include<vector>
#include<string>
#include<ctype.h>
#include<string.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

string yesstartstop()
{
    string word[11]={"yes","no","start","stop","wikipedia",
                    "youtube","search","speech","dollar","corona",
                    "gold"
                    };
   
    
       string s1=" ";
        // char c='n';
        static int i=0;
        // string filename="LIVETEST",again="yes";
        //LIVE TESTING................................................................................
        
        
        //    i++;
             data.clear(); //clear data[]
             ob.clear();   //clearing for new file

            
            string path= "RM\\\\Recording_Module.exe 3 ";
            string filename="LIVETEST";
            path.append(filename);
            path.append(to_string((ld)i));
            path.append(".wav ");
            filename="LIVETEST";
            filename.append(to_string((ld)i));
            filename.append(".txt");
            path.append(filename);
            
    
            char ar[100];
			strcpy(ar,path.c_str());
			/*
            for (int i = 0; i < path.size(); i++)
            {
                ar[i]=path[i];
                //  cout<<a[i];
            }*/
            // system("RM\\Recording_Module.exe 3 LIVETEST.wav LIVETEST.txt");
            system(ar);
            // system("taskkill/im Recording_Module.exe");
            string test =filename;
            cout<<filename<<"\n";
            
            dcshift(test);
            findmax(test);
            findsteadyframes(test);
            ci_cal();
            // adding to universe
            findobservationseq();
            fstream lamda;
            lamda.open("projectlamdas.txt",ios::in|ios::out);
            if(!lamda)cout<<"\nERROR OPENING lamdamodels.txt\n";
            else
            {
                ld maxp=-1,modelno=-1;
                for (int model = 0; model <= 10; model++)
                {
                    string val;
                    for(int m=0;m<N;m++)
                    {
                        lamda>>val; pi[m]=stold(val);
                    }
                                
                    for(int m=0;m<N;m++)
                    {
                        for(int n=0;n<N;n++)
                        {
                            lamda>>val;  a[m][n]=stold(val);
                        }
                    }
                                    
                                    
                    for(int m=0;m<N;m++)
                    {
                        for(int n=0;n<M;n++)
                        {
                            lamda>>val; b[m][n]=stold(val);
                        } 
                    }
                                    

                    ld tempp=forward();
                                    // cout<<"-->"<<max(tempp,(ld)maxp)<<"\n";
                    cout<<"\n FOR "<<model<<" P ="<<tempp;
                    if(tempp > maxp)
                    { 
                        maxp=tempp;
                        modelno=model;
                        // cout<<modelno<<"\n";
                    }

                                // cout<<endl;
                                // for(int m=0;m<N;m++)
                                //     { cout<<pi[m]<<" ";}
                                // cout<<"\n";
                                // for(int m=0;m<N;m++)
                                //     {for(int n=0;n<N;n++)
                                //         {cout<<a[m][n]<<" ";}
                                //         cout<<endl;
                                //     }
                                // for(int m=0;m<N;m++)
                                //     {for(int n=0;n<M;n++)
                                //         {cout<<b[m][n]<<" ";}
                                //             cout<<endl;
                                //     }  
                                
                }
                cout<<"\nRECOGNISED WORD --> "<<word[(int)modelno]<<"\n";
                s1=word[(int)modelno];
                // if(td==modelno)r++;
                cout<<"\n------------------------------------------\n";
            }
            lamda.close();

			return s1;
}


    




