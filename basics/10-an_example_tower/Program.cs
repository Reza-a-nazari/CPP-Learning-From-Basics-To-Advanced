namespace _10_an_example_tower;

class Program
{

    static bool IsSame(int[] num)
    {
        bool check = true;
        if (num != null)
        {

            foreach (var a in num)
            {
                if (a != num[0])
                {
                    check = false;
                }
            }
        }
        return check;
    }

    static int count_max(int[] num)
    {
        int a = num.Max();
        foreach (var app in num)
        {
            if (app == a)
            {
                a += 1;
            }
        }
        return a;
    }
    // static int findMax(int[]num)
    // {
    //     return num.Max();
    // }
    

    static int MaxTower(int[]num)
    {
        int final = 0;

        for (int i = 1; i < num.Length-1; i++)
        {
            int left = num[i];
            for (int j = 0; j < i; j++)
            {
                left = Math.Max(left, num[j]);
            }

            int right = num[i];
            for (int j = i+1; j < num.Length; j++)
            {
                right = Math.Max(right, num[j]);
            }

            final += Math.Min(left, right) - num[i];
        }

        return final;
    }

    static void Main(string[] args)
    {
        int a = int.Parse(Console.ReadLine());

        string c = Console.ReadLine();

        string[] part = c.Split(' ');

        int[] number = new int[a];

        number = Array.ConvertAll(part, int.Parse);
        System.Console.WriteLine(MaxTower(number));      


        
    }
}
