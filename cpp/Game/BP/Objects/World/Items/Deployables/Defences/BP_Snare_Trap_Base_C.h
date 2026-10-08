// /Game/BP/Objects/World/Items/Deployables/Defences/BP_Snare_Trap_Base.BP_Snare_Trap_Base_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Snare_Trap_Base_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_HitVFX;  // 0x0730, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* OverlapBox;  // 0x0738, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool TrapOpen;  // 0x0740, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageAmount;  // 0x0744, size 0x4

    UFUNCTION(BlueprintCallable) void ApplyModifiers(AActor* Defender);  // parameters 0x8
    UFUNCTION() void BndEvt__BoxCombined_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void DealDamageToSelf();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DoDamage(int32 DamageAmount, AActor* Defender);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_Snare_Trap_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_TrapOpen();
};
