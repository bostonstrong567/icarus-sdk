// /Script/Engine.BPVariableDescription
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

USTRUCT()
struct FBPVariableDescription
{
    UPROPERTY(EditAnywhere) FName VarName;  // 0x0000, size 0x8
    UPROPERTY() FGuid VarGuid;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FEdGraphPinType VarType;  // 0x0018, size 0x58
    UPROPERTY(EditAnywhere) FString FriendlyName;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere) FText Category;  // 0x0080, size 0x18
    UPROPERTY(EditAnywhere) uint64 PropertyFlags;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere) FName RepNotifyFunc;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere) TEnumAsByte<ELifetimeCondition> ReplicationCondition;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere) TArray<FBPVariableMetaDataEntry> MetaDataArray;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) FString DefaultValue;  // 0x00C0, size 0x10
};
