// Creating a Secret Number Game, where the user tryes to find the secret number.

alert('Wellcome to the Secret Number Game!');    // Show a message to the user, Dosent return a value.
let secretNumber = 13;   //Allocate variables.
let attempt = prompt('Choose a number between 1 and 20');      //Allocate the user imput, and displays a dialog box that prompts the user to enter a value.



if(attempt == secretNumber){
    alert("That's right! You discovered the secret number (13)");
} else {
    alert("Wrong :( this is not the number");
}
 
