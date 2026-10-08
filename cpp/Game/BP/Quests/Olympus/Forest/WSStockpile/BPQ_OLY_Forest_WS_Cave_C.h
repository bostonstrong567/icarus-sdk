// /Game/BP/Quests/Olympus/Forest/WSStockpile/BPQ_OLY_Forest_WS_Cave.BPQ_OLY_Forest_WS_Cave_C
// Derives from: ABPQ_Travel_C > AQuest > AIcarusActor > AActor > UObject
// size 0x488, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_WS_Cave_C : public ABPQ_Travel_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0480, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
};
