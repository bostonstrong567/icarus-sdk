// /Game/BP/AI/GOAP/AI/BP_NPC_Quest_Sandwyrm_Queen_Character.BP_NPC_Quest_Sandwyrm_Queen_Character_C
// Derives from: ABP_NPC_Sandwyrm_Queen_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD6C, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Quest_Sandwyrm_Queen_Character_C : public ABP_NPC_Sandwyrm_Queen_Character_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert_0;  // 0x0D50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner1;  // 0x0D58, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<WyrmQueenState> WyrmState_0;  // 0x0D60, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsDiving_0;  // 0x0D61, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName WyrmStateKey_0;  // 0x0D64, size 0x8
};
