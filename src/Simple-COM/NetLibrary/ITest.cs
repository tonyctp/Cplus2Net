using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Runtime.InteropServices;

namespace NetLibrary
{
    [Guid("D544C2B6-5F07-4848-A912-65F2727586D0")]
    public interface ITest
    {
        [DispId(1)]
        string GetInfo();
        [DispId(2)]
        string SetInfo(string msg);
    }
}
