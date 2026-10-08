// /Script/Engine.KeyHandleLookupTable
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Curves/KeyHandle.h

USTRUCT()
struct FKeyHandleLookupTable
{

    // Not reflected:
    TArray<TOptional<FKeyHandle>,TSizedDefaultAllocator<32> > KeyHandles;  // 0x0000
    TMap<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0> > KeyHandlesToIndices;  // 0x0010
};
