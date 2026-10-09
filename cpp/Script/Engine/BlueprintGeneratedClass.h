// /Script/Engine.BlueprintGeneratedClass
// Derives from: UClass > UStruct > UField > UObject
// size 0x328, declared in Engine/Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h

UCLASS()
class UBlueprintGeneratedClass : public UClass
{
public:
    UPROPERTY() int32 NumReplicatedProperties;  // 0x0230, size 0x4
    UPROPERTY() uint8 bHasNativizedParent : 1;  // 0x0234, mask 0x01
    UPROPERTY() uint8 bHasCookedComponentInstancingData : 1;  // 0x0234, mask 0x02
    UPROPERTY() TArray<UDynamicBlueprintBinding*> DynamicBindingObjects;  // 0x0238, size 0x10
    UPROPERTY() TArray<UActorComponent*> ComponentTemplates;  // 0x0248, size 0x10
    UPROPERTY() TArray<UTimelineTemplate*> Timelines;  // 0x0258, size 0x10
    UPROPERTY() TArray<FBPComponentClassOverride> ComponentClassOverrides;  // 0x0268, size 0x10
    UPROPERTY() USimpleConstructionScript* SimpleConstructionScript;  // 0x0278, size 0x8
    UPROPERTY() UInheritableComponentHandler* InheritableComponentHandler;  // 0x0280, size 0x8
    UPROPERTY(Deprecated) UStructProperty* UberGraphFramePointerProperty;  // 0x0288, size 0x8
    FStructProperty * UberGraphFramePointerProperty;  // 0x0290, not reflected
    UPROPERTY() UFunction* UberGraphFunction;  // 0x0298, size 0x8
    UPROPERTY() TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData;  // 0x02A0, size 0x50
private:
    uint8 : 1 bCustomPropertyListForPostConstructionInitialized;  // 0x0234, not reflected
    TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32> > CustomPropertyListForPostConstruction;  // 0x02F0, not reflected
    FWindowsCriticalSection SerializeAndPostLoadCritical;  // 0x0300, not reflected

    // Virtual functions that start here:
    //   GetLifetimeBlueprintReplicationList, InstancePreReplication
};
