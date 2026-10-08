// /Game/BP/Mounts/BP_Mount_Zebra_Quest.BP_Mount_Zebra_Quest_C
// Derives from: ABP_Mount_Zebra_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF44, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Mount_Zebra_Quest_C : public ABP_Mount_Zebra_C
{
public:
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) int32 Variation;  // 0x0F40, size 0x4
};
