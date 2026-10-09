// /Script/MeshDescription.ElementID
// size 0x4, declared in Engine/Source/Runtime/MeshDescription/Public/MeshTypes.h

USTRUCT()
struct FElementID
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintReadOnly) int32 IDValue;  // 0x0000, size 0x4
};
