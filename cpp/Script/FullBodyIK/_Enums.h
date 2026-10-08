// /Script/FullBodyIK.EFBIKBoneLimitType
UENUM()
enum class EFBIKBoneLimitType : uint8
{
    Free = 0,
    Limit = 1,
    Locked = 2,
};

// /Script/FullBodyIK.EPoleVectorOption
UENUM()
enum class EPoleVectorOption : uint8
{
    Direction = 0,
    Location = 1,
};
