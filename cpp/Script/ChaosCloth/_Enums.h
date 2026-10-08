// /Script/ChaosCloth.EChaosClothTetherMode
UENUM()
enum class EChaosClothTetherMode : uint8
{
    FastTetherFastLength = 0,
    AccurateTetherFastLength = 1,
    AccurateTetherAccurateLength = 2,
    MaxChaosClothTetherMode = 3,
};

// /Script/ChaosCloth.EChaosWeightMapTarget
UENUM()
enum class EChaosWeightMapTarget : uint8
{
    None = 0,
    MaxDistance = 1,
    BackstopDistance = 2,
    BackstopRadius = 3,
    AnimDriveStiffness = 4,
    AnimDriveDamping = 5,
    TetherStiffness = 6,
};
