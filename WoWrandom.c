#include <stdio.h>  //biblioteca para rand()
#include <stdlib.h>
#include <time.h> //bilbioteca para srand

int main ()
{
		
	int a=0, b=0, i, c=0, d=0,e=1;
	
	printf(">>Random Class and Race for WoW!<<\n\n");
	system("PAUSE");
	
  while(e==1)
  {
    srand(time(NULL));   //gera numero random toda vez q entra no programa    
  
    printf("\n");
    
    a= 1 + (rand()%2);
    
    if(a==1)  //saber se é female ou male
    		printf(">>Female ");
	else
			printf(">>Male ");
		
   		b = 1 + (rand()%2);
   	
   		c = 1 + (rand() %7);
    
    	if(b==1)//se 1
    	{
    		printf("Alliance ");  //1 é alliance
			switch(c)
    				{
    					case 1: printf("Human ");//cas8 1 raça humano
    							d = 1 + (rand()%8);//1->8
    							switch (d)
    								{
    									case 1: printf("Priest");
    											break;
    									case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Hunter");
												break;
										case 6: printf("Warlok");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												break;
								    }
								break;
								    
						case 2: printf("Dwarf ");
								d = 1 + (rand()%10);
								switch (d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Hunter");
												break;
										case 6: printf("Warlock");
												break;
										case 7: printf("Shaman");
												break;
										case 8: printf("Paladin");
												break;
										case 9: printf("Monk");
												break;
										case 10: printf("Death Knight");
												 break;
								    }
								break;
								
						case 3: printf("Night Elf ");
								d = 1 + (rand()%8);
								switch(d)
								    {
										case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Druid");
												break;
										case 6: printf("Hunter");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												break;
									}
								break;
								
						case 4: printf("Gnome ");
								d = 1 + (rand()%7);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Warlock");
												break;
										case 6: printf("Monk");
												break;
										case 7: printf("Death Knight");
												break;
									}
								break;
						
						case 5: printf("Draenei ");
								d = 1 + (rand()%8);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Warrior");
												break;
										case 3: printf("Mage");
												break;
										case 4: printf("Hunter");
												break;
										case 5: printf("Shaman");
												break;
										case 6: printf("Paladin");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												break;
									}
								break;
								
						case 6: printf("Worgen ");
								d = 1 + (rand()%8);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Druid");
												break;
										case 6: printf("Hunter");
												break;
										case 7: printf("Warlock");
												break;
										case 8: printf("Death Knight");
												break;
									}
								break;
							
						case 7: printf("Padaren ");
								d = 1 + (rand()%7);
								switch(d)
								   {
								   		case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Hunter");
												break;
										case 6: printf("Shaman");
												break;
										case 7: printf("Monk");
												break;
								   }
								break;
					}
				
		}              //fim do alliance
		else if(b==2)     //começo horde
		{
			printf("Horde ");
				switch(c)
					{
						case 1: printf("Orc ");
								d = 1 + (rand()%8);
								switch(d)
									{
										case 1: printf("Rogue");
												break;
										case 2: printf("Warrior");
												break;
										case 3: printf("Mage");
												break;
										case 4: printf("Hunter");
												break;
										case 5: printf("Warlock");
												break;
										case 6: printf("Shaman");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												 break;
									}
								break;
								
						case 2: printf("Tauren ");
								d = 1 + (rand()%8);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Warrior");
												break;
										case 3: printf("Druid");
												break;
										case 4: printf("Hunter");
												break;
										case 5: printf("Shaman");
												break;
										case 6: printf("Paladin");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												break;
									}
								break;
								
						case 3: printf("Troll ");
								d = 1 + (rand()%10);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Hunter");
												break;
										case 6: printf("Warlock");
												break;
										case 7: printf("Shaman");
												break;
										case 8: printf("Druid");
												break;
										case 9: printf("Monk");
												break;
										case 10: printf("Death Knight");
												 break;
									}
								break;
						
						case 4: printf("Undead ");
								d = 1 + (rand()%8);
								switch(d)
									{       
										case 1: printf("Priest");
												break;
										case 2: printf("Warrior");
												break;
										case 3: printf("Rogue");
												break;
										case 4: printf("Hunter");
												break;
										case 5: printf("Warlock");
												break;
										case 6: printf("Mage");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												break;
									}
							break;
							
						case 5: printf("Blood Elf ");
								d = 1 + (rand()%9);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Warrior");
												break;
										case 3: printf("Rogue");
												break;
										case 4: printf("Hunter");
												break;
										case 5: printf("Warlock");
												break;
										case 6: printf("Mage");
												break;
										case 7: printf("Monk");
												break;
										case 8: printf("Death Knight");
												break;
										case 9: printf("Paladin");
												break;
									}
								break;
						
						case 6: printf("Goblin ");
								d = 1 + (rand()%8);
								switch(d)
									{
										case 1: printf("Priest");
												break;
										case 2: printf("Warrior");
												break;
										case 3: printf("Rogue");
												break;
										case 4: printf("Hunter");
												break;
										case 5: printf("Warlock");
												break;
										case 6: printf("Mage");
												break;
										case 7: printf("Shaman");
												break;
										case 8: printf("Death Knight");
												break;
									}
								break;
								
						case 7: printf("Pandaren ");
								d = 1 + (rand() %7);
								switch(d)
								   {
								   		case 1: printf("Priest");
												break;
										case 2: printf("Rogue");
												break;
										case 3: printf("Warrior");
												break;
										case 4: printf("Mage");
												break;
										case 5: printf("Hunter");
												break;
										case 6: printf("Shaman");
												break;
										case 7: printf("Monk");
												break;
								   }
								break;
					}
	
 	    }   //fim horde
 	printf("<<");
 	printf("\n\n");
 	printf("Do you wish to roll again? (yes = 1, no = 0) ");
 	scanf("%d", &e);
 }
 
}
