// /Game/BP/Objects/World/Items/Deployables/Creatures/BP_Speeder_Kit.BP_Speeder_Kit_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x7A9, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Speeder_Kit_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AISetup;  // 0x0738, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemsStaticRowHandle, FAISetupRowHandle> ItemTOAI;  // 0x0750, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasSpawned;  // 0x07A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SkinIndex;  // 0x07A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsSmallCrate;  // 0x07A8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoSpawn(AActor* Instigator);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Speeder_Kit(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTameDataForOwningNPC(TScriptInterface<ISpawnableAI> Target, FTamesRowHandle& RowHandle, bool& Success);  // parameters 0x29
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_OpenCage();
};
