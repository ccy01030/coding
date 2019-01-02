using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace StrategyPatternCar
{
    class Program
    {
        // interface를 만들고 구체적인 행위
        public interface IBreakBehavior
        {
            void brake();
        }

        // interface를 상속받아 구체적인 행위를 구현
        // 따라서 동일한 IBreakBehavior.break()는 BreakWithABS의 intstance냐, BreakWithoutABS냐에 따라 다르게 행동.
        public class BreakWithABS : IBreakBehavior
        {
            public void brake()
            {
                Console.WriteLine("Break With ABS");
            }
        }

        public class BreakWithoutABS : IBreakBehavior
        {
            public void brake()
            {
                Console.WriteLine("Break Without ABS");
            }
        }
        ////////////////////////////////////////////////////////////////
        
        public abstract class Car
        {
            // 구체적인 행동을 정의한 BreakWithoutABS나 BreakWithABS의 instance를 만들지 않고, 부모의 instance로 정의.
            // 왜?? : 나중에 SVU나 Sedan에서 Break의 종류를 바꿀수 있도록 하기 위해서.
            protected IBreakBehavior breakBehavior;

            public void applyBreak()
            {
                breakBehavior.brake();
            }

            public void SetBreakBehavior(IBreakBehavior breakType)
            {
                breakBehavior = breakType;
            }

            public abstract void DisplayDescription();
        }
        
        //////////////////////////////////////////////////////////////
        
        public class SUV : Car
        {
            public SUV()
            {
                // 자식은 부모를 대체할 수 있어야함.
                this.breakBehavior = new BreakWithABS(); //여기서 this 를 왜 사용하는지 모르겠음 (this를 지워도 error 나지 않음)
            }

            public override void DisplayDescription()
            {
                Console.WriteLine(@"It's a SUV car");
            }
        }

        public class Sedan : Car
        {
            public Sedan()
            {
                // 자식은 부모를 대체할 수 있어야함.
                this.breakBehavior = new BreakWithoutABS();
            }

            public override void DisplayDescription()
            {
                Console.WriteLine(@"It's a Sedan car");
            }
        }


        static void Main(string[] args)
        {
            // 자식은 부모를 대체할 수 있어야함.
            Car sedanCar = new Sedan();
            sedanCar.applyBreak();
            sedanCar.DisplayDescription();
            Console.WriteLine("========================================");
            Car suvCar = new SUV();
            suvCar.applyBreak();
            suvCar.DisplayDescription();
            Console.WriteLine("========================================");
            suvCar.SetBreakBehavior(new BreakWithoutABS());
            suvCar.applyBreak();
            suvCar.DisplayDescription();
            Console.WriteLine("========================================");
            Console.ReadKey();
        }
    }
}
