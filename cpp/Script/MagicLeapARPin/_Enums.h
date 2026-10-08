// /Script/MagicLeapARPin.EMagicLeapARPinType
UENUM()
enum class EMagicLeapARPinType : uint8
{
    SingleUserSingleSession = 0,
    SingleUserMultiSession = 1,
    MultiUserMultiSession = 2,
};

// /Script/MagicLeapARPin.EMagicLeapAutoPinType
UENUM()
enum class EMagicLeapAutoPinType : uint8
{
    OnlyOnDataRestoration = 0,
    Always = 1,
    Never = 2,
};

// /Script/MagicLeapARPin.EMagicLeapPassableWorldError
UENUM()
enum class EMagicLeapPassableWorldError : uint8
{
    None = 0,
    LowMapQuality = 1,
    UnableToLocalize = 2,
    Unavailable = 3,
    PrivilegeDenied = 4,
    InvalidParam = 5,
    UnspecifiedFailure = 6,
    PrivilegeRequestPending = 7,
    StartupPending = 8,
    SharedWorldNotEnabled = 9,
    NotImplemented = 10,
    PinNotFound = 11,
};
