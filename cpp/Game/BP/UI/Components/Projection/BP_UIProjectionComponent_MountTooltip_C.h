// /Game/BP/UI/Components/Projection/BP_UIProjectionComponent_MountTooltip.BP_UIProjectionComponent_MountTooltip_C
// Derives from: UBP_UIProjectionComponent_C > UActorComponent > UObject
// size 0x1F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_UIProjectionComponent_MountTooltip_C : public UBP_UIProjectionComponent_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsAlive;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Player;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SettingsEnable;  // 0x0138, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StatAbilityEnable;  // 0x0139, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DotToSee;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RangeToDotSee;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RangeToCloseCircleSee;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DotSeeEnable;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CircleCloseSee;  // 0x0149, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentActor;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RightOffset;  // 0x0158, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpOffset;  // 0x015C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnItemChanged OnItemChanged;  // 0x0160, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult CurrentInteractableHit;  // 0x0170, size 0x88

    UFUNCTION() void ExecuteUbergraph_BP_UIProjectionComponent_MountTooltip(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GatherBounds();
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetProjectionLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnItemChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnRep_IsAlive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateEnabled();
    UFUNCTION(BlueprintCallable) void UpdateWidget();
};
