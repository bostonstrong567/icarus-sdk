// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Ape_Experiment_03.BP_Ape_Experiment_03_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x360, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Ape_Experiment_03_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Flies_FX;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FlyBuzzAudio;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh1;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecalComponent* Decal1_0;  // 0x0358, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_Ape_Experiment_03(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnHighlightChanged(UHighlightableComponent* Highlightable, UPrimitiveComponent* Component, bool bHighlighted);  // parameters 0x11
};
