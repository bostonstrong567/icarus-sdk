// /Game/BP/Quests/Components/BPQC_PersistantBlocker.BPQC_PersistantBlocker_C
// Derives from: UActorComponent > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_PersistantBlocker_C : public UActorComponent
{
public:
    UFUNCTION(BlueprintCallable) bool GetPersistantBlocker(APersistentBlocker*& FoundBlocker);  // parameters 0x10
};
