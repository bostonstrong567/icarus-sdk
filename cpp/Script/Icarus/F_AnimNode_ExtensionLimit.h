// /Script/Icarus.AnimNode_ExtensionLimit
// size 0xD8, declared in Icarus/Source/Icarus/Animation/AnimNode_ExtensionLimit.h

USTRUCT()
struct FAnimNode_ExtensionLimit : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FExtensionLimitLimbDefinition> LimbDefinitions;  // 0x00C8, size 0x10
};
