/*
  ________                     .__       ___________              __   
 /  _____/  ____   ____   ____ |  |   ___\__    ___/___   _______/  |_ 
/   \  ___ /  _ \ /  _ \ / ___\|  | _/ __ \|    |_/ __ \ /  ___/\   __\
\    \_\  (  <_> |  <_> ) /_/  >  |_\  ___/|    |\  ___/ \___ \  |  |  
 \______  /\____/ \____/\___  /|____/\___  >____| \___  >____  > |__|  
        \/             /_____/           \/           \/     \/        
           __                        .__          __                   
         _/  |_  ____   _____ ______ |  | _____ _/  |_  ____           
         \   __\/ __ \ /     \\____ \|  | \__  \\   __\/ __ \          
          |  | \  ___/|  Y Y  \  |_> >  |__/ __ \|  | \  ___/          
          |__|  \___  >__|_|  /   __/|____(____  /__|  \___  >         
                    \/      \/|__|             \/          \/          

                        Jakub Nowak 2023
*/

/*  --- Includes ---  */
#include <iostream>
/*  --- User includes ---  */
#include "../inc/testClass.hpp"

/*  --- Main function ---  */
int main()
{
    std::cout << TestClass::getLogo() << std::endl;
    std::cout << "solve(2,1,0) " << TestClass::solve(2,1,0) << std::endl;
}
