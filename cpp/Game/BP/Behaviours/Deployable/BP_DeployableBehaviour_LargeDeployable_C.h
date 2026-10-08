// /Game/BP/Behaviours/Deployable/BP_DeployableBehaviour_LargeDeployable.BP_DeployableBehaviour_LargeDeployable_C
// Derives from: UDeployableComponent > UTraitComponent > UActorComponent > UObject
// size 0xFC, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_DeployableBehaviour_LargeDeployable_C : public UDeployableComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* OriginalDeployable;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* SpawnedDeployable;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeployableRadius;  // 0x00F8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_DeployableBehaviour_LargeDeployable(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseHeldDeployment(ADeployable* OriginalDeployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDeploy(ADeployable* SpawnedDeployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnHeldDeployableDestroy(AActor* HeldDeployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnOriginalDeployableDestroy(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
