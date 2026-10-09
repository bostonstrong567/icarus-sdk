// /Game/BP/Quests/Components/BPQC_Container_Items.BPQC_Container_Items_C
// Derives from: UBPQC_AnimalSwarm_C > UActorComponent > UObject
// size 0x1D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_Container_Items_C : public UBPQC_AnimalSwarm_C
{
public:
    UFUNCTION(BlueprintCallable) void AddItem(AIcarusActor* Container, FItemTemplateRowHandle Item, int32 Count);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void AddItems(AIcarusActor* Container, TMap<FItemTemplateRowHandle, int32> Items);  // parameters 0x58
};
