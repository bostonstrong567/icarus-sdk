// /Script/Engine.Blueprint
// Derives from: UBlueprintCore > UObject
// size 0xA0, declared in Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h

UCLASS(Config=Engine)
class UBlueprint : public UBlueprintCore
{
public:
    UPROPERTY() TSubclassOf<UObject> ParentClass;  // 0x0050, size 0x8
    UPROPERTY() TEnumAsByte<EBlueprintType> BlueprintType;  // 0x0058, size 0x1
    UPROPERTY(Config) uint8 bRecompileOnLoad : 1;  // 0x0059, mask 0x01
    UPROPERTY(Transient) uint8 bHasBeenRegenerated : 1;  // 0x0059, mask 0x02
    UPROPERTY(Transient) uint8 bIsRegeneratingOnLoad : 1;  // 0x0059, mask 0x04
    UPROPERTY() int32 BlueprintSystemVersion;  // 0x005C, size 0x4
    UPROPERTY() USimpleConstructionScript* SimpleConstructionScript;  // 0x0060, size 0x8
    UPROPERTY() TArray<UActorComponent*> ComponentTemplates;  // 0x0068, size 0x10
    UPROPERTY() TArray<UTimelineTemplate*> Timelines;  // 0x0078, size 0x10
    UPROPERTY() TArray<FBPComponentClassOverride> ComponentClassOverrides;  // 0x0088, size 0x10
    UPROPERTY() UInheritableComponentHandler* InheritableComponentHandler;  // 0x0098, size 0x8

    // Virtual functions that start here:
    //   GetInstanceActions, GetTypeActions, IsValidForBytecodeOnlyRecompile
    //   ShouldBeMarkedDirtyUponTransaction
};
