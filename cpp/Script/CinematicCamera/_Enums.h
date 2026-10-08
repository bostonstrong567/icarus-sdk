// /Script/CinematicCamera.ECameraFocusMethod
UENUM()
enum class ECameraFocusMethod : uint8
{
    DoNotOverride = 0,
    Manual = 1,
    Tracking = 2,
    Disable = 3,
    MAX = 4,
};
