using System;
using System.Collections.Generic;

namespace GNET.Rpc
{
    /// <summary>
    /// Base class for RPC data structures
    /// </summary>
    public class Data : Marshal
    {
        public virtual OctetsStream marshal(OctetsStream os)
        {
            return os;
        }

        public virtual OctetsStream unmarshal(OctetsStream os)
        {
            return os;
        }

        /// <summary>
        /// Generic vector/list for collections that can be marshaled
        /// </summary>
        public class DataVector : Marshal
        {
            private List<Marshal> items = new List<Marshal>();

            public DataVector()
            {
            }

            public DataVector(Marshal initialElement)
            {
                if (initialElement != null)
                {
                    items.Add(initialElement);
                }
            }

            public void add(Marshal item)
            {
                items.Add(item);
            }

            public void clear()
            {
                items.Clear();
            }

            public int size()
            {
                return items.Count;
            }

            public Marshal get(int index)
            {
                return items[index];
            }

            // Indexer for array-like access
            public Marshal this[int index]
            {
                get { return items[index]; }
                set { items[index] = value; }
            }

            // Count property
            public int Count
            {
                get { return items.Count; }
            }

            public List<T> ToList<T>() where T : Marshal
            {
                List<T> result = new List<T>();
                foreach (var item in items)
                {
                    if (item is T typedItem)
                        result.Add(typedItem);
                }
                return result;
            }

            public OctetsStream marshal(OctetsStream os)
            {
                os.compact_uint32((uint)items.Count);
                foreach (var item in items)
                {
                    item.marshal(os);
                }
                return os;
            }

            public OctetsStream unmarshal(OctetsStream os)
            {
                uint count = os.uncompact_uint32();
                items.Clear();
                // Note: Unmarshaling requires knowing the type, which should be handled by the specific implementation
                return os;
            }

            public OctetsStream unmarshal<T>(OctetsStream os) where T : Marshal, new()
            {
                uint count = os.uncompact_uint32();
                items.Clear();
                for (uint i = 0; i < count; i++)
                {
                    T item = new T();
                    item.unmarshal(os);
                    items.Add(item);
                }
                return os;
            }
        }
    }
}