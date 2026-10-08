// /Game/BP/Behaviours/Focusable/BP_FocusableBehaviour_Chainsaw.BP_FocusableBehaviour_Chainsaw_C
// Derives from: UBP_FocusableBehaviour_C > UFocusableComponent > UTraitComponent > UActorComponent > UObject
// size 0x350, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_FocusableBehaviour_Chainsaw_C : public UBP_FocusableBehaviour_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0310, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFillableComponent* FillableReference;  // 0x0318, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasCachedFuelCheck;  // 0x0320, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasEnoughFuel;  // 0x0321, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* FPIdle;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* TPIdleStand;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimSequence* TPIdleCrouch;  // 0x0338, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* FPFocused;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* TPFocused;  // 0x0348, size 0x8

    UFUNCTION(BlueprintCallable) void CheckEnoughFuel(FStatsEnum StatFuelUse, FStatsEnum StatAttackSpeed, bool& HasEnoughFuel);  // parameters 0x21
    UFUNCTION() void ExecuteUbergraph_BP_FocusableBehaviour_Chainsaw(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetFocusedMontage(TSoftObjectPtr<UAnimMontage>& FPFocused_Montage, TSoftObjectPtr<UAnimMontage>& TPFocused_Montage, TSoftObjectPtr<UAnimMontage>& Item_Focused_Montage);  // parameters 0x78
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetIdleAnim(TSoftObjectPtr<UAnimSequence>& OutFPIdleAnim, TSoftObjectPtr<UAnimSequence>& OutTPStandingIdleAnim, TSoftObjectPtr<UAnimSequence>& OutTPCrouchedIdleAnim);  // parameters 0x78
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
