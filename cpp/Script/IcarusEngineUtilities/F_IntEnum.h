// /Script/IcarusEngineUtilities.IntEnum
// size 0x10, declared in Engine/Source/Runtime/IcarusEngineUtilities/Public/IntEnum.h

USTRUCT()
struct FIntEnum
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Value;  // 0x0008, size 0x8
};
