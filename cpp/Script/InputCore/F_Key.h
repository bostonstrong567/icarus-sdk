// /Script/InputCore.Key
// size 0x18, declared in Engine/Source/Runtime/InputCore/Classes/InputCoreTypes.h

USTRUCT()
struct FKey
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FName KeyName;  // 0x0000, size 0x8
    TSharedPtr<FKeyDetails,0> KeyDetails;  // 0x0008, not reflected
};
