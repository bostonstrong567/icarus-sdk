// /Game/BP/Quests/Elysium/Story/Story1/BPQ_ELY_Story_1_Beacon_Place_Player.BPQ_ELY_Story_1_Beacon_Place_Player_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_1_Beacon_Place_Player_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bNoPlacement;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float RequiredHeight;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bTooLow;  // 0x0478, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentHeight;  // 0x047C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckPlacement();
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_1_Beacon_Place_Player(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
