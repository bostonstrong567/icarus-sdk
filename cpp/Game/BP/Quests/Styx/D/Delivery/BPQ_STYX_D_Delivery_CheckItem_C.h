// /Game/BP/Quests/Styx/D/Delivery/BPQ_STYX_D_Delivery_CheckItem.BPQ_STYX_D_Delivery_CheckItem_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_STYX_D_Delivery_CheckItem_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Timeout;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float MaxTime;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<EDeliveryItemStatus> State;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Required_Stats;  // 0x0480, size 0x10, named "Required Stats"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle Items_Static_Row_Handle;  // 0x0490, size 0x18, named "Items Static Row Handle"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Player;  // 0x04A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InvalidTemperature;  // 0x04B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CurrentPlayerName;  // 0x04B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* ItemHolder;  // 0x04C8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Check_Item();  // named "Check Item"
    UFUNCTION() void ExecuteUbergraph_BPQ_STYX_D_Delivery_CheckItem(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void RunManualCheck();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
