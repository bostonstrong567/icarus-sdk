// /Script/OnlineSubsystemIcarus.ELobbyStatus
UENUM()
enum class ELobbyStatus : uint8
{
    Waiting = 0,
    Loading = 1,
    InGame = 2,
};

// /Script/OnlineSubsystemIcarus.ELoginFailure
UENUM()
enum class ELoginFailure : uint8
{
    LoginFailure_None = 0,
    LoginFailure_UndefinedID = 1,
    LoginFailure_EventNameNotSupplied = 2,
    LoginFailure_AuthTokenNotSupplied = 3,
    LoginFailure_UserIDNotSupplied = 4,
    LoginFailure_AuthTypeNotSupplied = 5,
    LoginFailure_VersionNotSuppliedOrLow = 6,
    LoginFailure_InvalidAuthToken = 7,
    LoginFailure_FailedToLoginThirdParty = 8,
};

// /Script/OnlineSubsystemIcarus.EOnlinePresenceStatusIcarus
UENUM()
enum class EOnlinePresenceStatusIcarus : uint8
{
    ICARUS_PS_Online = 0,
    ICARUS_PS_Offline = 1,
    ICARUS_PS_Away = 2,
    ICARUS_PS_ExtendedAway = 3,
    ICARUS_PS_DoNotDisturb = 4,
};

// /Script/OnlineSubsystemIcarus.EThresholdType
UENUM()
enum class EThresholdType : uint8
{
    Absoulute = 0,
    Relative = 1,
    Percent = 2,
};
