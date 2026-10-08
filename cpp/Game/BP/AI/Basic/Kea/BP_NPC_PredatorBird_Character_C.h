// /Game/BP/AI/Basic/Kea/BP_NPC_PredatorBird_Character.BP_NPC_PredatorBird_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCD8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_PredatorBird_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsScared;  // 0x0CC0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsScaredKeyName;  // 0x0CC4, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsDiving;  // 0x0CCC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName IsDivingKeyName;  // 0x0CD0, size 0x8

    UFUNCTION(BlueprintCallable) bool CanKillcam();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_NPC_PredatorBird_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateVocalisationState();
};
