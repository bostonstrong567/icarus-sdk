// /Game/BP/Behaviours/Actionable/BP_Actionable_FlameThrower.BP_Actionable_FlameThrower_C
// Derives from: UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x354, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_Actionable_FlameThrower_C : public UBP_ActionableBehaviour_Base_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OwningActor;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SkeletalItem_FlameThrower_Small_C* SKItem;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DoFire;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FMOD_Audio_Component;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DamageRange;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FlamethrowerAudio;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FillablePerTick;  // 0x0350, size 0x4

    UFUNCTION(BlueprintCallable) void CanFire(bool& CanFire);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_Actionable_FlameThrower(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable, NetMulticast) void Multi_SpawnFX(FVector ImpactPoint, FVector ImpactNormal);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayCamerashake(bool Initial);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProcessDamage();
    UFUNCTION(BlueprintCallable) void ProcessFuel();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SphereTrace();
    UFUNCTION(BlueprintCallable) void StopFire();
    UFUNCTION(BlueprintCallable) void TickTimer();
};
