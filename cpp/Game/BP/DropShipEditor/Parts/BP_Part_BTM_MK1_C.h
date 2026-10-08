// /Game/BP/DropShipEditor/Parts/BP_Part_BTM_MK1.BP_Part_BTM_MK1_C
// Derives from: ABP_PartBase_C > AIcarusRocketPart > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x605, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Part_BTM_MK1_C : public ABP_PartBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* FxTakeOffThruster;  // 0x05E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* FxLandingThruster;  // 0x05F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* SkeletalMesh;  // 0x05F8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool EngineActive;  // 0x0600, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool EngineAudioActive;  // 0x0601, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool FeetDeployed;  // 0x0602, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool LandingThrusterFX;  // 0x0603, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TakeoffThrusterFX;  // 0x0604, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMesh(UPrimitiveComponent*& Mesh);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_LandingThrusterFX();
    UFUNCTION(BlueprintCallable) void OnRep_TakeoffThrusterFX();
    UFUNCTION(BlueprintCallable) void TriggerEvent(FDropShipActionsEnum Actions);  // parameters 0x10
};
