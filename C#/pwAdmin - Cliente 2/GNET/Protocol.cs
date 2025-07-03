namespace GNET
{
    /// <summary>
    /// Base class for all network protocol messages
    /// </summary>
    public abstract class Protocol : Marshal
    {
        /// <summary>
        /// Protocol opcode/command identifier
        /// </summary>
        public virtual int getProtocolType()
        {
            return 0;
        }

        /// <summary>
        /// Marshal the protocol data to a stream
        /// </summary>
        public abstract OctetsStream marshal(OctetsStream os);

        /// <summary>
        /// Unmarshal the protocol data from a stream
        /// </summary>
        public abstract OctetsStream unmarshal(OctetsStream os);

        /// <summary>
        /// Process the protocol message (for server-side handling)
        /// </summary>
        public virtual void process()
        {
            // Default implementation does nothing
        }
    }
}