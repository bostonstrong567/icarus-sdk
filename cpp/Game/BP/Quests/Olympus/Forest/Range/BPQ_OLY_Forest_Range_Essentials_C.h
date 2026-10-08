// /Game/BP/Quests/Olympus/Forest/Range/BPQ_OLY_Forest_Range_Essentials.BPQ_OLY_Forest_Range_Essentials_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Forest_Range_Essentials_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FItemsStaticRowHandle, int32> ItemRow;  // 0x0470, size 0x50

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Forest_Range_Essentials(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RestockCheck();
    UFUNCTION(BlueprintCallable) void RestockItems();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
