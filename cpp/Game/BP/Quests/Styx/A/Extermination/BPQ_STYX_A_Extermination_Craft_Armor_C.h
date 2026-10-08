// /Game/BP/Quests/Styx/A/Extermination/BPQ_STYX_A_Extermination_Craft_Armor.BPQ_STYX_A_Extermination_Craft_Armor_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x484, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_A_Extermination_Craft_Armor_C : public AQuest
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasItem;  // 0x0468, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Items_Static_Row_Handle;  // 0x046C, size 0x18, named "Items Static Row Handle"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
};
