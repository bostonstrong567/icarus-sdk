// /Game/BP/Quests/Olympus/Riverlands/Survey/BPQ_OLY_Riverlands_Survey_ScannerSetup.BPQ_OLY_Riverlands_Survey_ScannerSetup_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Riverlands_Survey_ScannerSetup_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Riverlands_Survey_ScannerSetup(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnItemRemoved(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
