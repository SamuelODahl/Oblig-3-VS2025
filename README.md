# Oblig 3 VS2025
Oblig 3 Zoo

The zoo has a number of different animals that they want information to be stored about.
All animals have a name, belong to a species, have a weight, and can move.
The zoo has the ability to accept new animals and for animals to either die or be transported away.
You will create a set of classes.
• A class that represents the zoo and that keeps track of all the animals,
o and that has a function that can be called and that runs through all the animals and
presents them (prints them out). Here you will overload the operator << for
the animals.
o This is a class that keeps track of objects of the various other
classes in this assignment.
o Pointers to these objects must be stored in one vector.
o The zoo should have the ability to print all the animals in a group, for example mammals or fish.
• A hierarchy of classes that represent animals.
o Tip: Create a class each for mammals, birds and fish.
o You should not be able to create objects of the Animal class. Only of the subclasses.
• Each animal should have a member function movement(), which prints how the animal
moves (walks, jumps, swims, flies, etc.)
