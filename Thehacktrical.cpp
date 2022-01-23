#include <iostream>
#include <string>

using namespace std;

int main()
{
	string start_up;
	
	cout << "Welcome to our Interactive Hamlet Game! The Show Must Go On, to begin, type 'START' : "; // changed
	
	cin >> start_up;
	
	while (start_up == " S " || "s")

	{	
	string mom;
	string quit_now;
	string start1;
	string madness;
	string go;

	cout << "Act 1" << endl;
	cout << "" << endl;
		
	cout << "You are Hamlet, the crown prince of Denmark. " << endl;
	cout << "You have been grieving the death of your father, King Hamlet. " << endl;
	cout << "Recently, your friends Horatio and some guards have told you about seeing a ghost that resembled your late fater. " << endl;
	cout << "Intrigued by this information, you inform them that you want to join the watch that night. ";
	cout << "" << endl;
	cout << "During your watch, the ghost shows itself to you and beckons you to follow, " << endl;
	cout << "Your friends discourage you from following the ghost, but your curiostiy compels you." << endl;
	cout << "The ghost brings you to a secluded area of the castle to inform you that he is indeed the ghost of your father, King Hamlet." << endl;
	cout << "The Ghost of King Hamlet reveals to you that his death was not an accident. Instead of being bitten by a snake, the King was poisoned by his brother, Claudius. " << endl;
	cout << "The Ghost asks you, his son, to avenge his murder, and take revenge on Claudius. However, he asks that his wife, Gertrude, not be harmed. " << endl;
	cout << "You are shocked and disheartened by this revelation and stand at a crossroad for your reaction, but you are determined to avenge your father. " << endl;
	cout << "You are making a plan. " << endl;
	cout << "Should you act mad and expose Claudius, or collect more evidence on Claudius? " << endl;
	cout << "Enter 'madness' to follow the madness path, or 'evidence' to follow the evidence path." << endl;
	
	cin >> madness;

	if (madness == "madness")
	{
		cout << " You have chosen to follow the madness path, and plot to kill your Uncle Claudius. " << endl;
		cout << " Meanwhile, Polonius tells Reynaldo to spy on Laertes, Polonius' own son, to see if he is engaging in debauchery. Reynaldo is aware of Polonius' deceit." << endl;
		cout << endl;
		cout << "ACT 2" << endl;
		cout << endl;
		cout << " You decide to put on a play. You decide to change the ending of the play to match the murder of your father." << endl;
		//insert picture of play if time permitting.

		cout << "Claudius reacts and storms out of the room! You are convinced that he must be guilty. " << endl;
		cout << "Your mother, Queen Gertrude, requests a meeting with you. " << endl;
		cout << "Your mother is frightned by your pranks. She calls out for help. " << endl;
		cout << "You hear another voice coming from inside the room." << endl;
		cout << "A RAT! You exclaim as you thrust your sword into the curtain. " << endl; 
		cout << "You have just killed Polonius." << endl; 
		cout << "Type 'hide' to hide the body, or in your madness, type 'Ophelia', to see her." << endl; 
		cin >> mom;
		if (mom == "hide")
		{ 
			cout << endl;
			cout << "ACT 3" << endl;
			cout << endl;
			cout << "You have hidden the body." << endl;
		}
		else if(mom == "Ophelia")
		{
			cout << endl;
			cout << "ACT 3" << endl;
			cout << endl;
			cout << "Ophelia screams and goes mad herself!" << endl;
			cout << "Ophelia sees the body of her father, Polonious, and drowns herself." << endl;
		}
		else
		{
			cout << "Unable to react, Claudius guards apprehend you, and you are executed." << endl;
			break;
		}
		cout << endl;
		cout << "ACT 4" << endl;
		cout << endl;
		cout << "Claudius has sent the guards for you. " << endl;
		cout << "You have been caught and exiled to England." << endl;
		cout << "You find out from Horatio that you have actually been sentenced to death." << endl;
		cout << "You convince the pirates bringing you to England to let you live. " << endl;
		cout << "With the news of Claudius sentencing you to death, your determination to kill him is reinvigored." << endl;
		cout << "Type 'home' to return to the castle, or type 'grave' to speak with the gravedigger." << endl;
		cin >> go; 
		
		if (go == "home")
		{
			cout << endl;
			cout << "ACT 5" << endl;
			cout << endl;
			cout << "You return to the castle and are challenged to a fencing match by Laertes." << endl;
			cout << "You are stabbed by Laertes blade. He admits that the blade is coated in poison, which was Claudius' plan to kill you." << endl;
			cout << "While in tremendous pain, you take us the poisoned blade and slash Laertes, killing him." << endl; 
			cout << "Queen Gertrude drinks from the poisoned cup which was intended for you incase you won your duel with Laertes." << endl;
			cout << "Queen Gertrude colapses dead on the floor." << endl;
			cout << "You use the poisoned blade to slash at Claudius, and then force him to drink from the poisoned cup." << endl;
			cout << "Claudius falls over dead, and your strength begins to fade. " << endl;
			cout << "In your dying breath, you tell Horatio to tell Fortinbras what has transpired here, and to make him the next King of Denmark." << endl;
			cout << "The curtain falls." << endl;
			cout << "Thank you for playing." << endl;
		}
		else if (go == "grave")
		{
			cout << endl;
			cout << "ACT 5" << endl;
			cout << endl;
			cout << "Alas poor Yorrick, I knew him well. " << endl;
			cout << "You see Ophelia's burial, and proclaim your love for her." << endl;
			cout << "Claudius tells Laertes that you have gone made and need to be stopped." << endl;
			cout << "You return to the castle and are challenged to a fencing match by Laertes." << endl;
			cout << "You are stabbed by Laertes blade. He admits that the blade is coated in poison, which was Claudius' plan to kill you." << endl;
			cout << "While in tremendous pain, you take us the poisoned blade and slash Laertes, killing him." << endl;
			cout << "Queen Gertrude drinks from the poisoned cup which was intended for you incase you won your duel with Laertes." << endl;
			cout << "Queen Gertrude colapses dead on the floor." << endl;
			cout << "You use the poisoned blade to slash at Claudius, and then force him to drink from the poisoned cup." << endl;
			cout << "Claudius falls over dead, and your strength begins to fade. " << endl;
			cout << "In your dying breath, you tell Horatio to tell Fortinbras what has transpired here, and to make him the next King of Denmark." << endl;
			cout << "The curtain falls." << endl;
			cout << "Thank you for playing!." << endl;
		}
		else
		{
			cout << "Unable to make a decision, you instead live out your exile until your death." << endl;
			break;
		}
	}
	else if (madness == "evidence")
	{
		cout << " You have decided to find more evidence that Claudius is the murderer of your father." << endl;
		cout << endl;
		cout << "ACT 2" << endl;
		cout << endl;
		cout << " You decide to put on a play. You decide to change the ending of the play to match the murder of your father." << endl;
		//insert picture of play if time permitting.

		cout << "Claudius reacts and storms out of the room! You are convinced that he must be guilty. " << endl;
		cout << "Your mother, Queen Gertrude, requests a meeting with you. " << endl;
		cout << "You tell your mother that the ending of the play was an enactment of the real murder of your father by Claudius." << endl;
		cout << "Your mother is suspicious of Claudius. " << endl;
		cout << "Meanwhile, Claudius prays and admits to killing the King." << endl;
		cout << "Reynaldo hears this confession. " << endl;
		cout << "Since you have the support of your mother, type 'castle' to go confront Claudius at the party," << endl << "or type 'grave' to visit your father's grave first." << endl;

		cin >> go;
		if (go == "castle")
		{
			cout << endl;
			cout << "ACT 5" << endl;
			cout << endl;
			cout << "You decide to go directly to the party." << endl;
		}
		else if (go == "grave")
		{
			cout << endl;
			cout << "ACT 5" << endl;
			cout << endl;
			cout << "Alas poor Yorrick, I knew him well. " << endl;
			cout << "You contemplate the meaning of death." << endl;
			cout << "After your contemplation, you decide to go to the castle to confront Claudius." << endl;
		}
		else
		{
			cout << "Unable to make a decision, Claudius' guards apprehend you, and you are executed." << endl;
			break;
		}
		cout << "Reynaldo reveals to everyone that Claudius has confessed in prayer that he murdered the king." << endl;
		cout << "Claudius in his guilt admits to killing the king and asks for forgiveness." << endl;
		cout << "You relieve him of the crown, and Gertrude sends him away." << endl;
		cout << "You are crowned the new king of Denmark, and marry the love of your life, Ophelia." << endl;
		cout << "The curtain falls, and everyone lives happily ever after." << endl;
		cout << "Thank you for playing!" << endl;

	}
	else 
	{
		cout << "Unable to come to a decision, you are unable to avenge your father's death, and Denmark is brought to ruin." << endl;
		break;
	}

	cout << " Press q to quit. " << endl;
	
	cin >> quit_now;

	if (quit_now == "q")
	{
		break;
	}
	else
	{
		cin >> start_up;
	}
}



	return 0;
}