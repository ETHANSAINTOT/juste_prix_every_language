// C# version

using System;

class Program
{
    static void Main()
    {
        Random rng = new Random();
        int randomPrice = rng.Next(1, 101);
        Console.WriteLine("Le prix est de " + randomPrice);
        int tentatives = 0;
        Console.WriteLine("Devinez un nombre entre 1 et 100 !");
        while (true)
        {
            tentatives++;
            Console.Write($"Tentative {tentatives} - Quel est votre prix ? ");
            string input = Console.ReadLine();
            if (!int.TryParse(input, out int userPrice))
            {
                Console.WriteLine("Erreur : Veuillez entrer un nombre valide ! (Cette tentative compte)");
                continue;
            }
            if (userPrice == randomPrice)
            {
                Console.WriteLine($"Bien jouee ! Vous avez trouvé en {tentatives} tentative(s) !");
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
