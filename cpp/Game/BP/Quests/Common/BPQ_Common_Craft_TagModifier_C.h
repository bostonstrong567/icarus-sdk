// /Game/BP/Quests/Common/BPQ_Common_Craft_TagModifier.BPQ_Common_Craft_TagModifier_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Craft_TagModifier_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery TagQuery;  // 0x0478, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Alteration;  // 0x04C0, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Craft_TagModifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnCraftItem(AActor* Player, AActor* Device, FItemData Item);  // parameters 0x200
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
