// /Script/IcarusUtilities.MultiRowHandle
// size 0x10, declared in Icarus/Source/IcarusUtilities/Public/MultiRowHandle.h

USTRUCT()
struct FMultiRowHandle
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName RowName;  // 0x0008, size 0x8
};
