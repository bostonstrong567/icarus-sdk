// /Script/Engine.ComponentKey
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/InheritableComponentHandler.h

USTRUCT()
struct FComponentKey
{
    UPROPERTY() TSubclassOf<UObject> OwnerClass;  // 0x0000, size 0x8
    UPROPERTY() FName SCSVariableName;  // 0x0008, size 0x8
    UPROPERTY() FGuid AssociatedGuid;  // 0x0010, size 0x10
};
