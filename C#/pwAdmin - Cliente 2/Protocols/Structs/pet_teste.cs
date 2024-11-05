using Protocols.Structs;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace pwAdmin.Protocols.Structs
{
    public class pet_teste
    {
        struct petcorral
        {
            int capacity;
            int count;
            pet[] list;
        };

        struct pet
        {
            int index;
            Octets data;
            uint size;
            
        }
    }
}
