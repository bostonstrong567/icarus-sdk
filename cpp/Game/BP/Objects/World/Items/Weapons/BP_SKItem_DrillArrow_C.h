// /Game/BP/Objects/World/Items/Weapons/BP_SKItem_DrillArrow.BP_SKItem_DrillArrow_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5AC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SKItem_DrillArrow_C : public ASkeletalItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* ChargedAudio;  // 0x0588, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudio_ArrowFire;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsPreviewActor;  // 0x0598, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<PreviewActorType> PreviewType;  // 0x0599, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBP_ActionableBehaviour_FireArm_FireController_Charge_C* ChargeActionable;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargedAmount;  // 0x05A8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_SKItem_DrillArrow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitArrow();
    UFUNCTION(BlueprintCallable) void OnProjectileFired(FVector Impulse, FVector InstigatorVelocity, FProjectileFireParams AdvancedParameters);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnRep_PreviewType();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
};
