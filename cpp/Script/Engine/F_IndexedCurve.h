// /Script/Engine.IndexedCurve
// size 0x68, declared in Engine/Source/Runtime/Engine/Classes/Curves/IndexedCurve.h

USTRUCT()
struct FIndexedCurve
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(Transient) FKeyHandleMap KeyHandlesToIndices;  // 0x0008, size 0x60
};
