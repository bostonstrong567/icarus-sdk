// /Game/BP/AI/GOAP/AI/BP_NPC_Mini_Hippo_Character_v3.BP_NPC_Mini_Hippo_Character_v3_C
// Derives from: ABP_NPC_Mini_Hippo_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD20, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Mini_Hippo_Character_v3_C : public ABP_NPC_Mini_Hippo_Character_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Antler2;  // 0x0D10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Antler1;  // 0x0D18, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
