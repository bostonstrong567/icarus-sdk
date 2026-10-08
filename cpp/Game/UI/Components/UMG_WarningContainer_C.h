// /Game/UI/Components/UMG_WarningContainer.UMG_WarningContainer_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2E0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WarningContainer_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BlinkAll;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* Exposure;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* Food;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* Health;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInvalidationBox* InvalidationBox_0;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* Oxgen;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* RepairWarning;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* ShearingWarning;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* UpgradeWarning;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Warning_C* Water;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Water;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Health;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Food;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Oxygen;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WarnThreshold_Exposure;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFMODEventInstance Sound;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPlayerCharacterState* PlayerCharacterState;  // 0x02D8, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Destruct();
    UFUNCTION() void ExecuteUbergraph_UMG_WarningContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnAliveChanged(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnExposureUpdated(float NewExposure);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnFoodUpdated(int32 NewFood);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnHealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void OnInitialized();
    UFUNCTION(BlueprintCallable) void OnOxygenUpdated(int32 NewOxygen);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRepairWarningUpdated();
    UFUNCTION(BlueprintCallable) void OnShearingWarningUpdated();
    UFUNCTION(BlueprintCallable) void OnUpgradeWarningUpdated();
    UFUNCTION(BlueprintCallable) void OnWaterUpdated(int32 NewWater);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAudioPlayState(bool ShouldPlay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateAudio();
};
