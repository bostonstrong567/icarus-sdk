// /Script/Engine.AutoCompleteNode
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/Console.h

USTRUCT()
struct FAutoCompleteNode
{
    UPROPERTY() int32 IndexChar;  // 0x0000, size 0x4
    UPROPERTY() TArray<int32> AutoCompleteListIndices;  // 0x0008, size 0x10

    // Not reflected:
    TArray<FAutoCompleteNode *,TSizedDefaultAllocator<32> > ChildNodes;  // 0x0018
};
