//------------------------------------------------------------------------------
// <auto-generated>
//    This code was generated from a template.
//
//    Manual changes to this file may cause unexpected behavior in your application.
//    Manual changes to this file will be overwritten if the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

namespace InfloCommon.InfloDb
{
    using System;
    using System.Collections.Generic;
    
    public partial class Configuration_RoadwaySubLinks
    {
        public string RoadwayId { get; set; }
        public string SubLinkId { get; set; }
        public double BeginMM { get; set; }
        public double EndMM { get; set; }
        public Nullable<short> SpeedLimit { get; set; }
        public Nullable<short> NumberLanes { get; set; }
        public string DownstreamSubLinkId { get; set; }
        public string UpstreamSubLinkId { get; set; }
        public string VSLSignID { get; set; }
        public string DMSID { get; set; }
        public string RSEID { get; set; }
        public string Direction { get; set; }
    }
}
