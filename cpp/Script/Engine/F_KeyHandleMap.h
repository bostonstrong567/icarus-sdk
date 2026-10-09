// /Script/Engine.KeyHandleMap
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Curves/KeyHandle.h

USTRUCT()
struct FKeyHandleMap
{
private:
    TMap<FKeyHandle,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FKeyHandle,int,0> > KeyHandlesToIndices;  // 0x0000, not reflected
    TArray<FKeyHandle,TSizedDefaultAllocator<32> > KeyHandles;  // 0x0050, not reflected
};
