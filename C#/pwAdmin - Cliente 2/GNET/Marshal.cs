namespace GNET
{
    /// <summary>
    /// Interface for objects that can be marshaled/unmarshaled to/from binary streams
    /// </summary>
    public interface Marshal
    {
        OctetsStream marshal(OctetsStream os);
        OctetsStream unmarshal(OctetsStream os);
    }
}