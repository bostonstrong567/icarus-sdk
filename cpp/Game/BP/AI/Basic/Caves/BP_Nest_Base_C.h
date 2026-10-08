// /Game/BP/AI/Basic/Caves/BP_Nest_Base.BP_Nest_Base_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x354, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Nest_Base_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool bGeneratedRewards;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemRewardsRowHandle LootRewards;  // 0x033C, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintPure) void AddExtraLoot(TArray<FItemData>& ExtraLoot);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GenerateItem(FItemTemplateRowHandle Item, int32 Amount, FItemData& OutputItem);  // parameters 0x210
    UFUNCTION(BlueprintCallable) void WorldObject_Interact(AActor* Instigator);  // parameters 0x8
};
