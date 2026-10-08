// /Game/BP/AI/GOAP/AI/BP_NPC_DeerDesertMedium_Character.BP_NPC_DeerDesertMedium_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCD8, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_DeerDesertMedium_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Antler2;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Antler1;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CD0, size 0x8

    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
};
