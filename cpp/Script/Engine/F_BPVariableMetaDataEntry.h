// /Script/Engine.BPVariableMetaDataEntry
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

USTRUCT()
struct FBPVariableMetaDataEntry
{
    UPROPERTY(EditAnywhere) FName DataKey;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FString DataValue;  // 0x0008, size 0x10
};
