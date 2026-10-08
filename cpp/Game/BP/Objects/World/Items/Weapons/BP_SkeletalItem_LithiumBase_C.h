// /Game/BP/Objects/World/Items/Weapons/BP_SkeletalItem_LithiumBase.BP_SkeletalItem_LithiumBase_C
// Derives from: ASkeletalItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A2, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_SkeletalItem_LithiumBase_C : public ASkeletalItem, public IFillableConsumeInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioLoop;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MAGIC_UID;  // 0x0598, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierId;  // 0x059C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool bIsActive;  // 0x05A0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasEnergy;  // 0x05A1, size 0x1

    UFUNCTION(BlueprintCallable) void Add_Remove_Powered_Stat(bool Add);  // parameters 0x1, named "Add Remove Powered Stat"
    UFUNCTION(BlueprintCallable) void CheckPoweredState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ConsumeFuel(int32 Amount);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_SkeletalItem_LithiumBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPoweredParticleSystem(UNiagaraComponent*& System) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HasPoweredStat(bool& HasStat);  // parameters 0x1
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnActiveStateChanged();
    UFUNCTION(BlueprintCallable) void OnRep_HasEnergy();
    UFUNCTION(BlueprintCallable) void OnRep_bIsActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIsActive(bool State);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeFuel(const FHitResult& Hit, int32& AmountToConsume);  // parameters 0x8D
    UFUNCTION(BlueprintCallable) void TryToggleActive();
    UFUNCTION(BlueprintCallable) void UpdateStoredUnits();
};
