// /Script/AdvancedSessions.EBPLoginStatus
UENUM()
enum class EBPLoginStatus : uint8
{
    NotLoggedIn = 0,
    UsingLocalProfile = 1,
    LoggedIn = 2,
};

// /Script/AdvancedSessions.EBPOnlinePresenceState
UENUM()
enum class EBPOnlinePresenceState : uint8
{
    Online = 0,
    Offline = 1,
    Away = 2,
    ExtendedAway = 3,
    DoNotDisturb = 4,
    Chat = 5,
};

// /Script/AdvancedSessions.EBPOnlineSessionState
UENUM()
enum class EBPOnlineSessionState : uint8
{
    NoSession = 0,
    Creating = 1,
    Pending = 2,
    Starting = 3,
    InProgress = 4,
    Ending = 5,
    Ended = 6,
    Destroying = 7,
};

// /Script/AdvancedSessions.EBPServerPresenceSearchType
UENUM()
enum class EBPServerPresenceSearchType : uint8
{
    AllServers = 0,
    ClientServersOnly = 1,
    DedicatedServersOnly = 2,
};

// /Script/AdvancedSessions.EBPUserPrivileges
UENUM()
enum class EBPUserPrivileges : uint8
{
    CanPlay = 0,
    CanPlayOnline = 1,
    CanCommunicateOnline = 2,
    CanUseUserGeneratedContent = 3,
};

// /Script/AdvancedSessions.EBlueprintAsyncResultSwitch
UENUM()
enum class EBlueprintAsyncResultSwitch : uint8
{
    OnSuccess = 0,
    AsyncLoading = 1,
    OnFailure = 2,
};

// /Script/AdvancedSessions.EBlueprintResultSwitch
UENUM()
enum class EBlueprintResultSwitch : uint8
{
    OnSuccess = 0,
    OnFailure = 1,
};

// /Script/AdvancedSessions.EOnlineAdvertisementType
UENUM()
enum class EOnlineAdvertisementType : uint8
{
    DontAdvertise = 0,
    ViaPingOnly = 1,
    ViaOnlineService = 2,
    ViaOnlineServiceAndPing = 3,
};

// /Script/AdvancedSessions.EOnlineComparisonOpRedux
UENUM()
enum class EOnlineComparisonOpRedux : uint8
{
    Equals = 0,
    NotEquals = 1,
    GreaterThan = 2,
    GreaterThanEquals = 3,
    LessThan = 4,
    LessThanEquals = 5,
};

// /Script/AdvancedSessions.ESessionSettingSearchResult
UENUM()
enum class ESessionSettingSearchResult : uint8
{
    Found = 0,
    NotFound = 1,
    WrongType = 2,
};
