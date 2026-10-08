// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Ape_Corpse_004.BP_Ape_Corpse_004_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3E0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Corpse_004_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_Bunker_Prop_2;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x0350, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShackled Shackled;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool bIsShackled;  // 0x0368, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot RagdollPose;  // 0x0370, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot NetworkedPose;  // 0x03A8, size 0x38

    UFUNCTION() void ExecuteUbergraph_BP_Ape_Corpse_004(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void OnRep_bIsShackled();
    UFUNCTION(BlueprintCallable) void Shackled__DelegateSignature();
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
