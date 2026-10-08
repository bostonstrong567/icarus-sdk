// /Script/FieldSystemEngine.FieldObjectCommands
// size 0x30, declared in Engine/Source/Runtime/Experimental/FieldSystem/Source/FieldSystemEngine/Public/Field/FieldSystemObjects.h

USTRUCT()
struct FFieldObjectCommands
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> TargetNames;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UFieldNodeBase*> RootNodes;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UFieldSystemMetaData*> MetaDatas;  // 0x0020, size 0x10
};
