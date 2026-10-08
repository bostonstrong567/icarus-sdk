// /Game/BP/Behaviours/Modifiers/BP_ModifierStateBehaviour_Irradiated.BP_ModifierStateBehaviour_Irradiated_C
// Derives from: UModifierStateComponent > UActorComponent > UObject
// size 0x3F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierStateBehaviour_Irradiated_C : public UModifierStateComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseRadiationGain;  // 0x03D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Accumulation;  // 0x03D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Temp;  // 0x03D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> EquippedArmour;  // 0x03E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacterSurvival* Player;  // 0x03F0, size 0x8

    UFUNCTION(BlueprintCallable) void CheckHazmatSuit(int32& Pieces, AIcarusPlayerCharacterSurvival*& Player);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_ModifierStateBehaviour_Irradiated(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierRemoved();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
};
