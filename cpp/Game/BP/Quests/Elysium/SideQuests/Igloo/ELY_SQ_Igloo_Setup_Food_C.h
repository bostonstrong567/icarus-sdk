// /Game/BP/Quests/Elysium/SideQuests/Igloo/ELY_SQ_Igloo_Setup_Food.ELY_SQ_Igloo_Setup_Food_C
// Derives from: ABPQ_Common_Craft_C > AQuest > AIcarusActor > AActor > UObject
// size 0x48C, a blueprint class, blueprint

UCLASS(Config=Engine)
class AELY_SQ_Igloo_Setup_Food_C : public ABPQ_Common_Craft_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) void DeviceCheck(AActor* Device, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
