// /Game/BP/AI/GOAP/AI/BP_NPC_LegendaryWeapon_Wolf_Character.BP_NPC_LegendaryWeapon_Wolf_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCC9, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_LegendaryWeapon_Wolf_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CC0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CC8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_NPC_LegendaryWeapon_Wolf_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ShouldOverrideTargetNeutrality(AActor* TargetActor, ERelationshipType& OutRelationshipType) const;  // parameters 0xA
};
