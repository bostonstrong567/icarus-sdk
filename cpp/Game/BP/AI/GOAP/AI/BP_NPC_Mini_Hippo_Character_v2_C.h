// /Game/BP/AI/GOAP/AI/BP_NPC_Mini_Hippo_Character_v2.BP_NPC_Mini_Hippo_Character_v2_C
// Derives from: ABP_NPC_Mini_Hippo_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD18, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Mini_Hippo_Character_v2_C : public ABP_NPC_Mini_Hippo_Character_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_ArmoredHead;  // 0x0D10, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
