# codealpha_tasks
Task 1 : Setting up intrusion detection system 
To do this, I have used Snort in windows 11
by following steps , we can successfully setup intrusion detection system 
step 1: Install snort, winpcap and npcap from any browser.
step 2: If the rule directory is empty in Snort then install the rule directory from the same snort website where you installed the snort software.
step 3: Go to C:\Snort\etc and move all that contents into C:\Snort\bin folder.
step 4: Go to command prompt and use following commands:
        cd ..
        cd ..
        cd snort
        cd bin
        dir
        snort.exe
step 5: Exit snort
step 6: Open "Snort Config" File in any text editor for example notepad++
step 7: If you are using Windows OS the you need to modify changes in the config code such as
        in step 1 of the snort config....put the ip address of your current system in which snort will be working.
        then locate rule paths of C drive.
step 8: Exit the editor and run command prompt as administrator
step 9: Again locate bin in command prompt and use the command given below
        snort -T -c c:\Snort\etc\snort.conf -i 1
       if there are no errors then snort is configured
step 10: Now we will set up alert rules so that whenever any suspicious network activity is detected then we can be aware
        snort -A console -i 1 -c c:\Snort\etc\snort.conf
        using the above command we will setup intrusion detection system successfully
