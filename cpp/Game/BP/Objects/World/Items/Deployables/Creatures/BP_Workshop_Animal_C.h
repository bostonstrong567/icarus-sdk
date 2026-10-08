// /Game/BP/Objects/World/Items/Deployables/Creatures/BP_Workshop_Animal.BP_Workshop_Animal_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7C1, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Workshop_Animal_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_DEP_Trap_Small_T4;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* SFX_AirHiss;  // 0x0738, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_CryogenicCrate;  // 0x0740, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0748, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0750, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemsStaticRowHandle, FAISetupRowHandle> ItemTOAI;  // 0x0768, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSpawned;  // 0x07B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SkinIndex;  // 0x07BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSmallCrate;  // 0x07C0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoSpawn(AActor* Instigator);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Workshop_Animal(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTameDataForOwningNPC(TScriptInterface<ISpawnableAI> Target, FTamesRowHandle& RowHandle, bool& Success);  // parameters 0x29
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_OpenCage();
};
