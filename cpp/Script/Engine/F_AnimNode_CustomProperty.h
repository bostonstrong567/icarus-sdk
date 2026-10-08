// /Script/Engine.AnimNode_CustomProperty
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_CustomProperty.h

USTRUCT()
struct FAnimNode_CustomProperty : public FAnimNode_Base
{
    UPROPERTY() TArray<FName> SourcePropertyNames;  // 0x0010, size 0x10
    UPROPERTY() TArray<FName> DestPropertyNames;  // 0x0020, size 0x10
    UPROPERTY(Transient) UObject* TargetInstance;  // 0x0030, size 0x8

    // Not reflected:
    TArray<FProperty *,TSizedDefaultAllocator<32> > SourceProperties;  // 0x0038
    TArray<FProperty *,TSizedDefaultAllocator<32> > DestProperties;  // 0x0048
};
