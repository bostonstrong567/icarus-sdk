// /Game/BP/Player/BP_PlayerLoadoutComponent.BP_PlayerLoadoutComponent_C
// Derives from: UActorComponent > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerLoadoutComponent_C : public UActorComponent
{
public:
    UFUNCTION(BlueprintCallable) TArray<FItemData> GetLoadout();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPlayer(AIcarusPlayerCharacterSurvival*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Grant_MetaItems();  // named "Grant MetaItems"
};
