// /Game/BP/Mounts/BP_Tame_Ram.BP_Tame_Ram_C
// Derives from: ABP_Tame_Sheep_C > ABP_Tame_Base_C > ABP_Mount_Base_C > AIcarusMountCharacter > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xF85, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_Tame_Ram_C : public ABP_Tame_Sheep_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ReplaceSelfWithDeadItem(AIcarusActor*& ReplacementActor, const TArray<FIcarusStatReplicated>& CustomStats);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void UpdateWoolCosmetics();
};
