// /Script/Engine.EdGraphTerminalType
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphNode.h

USTRUCT()
struct FEdGraphTerminalType
{
    UPROPERTY() FName TerminalCategory;  // 0x0000, size 0x8
    UPROPERTY() FName TerminalSubCategory;  // 0x0008, size 0x8
    UPROPERTY() TWeakObjectPtr<UObject> TerminalSubCategoryObject;  // 0x0010, size 0x8
    UPROPERTY() bool bTerminalIsConst;  // 0x0018, size 0x1
    UPROPERTY() bool bTerminalIsWeakPointer;  // 0x0019, size 0x1
    UPROPERTY() bool bTerminalIsUObjectWrapper;  // 0x001A, size 0x1
};
