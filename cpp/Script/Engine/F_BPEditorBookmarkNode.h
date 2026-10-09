// /Script/Engine.BPEditorBookmarkNode
// size 0x38, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

USTRUCT()
struct FBPEditorBookmarkNode
{
public:
    UPROPERTY() FGuid NodeGuid;  // 0x0000, size 0x10
    UPROPERTY() FGuid ParentGuid;  // 0x0010, size 0x10
    UPROPERTY() FText DisplayName;  // 0x0020, size 0x18
};
