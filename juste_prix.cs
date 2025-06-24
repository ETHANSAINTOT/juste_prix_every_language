//C# versuib

using System;

class Program
{
    static void Main()
    {
        Random rng = new Random();
        int randomPrice = rng.Next(1, 101);

        Console.WriteLine("Le prix est de" + randomPrice);

        while (true)
        {
            Console.Write("Quel est votre prix ? ");
            string input = Console.ReadLine();

            if (!int.TryParse(input, out int userPrice))
            {
                Console.WriteLine("Entrée invalide. Veuillez entrer un nombre entier.");
                continue;
            }

            if (userPrice == randomPrice)
            {
                Console.WriteLine("Bien joué !");
                break;
            }
            else if (userPrice < randomPrice)
            {
                Console.WriteLine("C'est plus.");
            }
            else
            {
                Console.WriteLine("C'est moins.");
            }
        }
    }
}
