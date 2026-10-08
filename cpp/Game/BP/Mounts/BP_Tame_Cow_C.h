// /Game/BP/Mounts/BP_Tame_Cow.BP_Tame_Cow_C
// Derives from: ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF60, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Cow_C : public ABP_Tame_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0F50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFillableComponent* Fillable;  // 0x0F58, size 0x8

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void DebugText();
    UFUNCTION() void ExecuteUbergraph_BP_Tame_Cow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnFillableUnitsUpdated();
};
