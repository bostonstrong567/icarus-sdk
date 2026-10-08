// /Game/BP/Objects/World/Items/Deployables/OxiteDissolver/BP_Meta_Oxite_Dissolver_Printed.BP_Meta_Oxite_Dissolver_Printed_C
// Derives from: ABP_ProcessorBase_C > ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x9B1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Meta_Oxite_Dissolver_Printed_C : public ABP_ProcessorBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0980, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_oxiteDissolver_dropFX;  // 0x0988, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_oxiteDissolver_topFX;  // 0x0990, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Niagara;  // 0x0998, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_ActiveAudio_Combust;  // 0x09A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_ActiveAudio_Tanks;  // 0x09A8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bHasItem;  // 0x09B0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_Meta_Oxite_Dissolver_Printed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnItemChanged(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_bHasItem();
    UFUNCTION(BlueprintCallable) void ProcessorStateUpdate(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateEffects(bool Active);  // parameters 0x1
};
