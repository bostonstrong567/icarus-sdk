// /Game/BP/Quests/Implementations/Bw6_Recovery/BP_BW6_Recovery_Location.BP_BW6_Recovery_Location_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW6_Recovery_Location_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_SearchArea_C* BPQC_SearchArea;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> Container_Class;  // 0x0478, size 0x8, named "Container Class"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FItemsStaticRowHandle Recovered_Item;  // 0x0480, size 0x18, named "Recovered Item"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FString Name;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FQuestQueriesRowHandle SearchAreaRow;  // 0x04A8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform Transform;  // 0x04C0, size 0x30

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW6_Recovery_Location(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
