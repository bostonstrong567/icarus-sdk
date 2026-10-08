// /Script/InputCore.Key
// size 0x18, declared in Engine/Source/Runtime/InputCore/Classes/InputCoreTypes.h

USTRUCT()
struct FKey
{
    UPROPERTY() FName KeyName;  // 0x0000, size 0x8

    // Not reflected:
    TSharedPtr<FKeyDetails,0> KeyDetails;  // 0x0008
};
