// /Script/SmoothSyncPlugin.ExtrapolationMode
UENUM()
enum class ExtrapolationMode : uint8
{
    UNLIMITED = 0,
    LIMITED = 1,
    NONE = 2,
};

// /Script/SmoothSyncPlugin.RestState
UENUM()
enum class RestState : uint8
{
    AT_REST = 0,
    JUST_STARTED_MOVING = 1,
    MOVING = 2,
};

// /Script/SmoothSyncPlugin.SyncMode
UENUM()
enum class SyncMode : uint8
{
    XYZ = 0,
    XY = 1,
    XZ = 2,
    YZ = 3,
    X = 4,
    Y = 5,
    Z = 6,
    NONE = 7,
};
