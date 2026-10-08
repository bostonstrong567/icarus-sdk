// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_LightBase.BP_SkeletalItem_LightBase_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5D4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_LightBase_C : public ASkeletalItem, public IBPI_LightSlotAttachInfoProvider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ActiveComponents;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool LightActive;  // 0x0590, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Underwater;  // 0x0591, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UnderwaterDepth;  // 0x0594, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnLightSwitchAction OnLightSwitchAction;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLightStateChanged LightStateChanged;  // 0x05A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsesFuel;  // 0x05B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FuelConsumptionAmount;  // 0x05BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FuelConsumptionTickRate;  // 0x05C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<LightSlotAttachPoint> LightSlotAttachPoint;  // 0x05C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreWater;  // 0x05C5, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCurrentlyOffset;  // 0x05C6, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PreOffsetLocation;  // 0x05C8, size 0xC

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanLight(bool& CanLight);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConsumeFuel();
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_LightBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FillableUnitsUpdated();
    UFUNCTION(BlueprintCallable) void FuelTick();
    UFUNCTION(BlueprintCallable) void GetAttachmentOffset(FTransform& ThirdPersonActorOffset, FTransform& FirstPersonActorOffset, FVector& ThirdPersonComponentOffset);  // parameters 0x6C
    UFUNCTION(BlueprintCallable) void GetComponentToOffset(USceneComponent*& Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLightActive(bool& LightActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetLightSlotAttachPoint(TEnumAsByte<LightSlotAttachPoint>& AttachPoint);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetThirdPersonOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasFuel(bool& Fuel);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsLit(bool& Lit);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LightStateChanged__DelegateSignature(bool ActiveState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LightUpdated();
    UFUNCTION(BlueprintCallable) void OnFloatableUpdated(bool Floating);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnLightSwitchAction__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnRep_LightActive();
    UFUNCTION(BlueprintCallable) void OnRep_Underwater();
    UFUNCTION(BlueprintCallable) void PrimaryFireToggle();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetItemVisible(bool bVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightAudioState(bool IsLit);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateCurrentOffset(FVector NewOffset);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void UpdateWaterState(bool Floating);  // parameters 0x1
};
