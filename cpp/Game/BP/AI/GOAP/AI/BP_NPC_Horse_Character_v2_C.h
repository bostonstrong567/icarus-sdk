// /Game/BP/AI/GOAP/AI/BP_NPC_Horse_Character_v2.BP_NPC_Horse_Character_v2_C
// Derives from: ABP_NPC_Horse_Character_C > ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCCC, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Horse_Character_v2_C : public ABP_NPC_Horse_Character_C
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 CosmeticSkinIndex;  // 0x0CC8, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ReplaceSelfWithDeadItem(AIcarusActor*& ReplacementActor, const TArray<FIcarusStatReplicated>& CustomStats);  // parameters 0x19
};
