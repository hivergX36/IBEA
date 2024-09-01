#include<iostream> 
#include<vector> 
#include<fstream> 
#include<string>
#include "IbeaAlgorithm.hpp"

int main(){
      
      
      /*La fonction checkup n'est pas bonne */
 
   std::string file = "knapsack.txt";
   IbeaAlgorithme Ibea = IbeaAlgorithme(file,5,1);
   /* Ibea.initPopulation();
   Ibea.computeExtremePoint();
   Ibea.rankPopulation();
   Ibea.definePopulationfront();
   Ibea.measureCrowdingDistance();
   Ibea.Tournament();
   Ibea.displayEchantillon();
   for(int i = 0; i < 5; i++){
      try{
   Ibea.CrossoverMutation();
   }catch(int err){
      std::cout << "Il y'a un problème dans la fonction";

   }
}
Ibea.UpdateElitePopulation(); */

Ibea.resolve(20);
}