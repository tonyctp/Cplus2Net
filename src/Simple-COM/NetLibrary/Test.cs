using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace NetLibrary
{
    [Guid("1EEEAB53-A956-4D3C-81E2-9EC1B0DE0354"),
        ClassInterface(ClassInterfaceType.None),
        ComSourceInterfaces(typeof(ITestEvents))]
    public class Test : ITest
    {
        public string GetInfo()
        {
            return "调用Net 方法GetInfo()成功";
        }

        public string SetInfo(string msg)
        {
            return $"传入参数为{msg}";
        }
    }
}
