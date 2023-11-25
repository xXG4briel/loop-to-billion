using System;

class Program
{
    static void Main()
    {
        const int billion = 1000000000;

        DateTime startTime = DateTime.Now;

        for (int i = 0; i < billion; i++)
        {
        }

        DateTime endTime = DateTime.Now;

        TimeSpan elapsedTime = endTime - startTime;
        Console.WriteLine($"{elapsedTime.TotalSeconds:F3} segundos");
    }
}
