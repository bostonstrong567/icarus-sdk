// /Script/OnlineSubsystemEOS.ELeaderboardAggregation
UENUM()
enum class ELeaderboardAggregation : uint8
{
    EOS_LA_Min = 0,
    EOS_LA_Max = 1,
    EOS_LA_Sum = 2,
    EOS_LA_Latest = 3,
};

// /Script/OnlineSubsystemEOS.ELogLevel
UENUM()
enum class ELogLevel : uint8
{
    LL_Off = 0,
    LL_Fatal = 1,
    LL_Error = 2,
    LL_Warning = 3,
    LL_Info = 4,
    LL_Verbose = 5,
    LL_VeryVerbose = 6,
};
