// /Script/Engine.SCS_Node
// Derives from: UObject
// size 0xD8, declared in Engine/Source/Runtime/Engine/Classes/Engine/SCS_Node.h

UCLASS(MinimalAPI)
class USCS_Node : public UObject
{
public:
    UPROPERTY() TSubclassOf<UObject> ComponentClass;  // 0x0028, size 0x8
    UPROPERTY(Instanced) UActorComponent* ComponentTemplate;  // 0x0030, size 0x8
    UPROPERTY() FBlueprintCookedComponentInstancingData CookedComponentInstancingData;  // 0x0038, size 0x48
    UPROPERTY() FName AttachToName;  // 0x0080, size 0x8
    UPROPERTY() FName ParentComponentOrVariableName;  // 0x0088, size 0x8
    UPROPERTY() FName ParentComponentOwnerClassName;  // 0x0090, size 0x8
    UPROPERTY() bool bIsParentComponentNative;  // 0x0098, size 0x1
    UPROPERTY() TArray<USCS_Node*> ChildNodes;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBPVariableMetaDataEntry> MetaDataArray;  // 0x00B0, size 0x10
    UPROPERTY() FGuid VariableGuid;  // 0x00C0, size 0x10
    UPROPERTY() FName InternalVariableName;  // 0x00D0, size 0x8
};
