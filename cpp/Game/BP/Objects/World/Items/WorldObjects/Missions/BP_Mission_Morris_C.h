// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Mission_Morris.BP_Mission_Morris_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x370, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Mission_Morris_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_2;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_0;  // 0x0358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBlockerRemoved BlockerRemoved;  // 0x0360, size 0x10

    UFUNCTION(BlueprintCallable) void BlockerRemoved__DelegateSignature();
    UFUNCTION() void ExecuteUbergraph_BP_Mission_Morris(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
};
