// /Script/Engine.Node
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Animation/Rig.h

USTRUCT()
struct FNode
{
public:
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName ParentName;  // 0x0008, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0010, size 0x30
    UPROPERTY(EditAnywhere) FString DisplayName;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) bool bAdvanced;  // 0x0050, size 0x1
};
