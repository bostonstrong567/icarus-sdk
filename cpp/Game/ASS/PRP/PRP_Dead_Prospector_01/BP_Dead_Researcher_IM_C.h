// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_Researcher_IM.BP_Dead_Researcher_IM_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x368, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_Researcher_IM_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Pickaxe;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Latern;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* Backpack;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal_Blood;  // 0x0360, size 0x8

    UFUNCTION(BlueprintCallable) void CustomEvent_0(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION() void ExecuteUbergraph_BP_Dead_Researcher_IM(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
